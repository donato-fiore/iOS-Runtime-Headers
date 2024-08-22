// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMLIBRARYPLIST_H
#define IMLIBRARYPLIST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMLibraryPlist : NSObject

@property (copy, nonatomic) NSString *directory; // ivar: _directory
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (copy, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) NSString *sidecarPath;


+(BOOL)isPDFFromPlistEntry:(id)arg0 ;
+(BOOL)isSupplementalContentFromPlistEntry:(id)arg0 ;
+(id)accessDateFromPlistEntry:(id)arg0 ;
+(id)albumFromPlistEntry:(id)arg0 ;
+(id)assetIDFromItunesMetadataEntry:(id)arg0 ;
+(id)assetIDFromPlistEntry:(id)arg0 ;
+(id)assetIDFromPlistEntry:(id)arg0 forAssetAtPath:(id)arg1 ;
+(id)assetTypeFromPlistEntry:(id)arg0 ;
+(id)authorFromPlistEntry:(id)arg0 ;
+(id)backupFolderNameFromPlistEntry:(id)arg0 ;
+(id)bookEpubIdFromPlistEntry:(id)arg0 ;
+(id)booksArrayFromPlistEntry:(id)arg0 ;
+(id)booksRepositoryPath;
+(id)collectionIdFromPlistEntry:(id)arg0 ;
+(id)coverHashFromItunesMetadataEntry:(id)arg0 ;
+(id)coverPathFromItunesMetadataEntry:(id)arg0 ;
+(id)coverPathFromPlistEntry:(id)arg0 ;
+(id)coverWritingModeFromPlistEntry:(id)arg0 ;
+(id)deletesArrayFromPlistEntry:(id)arg0 ;
+(id)endOfBookExperiencesFromItunesMetadataEntry:(id)arg0 ;
+(id)entryForAssetID:(id)arg0 contents:(id)arg1 ;
+(id)entryForAssetURL:(id)arg0 contents:(id)arg1 ;
+(id)experienceConfidenceFromExperienceParamEntry:(id)arg0 ;
+(id)experienceKindFromExperienceEntry:(id)arg0 ;
+(id)experienceLocationFromExperienceEntry:(id)arg0 ;
+(id)experienceLocationTypeFromExperienceEntry:(id)arg0 ;
+(id)experienceParamsFromExperienceEntry:(id)arg0 ;
+(id)experienceVersionFromExperienceEntry:(id)arg0 ;
+(id)extensionFromPlistEntry:(id)arg0 ;
+(id)feedURLFromPlistEntry:(id)arg0 ;
+(id)folderNameFromPlistEntry:(id)arg0 ;
+(id)genreFromPlistEntry:(id)arg0 ;
+(id)humanReadablePublicationVersionFromPlistEntry:(id)arg0 ;
+(id)importDateFromPlistEntry:(id)arg0 ;
+(id)isEphemeralFromPlistEntry:(id)arg0 ;
+(id)isExplicitContentFromPlistEntry:(id)arg0 ;
+(id)isItunesUFromPlistEntry:(id)arg0 ;
+(id)isManagedBookFromURL:(id)arg0 ;
+(id)isProofedAssetFromPlistEntry:(id)arg0 ;
+(id)isSampleFromPlistEntry:(id)arg0 ;
+(id)keyNameForAccessDate;
+(id)keyNameForAssetType;
+(id)keyNameForAuthor;
+(id)keyNameForBackupPath;
+(id)keyNameForBookDescription;
+(id)keyNameForBooksArray;
+(id)keyNameForCollectionId;
+(id)keyNameForComments;
+(id)keyNameForCoverWritingMode;
+(id)keyNameForDeletesArray;
+(id)keyNameForExplicitContent;
+(id)keyNameForFirstOpened;
+(id)keyNameForFlavor;
+(id)keyNameForGeneration;
+(id)keyNameForGenre;
+(id)keyNameForHighWaterMark;
+(id)keyNameForHumanReadablePublicationVersion;
+(id)keyNameForImportDate;
+(id)keyNameForIsEphemeral;
+(id)keyNameForIsSupplementalContent;
+(id)keyNameForLanguages;
+(id)keyNameForLastOpened;
+(id)keyNameForPageProgression;
+(id)keyNameForPath;
+(id)keyNameForPrimaryLanguage;
+(id)keyNameForProofedAsset;
+(id)keyNameForPublicationVersion;
+(id)keyNameForPublisherUniqueID;
+(id)keyNameForRating;
+(id)keyNameForReadingLocation;
+(id)keyNameForSampleAsset;
+(id)keyNameForScrollDirection;
+(id)keyNameForSortAuthor;
+(id)keyNameForSortTitle;
+(id)keyNameForStoreId;
+(id)keyNameForStoreId2;
+(id)keyNameForStorePlaylistId;
+(id)keyNameForSubject;
+(id)keyNameForTitle;
+(id)keyNameForUniqueId;
+(id)keyNameForYear;
+(id)languageFromPlistEntry:(id)arg0 ;
+(id)languagesFromPlistEntry:(id)arg0 ;
+(id)libraryPlistWithKind:(NSInteger)arg0 ;
+(id)lookupAssetURLStringFromAssetID:(id)arg0 contents:(id)arg1 ;
+(id)lookupBackupFolderNameFromAssetID:(id)arg0 contents:(id)arg1 ;
+(id)lookupCoverWritingModeFromAssetID:(id)arg0 contents:(id)arg1 ;
+(id)lookupFolderNameFromAssetID:(id)arg0 contents:(id)arg1 ;
+(id)lookupHumanReadablePublicationVersionFromAssetID:(id)arg0 contents:(id)arg1 ;
+(id)lookupLanguageFromAssetID:(id)arg0 contents:(id)arg1 ;
+(id)lookupPageProgressionFromAssetID:(id)arg0 contents:(id)arg1 ;
+(id)lookupPublicationVersionFromAssetID:(id)arg0 contents:(id)arg1 ;
+(id)lookupPublicationVersionNumberFromAssetID:(id)arg0 contents:(id)arg1 ;
+(id)lookupScrollDirectionFromAssetID:(id)arg0 contents:(id)arg1 ;
+(id)managedRepositoryPath;
+(id)mimeTypeFromPlistEntry:(id)arg0 ;
+(id)packageFileHashFromItunesMetadataEntry:(id)arg0 ;
+(id)pageProgressionFromPlistEntry:(id)arg0 ;
+(id)permlinkFromPlistEntry:(id)arg0 ;
+(id)persistentIDFromPlistEntry:(id)arg0 ;
+(id)primaryLanguageFromPlistEntry:(id)arg0 ;
+(id)proofingRepositoryPath;
+(id)publicationVersionFromPlistEntry:(id)arg0 ;
+(id)publicationVersionNumberFromPlistEntry:(id)arg0 ;
+(id)publisherUniqueIDFromItunesMetadataEntry:(id)arg0 ;
+(id)purchasesRepositoryPath;
+(id)sampleRepositoryPath;
+(id)scrollDirectionFromPlistEntry:(id)arg0 ;
+(id)sharedContainerURL;
+(id)sharedRepositoryPath;
+(id)sortAuthorFromPlistEntry:(id)arg0 ;
+(id)sortTitleFromPlistEntry:(id)arg0 ;
+(id)stashedSampleRepositoryPath;
+(id)storeIdFromPlistEntry:(id)arg0 ;
+(id)storePlaylistIdFromPlistEntry:(id)arg0 ;
+(id)temporaryItemIdentifierFromPlistEntry:(id)arg0 ;
+(id)titleFromItunesMetadataEntry:(id)arg0 ;
+(id)titleFromPlistEntry:(id)arg0 ;
+(id)uniqueIDFromItunesMetadataEntry:(id)arg0 ;
+(id)uniqueIdFromPlistEntry:(id)arg0 ;
+(void)setAccessDate:(id)arg0 toPlistEntry:(id)arg1 ;
+(void)setBooksArray:(id)arg0 toPlistEntry:(id)arg1 ;
+(void)setDeletesArray:(id)arg0 toPlistEntry:(id)arg1 ;
-(BOOL)bumpModificationDate;
-(BOOL)isPathInDirectory:(id)arg0 ;
-(id)_initWithDirectory:(id)arg0 fileName:(id)arg1 ;
-(id)calculateChecksum;
-(id)contents;
-(id)p_contents:(id)arg0 ;
-(id)unfilteredContents;
-(id)unfilteredSidecarContents;
-(void)addDeletedFiles:(id)arg0 ;
-(void)p_rewriteSidecarWithDeletes:(id)arg0 ;
-(void)removeDeletedPaths:(id)arg0 ;


@end


#endif