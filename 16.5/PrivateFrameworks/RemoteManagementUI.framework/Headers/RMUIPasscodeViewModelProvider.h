// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMUIPASSCODEVIEWMODELPROVIDER_H
#define RMUIPASSCODEVIEWMODELPROVIDER_H

@class RMObserverStore, NSDictionary;

#import <Foundation/Foundation.h>

#import "RMUIPasscodeViewModel.h"

@interface RMUIPasscodeViewModelProvider : NSObject

@property (retain, nonatomic) RMObserverStore *observerStore; // ivar: _observerStore
@property (copy, nonatomic) NSDictionary *passcodeSettings; // ivar: _passcodeSettings
@property (retain, nonatomic) RMUIPasscodeViewModel *passcodeViewModel; // ivar: _passcodeViewModel


+(void)_applyPasscodeDeclaration:(id)arg0 toConglomerate:(id)arg1 ;
-(id)_maximumFailedAttempts;
-(id)_maximumGracePeriodInMinutes;
-(id)_maximumInactivityInMinutes;
-(id)_maximumPasscodeAgeInDays;
-(id)_minimumComplexCharacters;
-(id)_minimumLength;
-(id)_passcodeReuseLimit;
-(id)_requireAlphanumericPasscode;
-(id)_requireComplexPasscode;
-(id)_requirePasscode;
-(id)description;
-(id)init;
-(void)_updateViewModelsIsManaged:(BOOL)arg0 passcodeSettings:(id)arg1 ;
-(void)loadPasscodeSettingsFromConfigurationWithCompletionHandler:(id)arg0 ;


@end


#endif