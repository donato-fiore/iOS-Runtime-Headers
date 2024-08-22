// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUITRACKERSCONTROLLER_H
#define PUITRACKERSCONTROLLER_H

@class ADTrackingTransparency, NSArray;


#import "PUITCCAccessController.h"

@interface PUITrackersController : PUITCCAccessController

@property (retain, nonatomic) ADTrackingTransparency *adTrackingTransparency; // ivar: _adTrackingTransparency
@property (retain, nonatomic) NSArray *appSpecifiers; // ivar: _appSpecifiers


-(BOOL)canChangeAllowAsk;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)allowAsk:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)disableTCCForAllApps;
-(void)headerLinkWasTapped;
-(void)setAllowAsk:(id)arg0 specifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif