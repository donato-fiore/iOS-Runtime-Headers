// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNUIUSERACTIONCALLPROVIDERVOICETARGET_H
#define _CNUIUSERACTIONCALLPROVIDERVOICETARGET_H



#import "CNUIUserActionTarget.h"

@interface _CNUIUserActionCallProviderVoiceTarget : CNUIUserActionTarget



-(BOOL)isCallProviderManagedUsingDiscoveringEnvironment:(id)arg0 ;
-(id)actionsForContact:(id)arg0 discoveringEnvironment:(id)arg1 ;
-(id)actionsForEmailAddresses:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForInstantMessageAddresses:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForPhoneNumbers:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForPhoneNumbers:(id)arg0 contact:(id)arg1 group:(NSInteger)arg2 options:(NSUInteger)arg3 discoveringEnvironment:(id)arg4 ;
-(id)actionsForSocialProfiles:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)externalAccountIdentifierForContact:(id)arg0 contactStore:(id)arg1 ;
-(id)managedBundleIdentifierForContact:(id)arg0 discoveringEnvironment:(id)arg1 ;


@end


#endif