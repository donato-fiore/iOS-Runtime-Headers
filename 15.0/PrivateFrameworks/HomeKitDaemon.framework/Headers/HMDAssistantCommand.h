// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDASSISTANTCOMMAND_H
#define HMDASSISTANTCOMMAND_H

@class SAHACommand, NSString, NSArray;
@protocol AFServiceCommand, HMFLogging, OS_dispatch_queue;


#import "HMDAssistantCommandHelper.h"
#import "HMDAssistantGather.h"
#import "HMDHome.h"
#import "HMDHomeManager.h"

@interface HMDAssistantCommand : SAHACommand <AFServiceCommand, HMFLogging>



@property (retain, nonatomic) HMDAssistantCommandHelper *assistantCommandHelper; // ivar: _assistantCommandHelper
@property (nonatomic) BOOL completionHandlerCalled; // ivar: _completionHandlerCalled
@property (retain, nonatomic) NSString *currentHomeAssistantIdentifier; // ivar: _currentHomeAssistantIdentifier
@property (retain, nonatomic) NSString *currentHomeName; // ivar: _currentHomeName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HMDAssistantGather *gather; // ivar: _gather
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDHome *home; // ivar: _home
@property (retain, nonatomic) NSArray *homeKitObjects; // ivar: _homeKitObjects
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (nonatomic) NSInteger numberOfHomes; // ivar: _numberOfHomes
@property (retain, nonatomic) NSString *primaryHomeAssistantIdentifier; // ivar: _primaryHomeAssistantIdentifier
@property (retain, nonatomic) NSString *primaryHomeName; // ivar: _primaryHomeName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (readonly) Class superclass;


