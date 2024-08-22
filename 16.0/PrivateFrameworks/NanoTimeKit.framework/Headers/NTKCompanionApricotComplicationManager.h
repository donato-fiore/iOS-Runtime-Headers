// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKCOMPANIONAPRICOTCOMPLICATIONMANAGER_H
#define NTKCOMPANIONAPRICOTCOMPLICATIONMANAGER_H

@class CLKDevice, NSMutableDictionary, NSMapTable, NSDictionary, NSString;
@protocol NTKComplicationCollectionObserver, NTKApricotComplicationProvider, CLKComplicationWidgetMigrationDataSource;

#import <Foundation/Foundation.h>

#import "NTKComplicationCollection.h"

@interface NTKCompanionApricotComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKApricotComplicationProvider, CLKComplicationWidgetMigrationDataSource>

 {
    CLKDevice *_device;
    NTKComplicationCollection *_lock_complicationCollection;
    NSMutableDictionary *_lock_clientToRecords;
    NSMapTable *_lock_descriptorToRecord;
    NSDictionary *_lock_appLookup;
    BOOL _lock_appsLoaded;
    BOOL _lock_collectionLoaded;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL loaded; // ivar: _loaded
@property (readonly) Class superclass;


+(id)instanceForDevice:(id)arg0 ;
-(BOOL)vendorExistsForContainerBundleIdentifier:(id)arg0 ;
-(BOOL)vendorExistsWithDescriptor:(id)arg0 ;
-(id)cachedWidgetMigrationForClientIdentifier:(id)arg0 descriptor:(id)arg1 ;
-(id)infoForDescriptor:(id)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)sampleTemplateForWidget:(id)arg0 family:(NSInteger)arg1 ;
-(void)_lock_updateAppNames;
-(void)_lock_updateAppNamesForClientIdentifer:(id)arg0 ;
-(void)_lock_updateRecordsForAllClients;
-(void)_lock_updateRecordsForClientIdentifier:(id)arg0 ;
-(void)_setAppLookup:(id)arg0 ;
-(void)_setup;
-(void)_updateInstalledApps;
-(void)_updateLoaded;
-(void)complicationCollection:(id)arg0 didUpdateComplicationDescriptorsForClient:(id)arg1 ;
-(void)complicationCollectionDidLoad:(id)arg0 ;
-(void)complicationCollectionDidReload:(id)arg0 ;
-(void)enumerateDescriptorsCompatibleWithFamilies:(id)arg0 withBlock:(id)arg1 ;
-(void)loadWidgetMigrationsForClientIdentifier:(id)arg0 descriptor:(id)arg1 completion:(id)arg2 ;


@end


#endif