// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKCHANGEGROUP_H
#define TSKCHANGEGROUP_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSKChangeGroup : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableArray *changesArray; // ivar: _changesArray


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithChangesArray:(id)arg0 ;
-(void)registerChange:(unsigned int)arg0 details:(id)arg1 forChangeSource:(id)arg2 ;


@end


#endif