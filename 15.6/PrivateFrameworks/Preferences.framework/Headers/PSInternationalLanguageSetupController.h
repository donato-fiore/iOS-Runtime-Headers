// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSINTERNATIONALLANGUAGESETUPCONTROLLER_H
#define PSINTERNATIONALLANGUAGESETUPCONTROLLER_H



#import "PSSetupController.h"
#import "PSLanguageSelector.h"

@interface PSInternationalLanguageSetupController : PSSetupController

@property (retain, nonatomic) PSLanguageSelector *languageSelector; // ivar: _languageSelector


-(void)commit;
-(void)setLanguage:(id)arg0 specifier:(id)arg1 ;
-(void)setupController;


@end


#endif