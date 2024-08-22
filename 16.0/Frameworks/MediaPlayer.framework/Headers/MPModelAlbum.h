// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMODELALBUM_H
#define MPMODELALBUM_H

@class NSString, NSDate, NSDateComponents;


#import "MPModelObject.h"
#import "MPModelArtist.h"
#import "MPModelGenre.h"
#import "MPModelSong.h"

@interface MPModelAlbum : MPModelObject

@property (retain, nonatomic) MPModelArtist *artist;
@property (copy, nonatomic) id *artworkCatalogBlock;
@property (nonatomic, getter=isClassical) BOOL classical;
@property (nonatomic, getter=isClassicalExperienceAvailable) BOOL classicalExperienceAvailable;
@property (nonatomic, getter=isCompilation) BOOL compilation;
@property (copy, nonatomic) NSString *copyrightText;
@property (nonatomic) NSInteger discCount;
@property (readonly, copy, nonatomic) NSDate *downloadedDate;
@property (copy, nonatomic) NSString *editorNotes;
@property (retain, nonatomic) MPModelGenre *genre;
@property (nonatomic) BOOL hasCleanContent;
@property (nonatomic) BOOL hasExplicitContent;
@property (nonatomic) NSUInteger keepLocalConstraints;
@property (nonatomic) NSInteger keepLocalEnableState;
@property (nonatomic) NSInteger keepLocalManagedStatus;
@property (nonatomic) NSUInteger keepLocalManagedStatusReason;
@property (copy, nonatomic) NSDate *lastDevicePlaybackDate;
@property (nonatomic, getter=isLibraryAddEligible) BOOL libraryAddEligible;
@property (nonatomic, getter=isLibraryAdded) BOOL libraryAdded;
@property (copy, nonatomic) NSDate *libraryAddedDate;
@property (nonatomic) NSInteger maximumItemTrackNumber;
@property (nonatomic, getter=isPreorder) BOOL preorder;
@property (copy, nonatomic) NSDateComponents *releaseDateComponents;
@property (retain, nonatomic) MPModelSong *representativeSong;
@property (copy, nonatomic) NSString *shortEditorNotes;
@property (copy, nonatomic) id *songPopularityBlock;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) NSInteger trackCount;
@property (nonatomic) NSUInteger traits;
@property (copy, nonatomic) NSString *versionHash;
@property (nonatomic) float volumeNormalization;
@property (nonatomic) NSInteger year;


+(BOOL)supportsKeepLocalStatusObservation;
+(BOOL)supportsLibraryAddStatusObservation;
+(BOOL)supportsLibraryRemoval;
+(NSInteger)genericObjectType;
+(id)__classicalExperienceAvailable_KEY;
+(id)__classical_KEY;
+(id)__compilation_KEY;
+(id)__libraryAddEligible_KEY;
+(id)__libraryAdded_KEY;
+(id)__preorder_KEY;
+(id)kindWithSongKind:(id)arg0 ;
+(id)kindWithSongKind:(id)arg0 options:(NSUInteger)arg1 ;
+(id)kindWithVariants:(NSUInteger)arg0 songKind:(id)arg1 ;
+(id)kindWithVariants:(NSUInteger)arg0 songKind:(id)arg1 options:(NSUInteger)arg2 ;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(id)requiredStoreLibraryPersonalizationProperties;
-(NSInteger)libraryRemovalSupportedOptions;
-(id)artworkCatalog;
-(id)contentItemCollectionInfo;
-(id)humanDescription;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)objectWithStoreLibraryPersonalizationRelativeModelObject:(id)arg0 ;
-(id)personalizationScopedPropertiesForProperties:(id)arg0 ;
-(id)relativeModelObjectForStoreLibraryPersonalization;
-(id)songPopularityForIdentifiers:(id)arg0 ;
-(struct MPLibraryAddStatusObserverConfiguration )libraryAddStatusObserverConfiguration;


@end


#endif