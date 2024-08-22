// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBKEYBOARDPREFERENCESMANAGER_H
#define CBKEYBOARDPREFERENCESMANAGER_H

@class NSMutableDictionary;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CBKeyboardPreferencesManager : NSObject {
    NSObject<OS_os_log> *_logHandle;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_preferences;
}




+(BOOL)getBoolPreference:(*BOOL)arg0 forKey:(id)arg1 ;
+(BOOL)getFloatPreference:(*float)arg0 forKey:(id)arg1 ;
+(BOOL)getIntPreference:(*int)arg0 forKey:(id)arg1 ;
+(BOOL)setBoolPreference:(BOOL)arg0 forKey:(id)arg1 ;
+(BOOL)setFloatPreference:(float)arg0 forKey:(id)arg1 ;
+(BOOL)setIntPreference:(int)arg0 forKey:(id)arg1 ;
+(BOOL)setPreference:(id)arg0 forKey:(id)arg1 ;
+(id)copyAllPreferences;
+(id)copyPreferenceForKey:(id)arg0 ;
+(id)copyPreferenceForKey:(id)arg0 keyboardID:(NSUInteger)arg1 ;
+(id)sharedInstance;
-(BOOL)setPreference:(id)arg0 forKey:(id)arg1 ;
-(id)copyAllPrefereneces;
-(id)copyPreferenceForKey:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif