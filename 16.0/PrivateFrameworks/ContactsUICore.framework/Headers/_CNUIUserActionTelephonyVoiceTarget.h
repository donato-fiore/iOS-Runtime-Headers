// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNUIUSERACTIONTELEPHONYVOICETARGET_H
#define _CNUIUSERACTIONTELEPHONYVOICETARGET_H



#import "CNUIUserActionTarget.h"

@interface _CNUIUserActionTelephonyVoiceTarget : CNUIUserActionTarget



-(id)TTYCallActionWithDestinationID:(id)arg0 contactProperty:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)TTYRelayCallActionWithDestinationID:(id)arg0 contactProperty:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)actionsForContact:(id)arg0 discoveringEnvironment:(id)arg1 ;
-(id)actionsForPhoneNumbers:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)init;
-(id)phoneCallActionWithDestinationID:(id)arg0 contactProperty:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)ttyActionsForPhoneNumbers:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;
-(id)ttyActionsFutureForPhoneNumbers:(id)arg0 contact:(id)arg1 discoveringEnvironment:(id)arg2 ;


@end


#endif