// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMWEAKOBJECTHANDLE_H
#define RLMWEAKOBJECTHANDLE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "RLMObjectBase.h"

@interface RLMWeakObjectHandle : NSObject <NSCopying>

 {
    BasicRow<realm::Table> _row;
    *void _info;
    Class _objectClass;
}


@property (readonly, nonatomic) RLMObjectBase *object;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithObject:(id)arg0 ;


@end


#endif