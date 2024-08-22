// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMELOCATIONLOGEVENT_H
#define HMDHOMELOCATIONLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDHomeLocationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat homeLocationDistance; // ivar: _homeLocationDistance
@property (readonly) int isGreatDistance; // ivar: _isGreatDistance
@property (readonly) Class superclass;


+(id)updateWithHomeDistance:(CGFloat)arg0 ;
-(id)initWithDistance:(CGFloat)arg0 ;


@end


#endif