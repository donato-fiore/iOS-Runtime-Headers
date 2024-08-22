// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTSETTINGS_H
#define PTSETTINGS_H

@class NSHashTable, NSString;
@protocol PTSettingsKeyPathObserver, NSCopying, _PTSettingsRestoreDefaultsObserver;

#import <Foundation/Foundation.h>

#import "PTSettingsClassStructure.h"

@interface PTSettings : NSObject <PTSettingsKeyPathObserver, NSCopying>

 {
    PTSettingsClassStructure *__classStructure;
    NSHashTable *__keyObservers;
    NSHashTable *__keyPathObservers;
    id<_PTSettingsRestoreDefaultsObserver> *__restoreDefaultsObserver;
    BOOL __observationEnabled;
    BOOL __isObservingProperties;
    BOOL __isObservingChildren;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_supportsArchivingCustomClass:(Class)arg0 ;
+(BOOL)_supportsArchivingStructType:(id)arg0 ;
+(BOOL)ignoresKey:(id)arg0 ;
+(NSUInteger)settingsVersionNumber;
+(id)_archiveDictionaryForObject:(id)arg0 ofCustomClass:(Class)arg1 ;
+(id)_archiveDictionaryForValue:(id)arg0 ofStructType:(id)arg1 ;
+(id)_objectOfCustomClass:(Class)arg0 fromArchiveDictionary:(id)arg1 ;
+(id)_valueOfStructType:(id)arg0 fromArchiveDictionary:(id)arg1 ;
+(id)emptyArchiveForSettingsClassName:(id)arg0 ;
+(id)settingsControllerModule;
+(id)settingsFromArchiveDictionary:(id)arg0 ;
+(void)_applyArchiveValue:(id)arg0 forKeyPath:(id)arg1 toArchive:(id)arg2 ;
-(BOOL)_applyArchiveValue:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)_applyArchiveValue:(id)arg0 forLeafKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)_getChild:(*id)arg0 create:(BOOL)arg1 leafKey:(*id)arg2 forKeyPath:(id)arg3 error:(*id)arg4 ;
-(BOOL)_hasKeyPathObservers;
-(BOOL)_hasObservers;
-(BOOL)suppressesIntrospectionOnCustomerInstalls;
-(id)_allChildAndLeafKeys;
-(id)_allKeys;
-(id)_archiveValueForKeyPath:(id)arg0 ;
-(id)_archiveValueForLeafKey:(id)arg0 ;
-(id)_createChildForKey:(id)arg0 ;
-(id)_ensureChildForKey:(id)arg0 ;
-(id)_initWithArchiveDictionary:(id)arg0 ;
-(id)_initWithClassStructure:(id)arg0 ;
-(id)_keyForChild:(id)arg0 ;
-(id)archiveDictionary;
-(id)archiveValueForKey:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)drillDownSummary;
-(id)init;
-(id)initWithDefaultValues;
-(id)module;
-(void)_applyArchiveDictionary:(id)arg0 ;
-(void)_createChildren;
-(void)_createChildrenAndOutlets;
-(void)_createOutlets;
-(void)_enumerateChildrenWithBlock:(id)arg0 ;
-(void)_enumerateOutletsWithBlock:(id)arg0 ;
-(void)_safeSetValue:(id)arg0 forLeafKey:(id)arg1 ;
-(void)_sendDidRestoreDefaults;
-(void)_sendKeyChanged:(id)arg0 ;
-(void)_sendKeyPathChanged:(id)arg0 ;
-(void)_sendWillRestoreDefaults;
-(void)_setObservationEnabled:(BOOL)arg0 ;
-(void)_setRestoreDefaultsObserver:(id)arg0 ;
-(void)_startObservingChildren;
-(void)_startObservingProperties;
-(void)_startOrStopObservingPropertiesAndChildren;
-(void)_stopObservingChildren;
-(void)_stopObservingProperties;
-(void)_validateChildren;
-(void)addKeyObserver:(id)arg0 ;
-(void)addKeyPathObserver:(id)arg0 ;
-(void)applyArchiveValue:(id)arg0 forKey:(id)arg1 ;
-(void)applySettings:(id)arg0 ;
-(void)createChildren;
-(void)dealloc;
-(void)invalidateValueForKey:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeKeyObserver:(id)arg0 ;
-(void)removeKeyPathObserver:(id)arg0 ;
-(void)restoreDefaultValues;
-(void)restoreFromArchiveDictionary:(id)arg0 ;
-(void)setDefaultValues;
-(void)settings:(id)arg0 changedValueForKeyPath:(id)arg1 ;


@end


#endif