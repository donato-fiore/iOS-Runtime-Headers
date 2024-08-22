// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKDAEMONPREFERENCES_H
#define _HKDAEMONPREFERENCES_H


#import <Foundation/Foundation.h>


@interface _HKDaemonPreferences : NSObject



+(BOOL)_boolValueForKey:(id)arg0 ;
+(BOOL)_setPreferenceValue:(*void)arg0 forKey:(id)arg1 ;
+(BOOL)isGenerateDemoDataSet;
+(BOOL)isStoreDemoModeSet;
+(BOOL)setValue:(id)arg0 forKey:(id)arg1 ;
+(BOOL)shouldGenerateDemoData;
+(BOOL)usingDemoDataDatabase;
+(id)_safePreferenceForKey:(id)arg0 expectedReturnClass:(Class)arg1 ;
+(id)valueForKey:(id)arg0 ;
+(void)synchronizePreferencesWithWatch:(id)arg0 ;


@end


#endif