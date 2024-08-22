// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDISABLESCREENTIMEGROUPSPECIFIERPROVIDER_H
#define STDISABLESCREENTIMEGROUPSPECIFIERPROVIDER_H

@class PSSpecifier;


#import "STRootGroupSpecifierProvider.h"

@interface STDisableScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *disableScreenTimeSpecifier; // ivar: _disableScreenTimeSpecifier


-(id)disableScreenTimeConfirmationPrompt;
-(id)init;
-(id)passcodeGatedDeleteButtonSpecifierWithName:(id)arg0 action:(SEL)arg1 ;
-(void)confirmDisableScreenTime:(id)arg0 ;
-(void)disableScreenTime:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;
-(void)updateDisableScreenTimeSpecifier;


@end


#endif