// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMSIRIENDPOINTPROFILE_H
#define _HMSIRIENDPOINTPROFILE_H

@class NSNumber, NSArray, NSString, NSUUID;
@protocol HMFLogging, HMFObject, _HMSiriEndpointProfileDelegate;


#import "HMAccessoryProfile.h"
#import "HMSiriEndpointProfilesMessenger.h"

@interface _HMSiriEndpointProfile : HMAccessoryProfile <HMFLogging, HMFObject>



@property (retain) NSNumber *activeIdentifier; // ivar: _activeIdentifier
@property (retain) NSArray *assistants; // ivar: _assistants
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (nonatomic) NSUInteger capability; // ivar: _capability
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<_HMSiriEndpointProfileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL manuallyDisabled; // ivar: _manuallyDisabled
@property (retain) HMSiriEndpointProfilesMessenger *messenger; // ivar: _messenger
@property NSInteger multifunctionButton; // ivar: _multifunctionButton
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (retain) NSUUID *sessionHubIdentifer; // ivar: _sessionHubIdentifer
@property NSInteger sessionState; // ivar: _sessionState
@property (readonly, copy) NSString *shortDescription;
@property (retain) NSString *siriEndpointVersion; // ivar: _siriEndpointVersion
@property (retain) NSString *siriEngineVersion; // ivar: _siriEngineVersion
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)_mergeAssistants:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)logIdentifier;
-(id)messageDestination;
-(void)__configureWithContext:(id)arg0 accessory:(id)arg1 ;
-(void)_handleUpdateProfileState:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)applyOnboardingSelections:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteSiriHistoryWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyClientDidUpdateSessionState;
-(void)refreshStateWithCompletionHandler:(id)arg0 ;
-(void)setNotifications:(BOOL)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif