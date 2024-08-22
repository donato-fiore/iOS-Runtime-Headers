// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UNSBUNDLELIBRARIAN_H
#define UNSBUNDLELIBRARIAN_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UNSBundleLibrarian : NSObject {
    NSString *_bundleLibraryPath;
    NSMutableDictionary *_bundleToUUIDMap;
    NSMutableDictionary *_uuidToBundleMap;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)_isUUIDString:(id)arg0 ;
-(BOOL)_queue_saveDictionary:(id)arg0 atPath:(id)arg1 ;
-(id)_queue_bundleIdentifierForUniqueIdentifier:(id)arg0 ;
-(id)_queue_dataAtPath:(id)arg0 ;
-(id)_queue_dictionaryAtPath:(id)arg0 ;
-(id)_queue_uniqueIdentifierForBundleIdentifier:(id)arg0 ;
-(id)bundleIdentifierForUniqueIdentifier:(id)arg0 ;
-(id)initWithDirectory:(id)arg0 ;
-(id)uniqueIdentifierForBundleIdentifier:(id)arg0 ;
-(void)_queue_addEntryForBundleIdentifier:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(void)_queue_loadBundleLibrary;
-(void)_queue_loadBundleLibraryIfNeeded;
-(void)_queue_migrateBundleDirectoriesInDirectory:(id)arg0 ;
-(void)_queue_removeEntryForBundleIdentifier:(id)arg0 ;
-(void)_queue_removeUnknownDirectoriesFromLibrary;
-(void)_queue_removeUnknownDirectoriesInDirectory:(id)arg0 ;
-(void)_removeBundleLibrary;
-(void)bootstrapLibraryForBundleIdentifiers:(id)arg0 ;
-(void)migrateLibraryFromDirectory:(id)arg0 toDirectory:(id)arg1 ;
-(void)removeMappingForBundleIdentifier:(id)arg0 ;


@end


#endif