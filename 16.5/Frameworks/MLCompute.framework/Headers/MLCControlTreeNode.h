// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCCONTROLTREENODE_H
#define MLCCONTROLTREENODE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MLCTensor.h"

@interface MLCControlTreeNode : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL needToNegate; // ivar: _needToNegate
@property (readonly, nonatomic) MLCTensor *predicate; // ivar: _predicate


+(id)controlTreeNodeWithPredicate:(id)arg0 needToNegate:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTensor:(id)arg0 needToNegate:(BOOL)arg1 ;


@end


#endif