+(id)logCategory;
+(void)initialize;
-(BOOL)isAttributeValue:(id)arg0 equalTo:(id)arg1 ;
-(BOOL)populateColorResult:(id)arg0 serviceType:(id)arg1 service:(id)arg2 action:(id)arg3 responses:(id)arg4 forObjects:(id)arg5 ;
-(BOOL)populateMediaProfileWriteResult:(id)arg0 withValue:(id)arg1 serviceType:(id)arg2 action:(id)arg3 ;
-(BOOL)populateResult:(id)arg0 fromResponse:(id)arg1 responses:(id)arg2 forAction:(id)arg3 serviceType:(id)arg4 forObjects:(id)arg5 ;
-(BOOL)populateResult:(id)arg0 withObject:(id)arg1 serviceType:(id)arg2 action:(id)arg3 ;
-(BOOL)populateResult:(id)arg0 withService:(id)arg1 serviceType:(id)arg2 characteristic:(id)arg3 resultAttribute:(id)arg4 action:(id)arg5 ;
-(BOOL)populateResultWithEntity:(id)arg0 action:(id)arg1 entity:(id)arg2 ;
-(id)_evaluateHomeOptionallyMatchingHomeName:(id)arg0 ;
-(id)_homeWithSearchFilter:(id)arg0 ;
-(id)actionOutcomeFromError:(id)arg0 ;
-(id)actionResultForCharacteristic:(id)arg0 actionSet:(id)arg1 action:(id)arg2 objects:(id)arg3 error:(id)arg4 ;
-(id)actionResultForMediaProfile:(id)arg0 action:(id)arg1 objects:(id)arg2 error:(id)arg3 ;
-(id)addCharacteristicsFromRelatedServicesFor:(id)arg0 assistantObjects:(id)arg1 ;
-(id)addStatusCharacteristicsIfNeeded:(id)arg0 ;
-(id)adjustGetValue:(id)arg0 type:(id)arg1 units:(id)arg2 attribute:(id)arg3 ;
-(id)adjustSetValue:(id)arg0 type:(id)arg1 units:(id)arg2 attribute:(id)arg3 ;
-(id)compareCurrentValue:(id)arg0 newValue:(id)arg1 withMetadata:(id)arg2 ;
-(id)compareForBoundary:(id)arg0 withMetadata:(id)arg1 ;
-(id)entityFromActionSet:(id)arg0 ;
-(id)failedActionResultsFromResponse:(id)arg0 inActionSet:(id)arg1 withAction:(id)arg2 ;
-(id)filterObjects:(id)arg0 forCharacteristicTypes:(id)arg1 ;
-(id)filterObjects:(id)arg0 forCharacteristics:(id)arg1 ;
-(id)filteredObjectsFromObjects:(id)arg0 byAttribute:(id)arg1 forActionType:(id)arg2 ;
-(id)filteredObjectsFromObjects:(id)arg0 byCharacteristicType:(id)arg1 ;
-(id)filteredObjectsFromObjects:(id)arg0 forGroup:(id)arg1 ;
-(id)filteredObjectsFromObjects:(id)arg0 forHomeName:(id)arg1 roomName:(id)arg2 zoneName:(id)arg3 ;
-(id)getLocaleUnits:(id)arg0 ;
-(id)getValueOfType:(id)arg0 action:(id)arg1 ;
-(id)handleReadWriteResponses:(id)arg0 error:(id)arg1 forAction:(id)arg2 inServiceType:(id)arg3 results:(id)arg4 forObjects:(id)arg5 ;
-(id)mediaProfileFromObject:(id)arg0 ;
-(id)objectsWithIdentifierList:(id)arg0 error:(*id)arg1 ;
-(id)objectsWithSearchFilter:(id)arg0 inHome:(id)arg1 serviceTypeIsATV:(BOOL)arg2 overrideServiceTypeIfNeeded:(*id)arg3 ;
-(id)parseColorEncoding:(id)arg0 ;
-(id)readRequestsForCharacteristic:(id)arg0 ;
-(id)serviceFromObject:(id)arg0 ;
-(id)updateValue:(id)arg0 forAction:(id)arg1 ;
-(id)updateValueToBoundary:(id)arg0 valueType:(id)arg1 fudgeMinimum:(BOOL)arg2 metadata:(id)arg3 ;
-(void)_handleCommandForHAPAction:(id)arg0 serviceType:(id)arg1 objects:(id)arg2 completionHandler:(id)arg3 ;
-(void)_handleCommandForMediaAccessoryAction:(id)arg0 objects:(id)arg1 serviceType:(id)arg2 completionHandler:(id)arg3 ;
-(void)_logEvent:(id)arg0 ;
-(void)addActivationCharacteristicsIfNeeded:(id)arg0 forCharacteristic:(id)arg1 ;
-(void)addBridgedAcessoryCharacteristicsFor:(id)arg0 toCollection:(id)arg1 assistantObjects:(id)arg2 ;
-(void)addCharacteristicWithType:(id)arg0 fromService:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3 ;
-(void)addIfNeededActivationCharacteristic:(id)arg0 fromService:(id)arg1 toCollection:(id)arg2 ;
-(void)addLinkedServiceCharacteristicsFor:(id)arg0 toCollection:(id)arg1 assistantObjects:(id)arg2 ;
-(void)executeActionSet:(id)arg0 action:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)handleCommandWithCompletionHandler:(id)arg0 ;
-(void)handleGetActionTypes:(id)arg0 serviceType:(id)arg1 forObjects:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleGetColor:(id)arg0 forObjects:(id)arg1 serviceType:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleGetMetadataActionTypes:(id)arg0 serviceType:(id)arg1 forObjects:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleGetNaturalLightingAction:(id)arg0 forObjects:(id)arg1 serviceType:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleMediaAccessorySetActionType:(id)arg0 forObjects:(id)arg1 withServiceType:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleMediaReadWriteResponse:(id)arg0 forAction:(id)arg1 inServiceType:(id)arg2 inHome:(id)arg3 requestProperty:(id)arg4 results:(id)arg5 forObjects:(id)arg6 ;
-(void)handleSetActionTypes:(id)arg0 serviceType:(id)arg1 forObjects:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleSetColor:(id)arg0 forObjects:(id)arg1 service:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleSetNaturalLightingAction:(id)arg0 serviceType:(id)arg1 forObjects:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleUpdateActionTypes:(id)arg0 serviceType:(id)arg1 forObjects:(id)arg2 completionHandler:(id)arg3 ;
-(void)performWithGather:(id)arg0 queue:(id)arg1 msgDispatcher:(id)arg2 completion:(id)arg3 ;
-(void)reportOutcome:(id)arg0 results:(id)arg1 handler:(id)arg2 ;
-(void)reportResults:(id)arg0 handler:(id)arg1 ;
-(void)reportUnlockRequired:(id)arg0 ;
-(void)returnResults:(id)arg0 serviceType:(id)arg1 forAction:(id)arg2 completionHandler:(id)arg3 ;
-(void)timeoutAndReportResults;


@end


#endif