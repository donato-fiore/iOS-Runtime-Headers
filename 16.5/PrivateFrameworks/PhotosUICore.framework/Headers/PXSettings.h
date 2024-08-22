// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSETTINGS_H
#define PXSETTINGS_H

@class PTSettings, NSMutableSet, NSSet, NSArray;
@protocol PXTapToRadarDiagnosticProvider;


#import "PXSettings.h"

@interface PXSettings : PTSettings <PXTapToRadarDiagnosticProvider>

 {
    NSMutableSet *_archivedSettings;
    NSSet *_cachedTransientProperties;
    BOOL _hasUserDefaultsOverrides;
}


@property (readonly, nonatomic) BOOL hasDefaultValues;
@property (readonly, nonatomic) BOOL hasUserDefaultsOverrides;
@property (readonly, nonatomic) PXSettings *parentSettings;
@property (readonly, nonatomic) NSArray *reparentedRootSettings; // ivar: _reparentedRootSettings
@property (nonatomic) NSInteger version; // ivar: _version


+(BOOL)ignoresKey:(id)arg0 ;
+(id)_defaultsKey;
+(id)_signatureDictionaryWithDefaultSettings:(*id)arg0 ;
+(id)_userDefaults;
+(id)createSharedInstance;
+(id)sharedInstance;
+(id)suiteName;
+(id)transientProperties;
+(void)setSuiteName:(id)arg0 ;
-(BOOL)_setOverrideValuesFromDictionary:(id)arg0 ;
-(BOOL)isTransientKey:(id)arg0 ;
-(BOOL)isTransientKeyPath:(id)arg0 ;
-(BOOL)suppressesIntrospectionOnCustomerInstalls;
-(id)_archiveDictionaryWithSignature;
-(id)archiveDictionary;
-(id)archiveValueForKey:(id)arg0 ;
-(void)_resetValuesThatChangedBetweenCurrentDefaultValues:(id)arg0 andArchivedDefaultValues:(id)arg1 defaultSettings:(id)arg2 ;
-(void)_validateArchivableValue:(id)arg0 forKey:(id)arg1 ;
-(void)_willArchiveSettings:(id)arg0 ;
-(void)addDeferredKeyObserver:(id)arg0 ;
-(void)addDeferredKeyPathObserver:(id)arg0 ;
-(void)addKeyObserver:(id)arg0 ;
-(void)addKeyPathObserver:(id)arg0 ;
-(void)applyArchiveValue:(id)arg0 forKey:(id)arg1 ;
-(void)clearManualOverrides;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;
-(void)defaultValueDidChangeForKey:(id)arg0 ;
-(void)performPostSaveActions;
-(void)removeKeyObserver:(id)arg0 ;
-(void)removeKeyPathObserver:(id)arg0 ;
-(void)restoreDefaultValues;
-(void)save;


@end


#endif