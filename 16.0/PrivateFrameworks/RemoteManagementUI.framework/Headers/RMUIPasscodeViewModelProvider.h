// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(id)_maxAttempts;
-(id)_maxGracePeriod;
-(id)_maxInactivity;
-(id)_minLength;
-(id)_simplePasscodes;
-(id)_uniquePasscodes;
-(id)description;
-(id)init;
-(void)_updateViewModelsIsManaged:(BOOL)arg0 passcodeSettings:(id)arg1 ;
-(void)loadPasscodeSettingsFromConfigurationWithCompletionHandler:(id)arg0 ;


@end


#endif