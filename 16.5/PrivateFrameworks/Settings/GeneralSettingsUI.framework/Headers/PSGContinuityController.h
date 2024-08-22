// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGCONTINUITYCONTROLLER_H
#define PSGCONTINUITYCONTROLLER_H

@class PSListController, PSSpecifier;



@interface PSGContinuityController : PSListController

@property (retain, nonatomic) PSSpecifier *_linkKeyboardAndMouseGroup; // ivar: __linkKeyboardAndMouseGroup
@property (retain, nonatomic) PSSpecifier *_linkKeyboardAndMouseItem; // ivar: __linkKeyboardAndMouseItem


-(BOOL)isContinuityRestricted;
-(id)airplayToTV:(id)arg0 ;
-(id)init;
-(id)isContinuityEnabled:(id)arg0 ;
-(id)isLinkKeyboardAndMouseEnabled:(id)arg0 ;
-(id)isWombatEnabled:(id)arg0 ;
-(id)specifiers;
-(void)profileNotification:(id)arg0 ;
-(void)setAirplayToTV:(id)arg0 specifier:(id)arg1 ;
-(void)setContinuityEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setLinkKeyboardAndMouseEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setWombatEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)updateContinuitySpecifiers;


@end


#endif