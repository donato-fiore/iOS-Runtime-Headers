// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMAPPSTOREDATAVIEWCONFIGURATIONSINVOCATIONRESULT_H
#define REMAPPSTOREDATAVIEWCONFIGURATIONSINVOCATIONRESULT_H

@protocol NSSecureCoding;


#import "REMStoreInvocationResult.h"

@interface REMAppStoreDataViewConfigurationsInvocationResult : REMStoreInvocationResult <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger createdOrCompletedRemindersCountThreshold; // ivar: _createdOrCompletedRemindersCountThreshold
@property (readonly, nonatomic) NSUInteger numberOfForegroundsThreshold; // ivar: _numberOfForegroundsThreshold
@property (readonly, nonatomic) CGFloat timeIntervalOfInterest; // ivar: _timeIntervalOfInterest
@property (readonly, nonatomic) CGFloat timeIntervalSinceInitialForeground; // ivar: _timeIntervalSinceInitialForeground
@property (readonly, nonatomic) CGFloat timeIntervalSinceLastFetch; // ivar: _timeIntervalSinceLastFetch
@property (readonly, nonatomic) CGFloat timeIntervalSinceLastPrompt; // ivar: _timeIntervalSinceLastPrompt


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCreatedOrCompletedRemindersCountThreshold:(NSUInteger)arg0 numberOfForegroundsThreshold:(NSUInteger)arg1 timeIntervalOfInterest:(CGFloat)arg2 timeIntervalSinceInitialForeground:(CGFloat)arg3 timeIntervalSinceLastPrompt:(CGFloat)arg4 timeIntervalSinceLastFetch:(CGFloat)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif