// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMMEDIAUSAGEEVENT_H
#define BMMEDIAUSAGEEVENT_H

@class NSURL, NSString, NSDateInterval;
@protocol BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating;


#import "BMEventBase.h"

@interface BMMediaUsageEvent : BMEventBase <BMEventBinaryStepping, BMEventTimeElapsing, BMEventAppAssociating>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (nonatomic) CGFloat absoluteTimestamp;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *mediaURL; // ivar: _mediaURL
@property (nonatomic, getter=isStarting) BOOL starting;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUsageTrusted) BOOL usageTrusted; // ivar: _usageTrusted


-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithBegin:(BOOL)arg0 bundleID:(id)arg1 URL:(id)arg2 mediaURL:(id)arg3 timestamp:(id)arg4 ;
-(id)initWithBegin:(BOOL)arg0 bundleID:(id)arg1 URL:(id)arg2 mediaURL:(id)arg3 usageTrusted:(BOOL)arg4 timestamp:(id)arg5 ;


@end


#endif