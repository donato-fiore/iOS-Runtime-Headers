// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUIUSERACTIONTARGET_H
#define CNUIUSERACTIONTARGET_H

@class NSString;
@protocol CNTUCallProvider;

#import <Foundation/Foundation.h>


@interface CNUIUserActionTarget : NSObject

@property (readonly, nonatomic) NSString *actionType; // ivar: _actionType
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain) NSObject<CNTUCallProvider> *callProvider; // ivar: _callProvider
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


+(id)descriptorForRequiredKeysForActionDiscovering;
+(id)targetForDirections;
+(id)targetForEmailWithMail;
+(id)targetForPayWithWallet;
+(id)targetForSendMessageIntentWithAppProxy:(id)arg0 ;
+(id)targetForStartAudioCallIntentWithAppProxy:(id)arg0 ;
+(id)targetForStartVideoCallIntentWithAppProxy:(id)arg0 ;
+(id)targetForTextWithMessages;
+(id)targetForTextWithSkype;
+(id)targetForVideoWithCallProvider:(id)arg0 ;
+(id)targetForVideoWithFaceTime;
+(id)targetForVideoWithSkype;
+(id)targetForVoiceWithCallProvider:(id)arg0 ;
+(id)targetForVoiceWithFaceTime;
+(id)targetForVoiceWithSkype;
+(id)targetForVoiceWithTelephony;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionsForContact:(id)arg0 discoveringEnvironment:(id)arg1 ;
-(id)actionsForEmailAddresses:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForInstantMessageAddresses:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForPhoneNumbers:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForPostalAddresses:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForSocialProfiles:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg0 bundleIdentifier:(id)arg1 teamIdentifier:(id)arg2 ;


@end


#endif