// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREGIONSTATECORRECTNESSLOGEVENT_H
#define HMDREGIONSTATECORRECTNESSLOGEVENT_H

@class HMMLogEvent, NSString, NSDictionary;
@protocol HMMCoreAnalyticsLogging;



@interface HMDRegionStateCorrectnessLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL firstAccessoryReachable; // ivar: _firstAccessoryReachable
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isStateCorrect; // ivar: _isStateCorrect
@property (readonly) BOOL regionStateAtHome; // ivar: _regionStateAtHome
@property (readonly) BOOL regionStateNearByHome; // ivar: _regionStateNearByHome
@property (readonly) BOOL regionStateUnknown; // ivar: _regionStateUnknown
@property (readonly) Class superclass;


+(id)updateWithFirstAccessory:(NSInteger)arg0 nearbyHome:(NSInteger)arg1 ;
+(id)updateWithRegion:(NSInteger)arg0 nearbyHome:(NSInteger)arg1 accessoryReachable:(BOOL)arg2 ;
-(id)initWithReason:(NSUInteger)arg0 firstAccessoryReachable:(BOOL)arg1 regionStateAtHome:(NSInteger)arg2 regionStateNearByHome:(NSInteger)arg3 isStateCorrect:(BOOL)arg4 ;


@end


#endif