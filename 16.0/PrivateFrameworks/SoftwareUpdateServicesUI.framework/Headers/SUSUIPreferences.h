// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSUIPREFERENCES_H
#define SUSUIPREFERENCES_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface SUSUIPreferences : NSObject

@property (readonly, nonatomic) BOOL alertAfterDownload; // ivar: _alertAfterDownload
@property (readonly, retain, nonatomic) NSNumber *installAlertIntervalMinutes; // ivar: _installAlertIntervalMinutes
@property (nonatomic, setter=setNeedsAlertPresentationAfterOTAUpdate:) BOOL needsAlertPresentationAfterOTAUpdate; // ivar: _needsAlertPresentationAfterOTAUpdate
@property (readonly, retain, nonatomic) NSNumber *passcodeRequiredDays; // ivar: _passcodeRequiredDays
@property (readonly, nonatomic) BOOL preventCountdownAlert; // ivar: _preventCountdownAlert
@property (readonly, nonatomic) BOOL preventRollbackPrompt; // ivar: _preventRollbackPrompt


+(id)sharedInstance;
-(*void)_copyPreferenceForKey:(struct __CFString *)arg0 ofType:(NSUInteger)arg1 ;
-(BOOL)_getBooleanPreferenceForKey:(id)arg0 withDefaultValue:(BOOL)arg1 ;
-(id)_copyNumberPreferenceForKey:(id)arg0 ;
-(id)_copyStringPreferenceForKey:(id)arg0 ;
-(id)init;
-(void)_loadPreferences;
-(void)_setBooleanPreferenceForKey:(id)arg0 value:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif