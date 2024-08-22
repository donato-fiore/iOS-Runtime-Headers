// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELPLAYLIST_H
#define MPMODELPLAYLIST_H

@class NSString, NSDate, NSDateComponents, NSURL;


#import "MPModelObject.h"
#import "MPModelCurator.h"
#import "MPTiledArtworkRequest.h"

@interface MPModelPlaylist : MPModelObject

@property (copy, nonatomic) id *artworkCatalogBlock;
@property (copy, nonatomic) NSString *cloudVersionHash;
@property (copy, nonatomic) MPModelCurator *curator;
@property (nonatomic, getter=isCuratorPlaylist) BOOL curatorPlaylist;
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;
@property (copy, nonatomic) NSString *editorNotes;
@property (copy, nonatomic) id *editorialArtworkCatalogBlock;
@property (nonatomic) BOOL hasCleanContent;
@property (nonatomic) BOOL hasExplicitContent;
@property (nonatomic) NSInteger keepLocalEnableState;
@property (nonatomic) NSInteger keepLocalManagedStatus;
@property (copy, nonatomic) NSDate *lastDevicePlaybackDate;
@property (copy, nonatomic) NSDateComponents *lastModifiedDateComponents;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isOwner) BOOL owner;
@property (nonatomic, getter=isPublicPlaylist) BOOL publicPlaylist;
@property (copy, nonatomic) NSDateComponents *releaseDateComponents;
@property (copy, nonatomic) NSURL *shareShortURL;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (copy, nonatomic) MPTiledArtworkRequest *tiledArtworkRequest;
@property (nonatomic) NSUInteger trackCount;
@property (nonatomic) NSUInteger traits;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger userEditableComponents;
@property (copy, nonatomic) NSString *versionHash;
@property (nonatomic, getter=isVisiblePlaylist) BOOL visiblePlaylist;


+(BOOL)supportsKeepLocalStatusObservation;
+(BOOL)supportsLibraryAddStatusObservation;
+(BOOL)supportsLibraryRemoval;
+(NSInteger)genericObjectType;
+(id)__libraryAdded_KEY;
+(id)__owner_KEY;
+(id)__publicPlaylist_KEY;
+(id)__subscribed_KEY;
+(id)__visiblePlaylist_KEY;
+(id)kindWithPlaylistEntryKind:(id)arg0 options:(NSUInteger)arg1 ;
+(id)kindWithVariants:(NSUInteger)arg0 playlistEntryKind:(id)arg1 options:(NSUInteger)arg2 ;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(id)requiredStoreLibraryPersonalizationProperties;
-(NSInteger)libraryRemovalSupportedOptions;
-(id)artworkCatalog;
-(id)contentItemCollectionInfo;
-(id)editorialArtworkCatalog;
-(id)humanDescription;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg0 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg0 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)trackArtworkCatalogsWithCount:(NSInteger)arg0 ;
-(id)tracksTiledArtworkCatalogWithRows:(NSUInteger)arg0 columns:(NSUInteger)arg1 ;
-(struct MPLibraryAddStatusObserverConfiguration )libraryAddStatusObserverConfiguration;


@end


#endif