// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDEFAULTS_H
#define PLDEFAULTS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PLDefaults : NSObject

@property BOOL debugEnabled; // ivar: _debugEnabled
@property BOOL enableRestartAtEPL; // ivar: _enableRestartAtEPL
@property BOOL eplEnabled; // ivar: _eplEnabled
@property (retain) NSMutableDictionary *instancePrefsCache; // ivar: _instancePrefsCache
@property (retain) NSMutableDictionary *managedPrefsCache; // ivar: _managedPrefsCache
@property (retain) NSMutableDictionary *userPrefsCache; // ivar: _userPrefsCache


+(BOOL)boolForKey:(id)arg0 ;
+(BOOL)boolForKey:(id)arg0 ifNotSet:(BOOL)arg1 ;
+(BOOL)fullMode;
+(BOOL)fullModeForClass:(Class)arg0 ;
+(BOOL)fullPLLog;
+(BOOL)isClassDebugEnabled:(Class)arg0 ;
+(BOOL)isClassDebugEnabled:(Class)arg0 forKey:(id)arg1 ;
+(BOOL)isClassNameDebugEnabled:(id)arg0 ;
+(BOOL)isClassNameDebugEnabled:(id)arg0 forKey:(id)arg1 ;
+(BOOL)isDevBoard;
+(BOOL)isModelTrigger;
+(BOOL)isModelingDebugEnabled;
+(BOOL)isTaskFullEPLMode;
+(BOOL)liteMode;
+(BOOL)objectExistsForKey:(id)arg0 ;
+(BOOL)oldFullMode;
+(BOOL)taskMode;
+(CGFloat)doubleForKey:(id)arg0 ;
+(CGFloat)doubleForKey:(id)arg0 ifNotSet:(CGFloat)arg1 ;
+(NSInteger)longForKey:(id)arg0 ;
+(NSInteger)longForKey:(id)arg0 ifNotSet:(NSInteger)arg1 ;
+(NSInteger)mode;
+(id)allDefaultsEnabled;
+(id)applicationID;
+(id)objectForKey:(id)arg0 ;
+(id)objectForKey:(id)arg0 forApplicationID:(id)arg1 synchronize:(BOOL)arg2 ;
+(id)objectForKey:(id)arg0 ifNotSet:(id)arg1 ;
+(id)objectForKey:(id)arg0 synchronize:(BOOL)arg1 ;
+(id)sharedDefaults;
+(int)liveModeQuery;
+(void)registerEPLNotificationWithQueue:(id)arg0 ;
+(void)resetUserDefaultCacheForKey:(id)arg0 ;
+(void)resetUserDefaultCacheForKey:(id)arg0 forApplicationID:(id)arg1 ;
+(void)setClass:(Class)arg0 debugEnabled:(BOOL)arg1 ;
+(void)setClass:(Class)arg0 debugEnabled:(BOOL)arg1 forKey:(id)arg2 ;
+(void)setClassName:(id)arg0 debugEnabled:(BOOL)arg1 ;
+(void)setClassName:(id)arg0 debugEnabled:(BOOL)arg1 forKey:(id)arg2 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 forApplicationID:(id)arg2 saveToDisk:(BOOL)arg3 ;
+(void)setObject:(id)arg0 forKey:(id)arg1 saveToDisk:(BOOL)arg2 ;
-(id)init;
-(id)instancePrefsObjectForKey:(id)arg0 ;
-(id)managedPrefsObjectForKey:(id)arg0 forApplicationID:(id)arg1 synchronize:(BOOL)arg2 ;
-(id)objectForKey:(id)arg0 forApplicationID:(id)arg1 synchronize:(BOOL)arg2 ;
-(id)userDefaultsObjectForKey:(id)arg0 forApplicationID:(id)arg1 synchronize:(BOOL)arg2 ;
-(void)resetUserDefaultCacheForKey:(id)arg0 forApplicationID:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 forApplicationID:(id)arg2 saveToDisk:(BOOL)arg3 ;


@end


#endif