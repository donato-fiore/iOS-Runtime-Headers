// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNUIUSERACTIONSENDMESSAGEINTENTTARGET_H
#define _CNUIUSERACTIONSENDMESSAGEINTENTTARGET_H



#import "CNUIUserActionTarget.h"

@interface _CNUIUserActionSendMessageIntentTarget : CNUIUserActionTarget



-(id)actionsForEmailAddresses:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForInstantMessageAddresses:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForPhoneNumbers:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForSocialProfiles:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;


@end


#endif