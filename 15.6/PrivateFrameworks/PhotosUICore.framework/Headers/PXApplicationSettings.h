// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXAPPLICATIONSETTINGS_H
#define PXAPPLICATIONSETTINGS_H

@class NSString;


#import "PXSettings.h"

@interface PXApplicationSettings : PXSettings

@property (nonatomic) CGFloat defaultNavigationTimeoutDuration; // ivar: _defaultNavigationTimeoutDuration
@property (copy, nonatomic) NSString *stringWithSpecialCharacters; // ivar: _stringWithSpecialCharacters
@property (nonatomic) BOOL wantsPseudostringsWithSpecialCharacters; // ivar: _wantsPseudostringsWithSpecialCharacters


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif