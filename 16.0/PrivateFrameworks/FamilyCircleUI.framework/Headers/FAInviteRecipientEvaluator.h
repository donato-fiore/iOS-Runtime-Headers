// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAINVITERECIPIENTEVALUATOR_H
#define FAINVITERECIPIENTEVALUATOR_H


#import <Foundation/Foundation.h>


@interface FAInviteRecipientEvaluator : NSObject



-(id)parseRecipientAddresses:(id)arg0 ;
-(id)recipientAlreadyInFamily:(id)arg0 emailOnly:(BOOL)arg1 recipients:(id)arg2 ;
-(void)showAlreadyFamilyMember:(id)arg0 presenter:(id)arg1 ;
-(void)validateRecipients:(id)arg0 inviteContext:(id)arg1 presenter:(id)arg2 completion:(id)arg3 ;


@end


#endif