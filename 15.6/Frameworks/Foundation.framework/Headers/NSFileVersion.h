// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEVERSION_H
#define NSFILEVERSION_H

@class NSURL, NSDate;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSPersonNameComponents.h"

@interface NSFileVersion : NSObject {
    NSURL *_fileURL;
    id *_addition;
    id *_deadVersionIdentifier;
    id *_nonLocalVersion;
    NSURL *_contentsURL;
    BOOL _isBackup;
    NSString *_localizedName;
    NSString *_localizedComputerName;
    NSDate *_modificationDate;
    BOOL _isResolved;
    BOOL _contentsURLIsAccessed;
    id *_reserved;
    NSString *_name;
}


@property (readonly, copy) NSURL *URL;
@property (readonly, getter=_isBackup) BOOL _isBackup;
@property (readonly, getter=isConflict) BOOL conflict;
@property (getter=isDiscardable) BOOL discardable; // ivar: _discardable
@property (readonly, copy) NSString *etag;
@property (readonly) BOOL hasLocalContents;
@property (readonly) BOOL hasThumbnail;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *localizedNameOfSavingComputer;
@property (readonly, copy) NSDate *modificationDate;
@property (readonly, copy) NSString *originalPOSIXName;
@property (readonly, copy) NSString *originatorName;
@property (readonly, copy) NSPersonNameComponents *originatorNameComponents;
@property (readonly, retain) NSObject<NSCoding> *persistentIdentifier;
@property (getter=isResolved) BOOL resolved;
@property (readonly) NSUInteger size;
@property (readonly, getter=isUbiquitous) BOOL ubiquitous;


+(*void)_addConflictObserverForItemAtURL:(id)arg0 statusChangedHandler:(id)arg1 ;
+(BOOL)_conflictsExistForItemAtURL:(id)arg0 ;
+(BOOL)_isTemporaryStorageRequiredForGSError:(id)arg0 andURL:(id)arg1 ;
+(BOOL)_permanentVersionStorageSupportedForURL:(id)arg0 temporaryStorageIdentifier:(*id)arg1 error:(*id)arg2 ;
+(BOOL)_removeOtherVersionsOfItemAtURL:(id)arg0 temporaryStorageIdentifier:(id)arg1 error:(*id)arg2 ;
+(BOOL)removeOtherVersionsOfItemAtURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)unresolvedConflictsExistForItemAtURL:(id)arg0 ;
+(id)_addVersionOfItemAtURL:(id)arg0 withContentsOfURL:(id)arg1 options:(NSUInteger)arg2 temporaryStorageIdentifier:(*id)arg3 error:(*id)arg4 ;
+(id)_addVersionOfItemAtURL:(id)arg0 withContentsOfURL:(id)arg1 options:(NSUInteger)arg2 userInfo:(id)arg3 temporaryStorageIdentifier:(*id)arg4 error:(*id)arg5 ;
+(id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)arg0 ;
+(id)_existingLibraryForURL:(id)arg0 temporaryStorageIdentifier:(id)arg1 ;
+(id)_libraryForURL:(id)arg0 temporaryStorageIdentifier:(*id)arg1 ;
+(id)_makePermanentStorageLibraryForURL:(id)arg0 temporaryStorageRequired:(*BOOL)arg1 error:(*id)arg2 ;
+(id)_makeTemporaryStorageIdentifier;
+(id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg0 temporaryStorageIdentifier:(id)arg1 ;
+(id)_otherVersionsOfItemAtURL:(id)arg0 temporaryStorageIdentifier:(id)arg1 ;
+(id)_otherVersionsOfItemAtURL:(id)arg0 temporaryStorageIdentifier:(id)arg1 withoutOptions:(NSUInteger)arg2 ;
+(id)_supportedGenerationalStorageClientIDs;
+(id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg0 temporaryStorageIdentifier:(id)arg1 ;
+(id)_temporaryStorageLocationForIdentifier:(id)arg0 ;
+(id)_versionOfItemAtURL:(id)arg0 forClientID:(id)arg1 name:(id)arg2 temporaryStorageIdentifier:(id)arg3 evenIfDeleted:(BOOL)arg4 ;
+(id)_versionOfItemAtURL:(id)arg0 forPersistentIdentifier:(id)arg1 temporaryStorageIdentifier:(id)arg2 ;
+(id)addVersionOfItemAtURL:(id)arg0 withContentsOfURL:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)currentVersionOfItemAtURL:(id)arg0 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
+(id)otherVersionsOfItemAtURL:(id)arg0 ;
+(id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg0 ;
+(id)unresolvedConflictVersionsOfItemAtURL:(id)arg0 ;
+(id)versionOfItemAtURL:(id)arg0 forPersistentIdentifier:(id)arg1 ;
+(id)versionsOfItemAtURL:(id)arg0 ;
+(void)_markConflicts:(id)arg0 asHandledForItemAtURL:(id)arg1 ;
+(void)_removeConflictObserver:(*void)arg0 ;
+(void)_removeTemporaryDirectoryAtURL:(id)arg0 ;
+(void)discoverUbiquitousVersionsOfItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)getNonlocalVersionsOfItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
+(void)getNonlocalVersionsOfItemAtURL:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(BOOL)_preserveConflictVersionLocally;
-(BOOL)_setDocumentInfo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)removeAndReturnError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)_documentInfo;
-(id)_initWithAddition:(id)arg0 ;
-(id)_initWithFileURL:(id)arg0 library:(id)arg1 clientID:(id)arg2 name:(id)arg3 contentsURL:(id)arg4 isBackup:(BOOL)arg5 revision:(id)arg6 ;
-(id)_initWithFileURL:(id)arg0 nonLocalVersion:(id)arg1 ;
-(id)description;
-(id)init;
-(id)replaceItemAtURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)restoreOverItemAtURL:(id)arg0 error:(*id)arg1 ;
-(void)_overrideModificationDateWithDate:(id)arg0 ;
-(void)dealloc;


@end


#endif