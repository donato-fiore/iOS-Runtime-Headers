// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPREDICATEUTILITIES_H
#define HMDPREDICATEUTILITIES_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMDHome.h"

@interface HMDPredicateUtilities : HMFObject <HMFLogging>



@property NSUInteger cameraSignificantEvent; // ivar: _cameraSignificantEvent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property NSUInteger personFamiliarityOptions; // ivar: _personFamiliarityOptions
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)containsPresenceEvents:(id)arg0 ;
-(id)addDeltaToNow:(id)arg0 ;
-(id)comparePresence:(id)arg0 operatorType:(id)arg1 homePresence:(id)arg2 ;
-(id)compareValueOfCharacteristic:(id)arg0 againstValue:(id)arg1 operatorType:(id)arg2 ;
-(id)dateTodayMatchingComponents:(id)arg0 ;
-(id)generateAnalyticsData:(id)arg0 ;
-(id)initWithHome:(id)arg0 logIdentifier:(id)arg1 ;
-(id)rewriteNowAdjustedForHomeTimeZone:(id)arg0 ;
-(id)rewritePredicate:(id)arg0 currentCharacteristicInPredicate:(*id)arg1 characteristicsToRead:(id)arg2 homePresence:(id)arg3 ;
-(id)rewritePredicate:(id)arg0 forDaemon:(BOOL)arg1 message:(id)arg2 ;
-(id)rewritePredicateForClient:(id)arg0 ;
-(id)rewritePredicateForDaemon:(id)arg0 message:(id)arg1 ;
-(id)sunrise;
-(id)sunset;
-(id)updatePredicate:(id)arg0 currentCharacteristicInPredicate:(*id)arg1 conditionModified:(*BOOL)arg2 removedCharacteristic:(id)arg3 underService:(id)arg4 underAccessory:(id)arg5 ;
-(id)updatePredicate:(id)arg0 removedUser:(id)arg1 conditionModified:(*BOOL)arg2 ;
-(void)fillAnalyticsData:(id)arg0 forPredicate:(id)arg1 ;


@end


#endif