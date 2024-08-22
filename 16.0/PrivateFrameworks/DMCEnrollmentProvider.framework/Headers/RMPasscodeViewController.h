// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMPASSCODEVIEWCONTROLLER_H
#define RMPASSCODEVIEWCONTROLLER_H

@class PSListController, RMUIPasscodeViewModel;



@interface RMPasscodeViewController : PSListController

@property (retain, nonatomic) RMUIPasscodeViewModel *passcodeModel; // ivar: _passcodeModel


-(id)_passcodeDetailValue:(id)arg0 ;
-(id)_specifiersForPasscodeSettings;
-(id)specifiers;
-(void)_processUserInfoDictionary;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif