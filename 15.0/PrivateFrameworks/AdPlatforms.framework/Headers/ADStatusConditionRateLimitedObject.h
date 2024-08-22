// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADSTATUSCONDITIONRATELIMITEDOBJECT_H
#define ADSTATUSCONDITIONRATELIMITEDOBJECT_H

@class NSDate, NSUUID;

#import <Foundation/Foundation.h>


@interface ADStatusConditionRateLimitedObject : NSObject

@property (readonly, nonatomic) NSInteger operation; // ivar: _operation
@property (readonly, nonatomic) NSDate *setTime; // ivar: _setTime
@property (readonly, nonatomic) NSUUID *statusCondition; // ivar: _statusCondition


-(id)init:(id)arg0 at:(id)arg1 kind:(NSInteger)arg2 ;


@end


#endif