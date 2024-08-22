// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDOORBELLCHIMECONTROLLER_H
#define HMDDOORBELLCHIMECONTROLLER_H

@class HMFObject, NSSet, NSString, NSDate;
@protocol HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging, HMDDoorbellChimeControllerContext;



@interface HMDDoorbellChimeController : HMFObject <HMDCharacteristicsAvailabilityListenerDelegate, HMFLogging>



@property (copy) NSSet *availableCharacteristics; // ivar: _availableCharacteristics
@property (readonly) NSObject<HMDDoorbellChimeControllerContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSDate *lastUnidentifiedChimeDate; // ivar: _lastUnidentifiedChimeDate
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_isDoorbellChimeSettingEnabledForHomePodAccessory:(id)arg0 ;
-(NSUInteger)_numHomePodsWithDoorbellChimeEnabled;
-(id)_destinationIDsToNotifyForDoorbellChimeUsingCoreUtilAction;
-(id)clientIdentifier;
-(id)initWithContext:(id)arg0 ;
-(id)initWithWorkQueue:(id)arg0 accessory:(id)arg1 ;
-(id)logIdentifier;
-(void)_chimeCoreUtilDoorbellWithDestination:(id)arg0 shouldPlayChime:(BOOL)arg1 logEvent:(id)arg2 personIdentificationText:(id)arg3 ;
-(void)_handleCharacteristicsValueUpdatedNotification:(id)arg0 ;
-(void)_notifyAllAccessoriesForDoorbellPressAndPlayChimeSound:(BOOL)arg0 attemptCloudPullIfNoPersonsFound:(BOOL)arg1 ;
-(void)configure;
-(void)dealloc;
-(void)handleCharacteristicsValueUpdatedNotification:(id)arg0 ;
-(void)handleUpdatedPersonIdentificationInformation;
-(void)listener:(id)arg0 didUpdateAvailableCharacteristics:(id)arg1 ;


@end


#endif