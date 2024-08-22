// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIVOICEANDDATADRILLDOWNSWITCHSPECIFIERSFACTORY_H
#define PSUIVOICEANDDATADRILLDOWNSWITCHSPECIFIERSFACTORY_H


#import <Foundation/Foundation.h>


@interface PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory : NSObject



+(BOOL)isVoLTESwitchTurnedOnByDefaultAndHidden:(id)arg0 ;
+(BOOL)shouldShow5GSASwitchForSpecifier:(id)arg0 RATMode:(int)arg1 ;
+(BOOL)shouldShowVoLTESwitchForSubscriptionContext:(id)arg0 RATMode:(int)arg1 ;
+(id)getLogger;
-(id)create5GSASwitchSpecifierWithHostController:(id)arg0 parentSpecifier:(id)arg1 ;
-(id)createVoLTESwitchSpecifierWithHostController:(id)arg0 parentSpecifier:(id)arg1 ;


@end


#endif