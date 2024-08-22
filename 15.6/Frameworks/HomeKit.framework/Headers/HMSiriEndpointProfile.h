// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMSIRIENDPOINTPROFILE_H
#define HMSIRIENDPOINTPROFILE_H

@class NSNumber, NSArray, NSString, NSUUID;
@protocol _HMSiriEndpointProfileDelegate, HMFLogging, HMFObject, HMSiriEndpointProfileDelegate;


#import "HMAccessoryProfile.h"
#import "HMSiriEndpointProfileAssistant.h"

@interface HMSiriEndpointProfile : HMAccessoryProfile <_HMSiriEndpointProfileDelegate, HMFLogging, HMFObject>



@property (readonly) NSNumber *activeIdentifier;
@property (readonly) NSArray *assistants;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) NSUInteger capability;
@property (readonly) NSString *capabilityToString;
@property (readonly) HMSiriEndpointProfileAssistant *currentAssistant;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMSiriEndpointProfileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL manuallyDisabled;
@property (readonly) NSInteger multifunctionButton;
@property (readonly, getter=isNeedsOnboarding) BOOL needsOnboarding;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSUUID *sessionHubIdentifer;
@property (readonly) NSInteger sessionState;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) NSString *siriEndpointVersion;
@property (readonly) NSString *siriEngineVersion;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsOnboarding;


+(id)logCategory;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)supportsOnBoarding;
-(id)init;
-(id)initWithSiriEndpointProfile:(id)arg0 ;
-(id)logIdentifier;
-(id)siriEndpointProfile;
-(void)applyOnboardingSelections:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteSiriHistoryWithCompletionHandler:(id)arg0 ;
-(void)refreshStateWithCompletionHandler:(id)arg0 ;
-(void)setNotifications:(BOOL)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateActiveIdentifier:(id)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateAssistants:(id)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateManuallyDisabled:(BOOL)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateMultifunctionButton:(NSInteger)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateNeedsOnboarding:(BOOL)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateSessionHubIdentifier:(id)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateSessionState:(NSInteger)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateSiriEngineVersion:(id)arg1 ;
-(void)siriEndpointProfile:(id)arg0 didUpdateSupportsOnboarding:(BOOL)arg1 ;


@end


#endif