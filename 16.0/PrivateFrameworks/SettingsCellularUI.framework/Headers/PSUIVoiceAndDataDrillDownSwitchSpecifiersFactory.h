// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIVOICEANDDATADRILLDOWNSWITCHSPECIFIERSFACTORY_H
#define PSUIVOICEANDDATADRILLDOWNSWITCHSPECIFIERSFACTORY_H


#import <Foundation/Foundation.h>


@interface PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory : NSObject



+(BOOL)isVoLTESwitchTurnedOnByDefaultAndHidden:(id)arg0 ;
+(BOOL)shouldShow5GSASwitchForSubscriptionContext:(id)arg0 RATMode:(int)arg1 ;
+(BOOL)shouldShowAnyVoiceAndDataSwitchSpecifierForContext:(id)arg0 RATMode:(int)arg1 ;
+(BOOL)shouldShowVoLTESwitchForSubscriptionContext:(id)arg0 RATMode:(int)arg1 ;
+(BOOL)shouldShowVoNRSwitchForSubscriptionContext:(id)arg0 RATMode:(int)arg1 ;
+(id)getLoggerForSlot:(NSInteger)arg0 ;
-(id)create5GSASwitchSpecifierWithHostController:(id)arg0 parentSpecifier:(id)arg1 ;
-(id)createVoLTESwitchSpecifierWithHostController:(id)arg0 parentSpecifier:(id)arg1 ;
-(id)createVoNRSwitchSpecifierWithHostController:(id)arg0 parentSpecifier:(id)arg1 ;


@end


#endif