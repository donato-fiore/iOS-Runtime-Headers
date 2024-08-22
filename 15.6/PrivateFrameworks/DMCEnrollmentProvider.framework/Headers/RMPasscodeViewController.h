// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMPASSCODEVIEWCONTROLLER_H
#define RMPASSCODEVIEWCONTROLLER_H

@class PSListController, NSDictionary;



@interface RMPasscodeViewController : PSListController

@property (copy, nonatomic) NSDictionary *passcodeSettings; // ivar: _passcodeSettings


-(id)_specifiersForPasscodeSettings;
-(id)maxAttempts:(id)arg0 ;
-(id)maxGracePeriod:(id)arg0 ;
-(id)maxInactivity:(id)arg0 ;
-(id)minLength:(id)arg0 ;
-(id)simplePasscodes:(id)arg0 ;
-(id)specifiers;
-(id)uniquePasscodes:(id)arg0 ;
-(void)_processUserInfoDictionary;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif