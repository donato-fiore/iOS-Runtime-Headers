// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3MIGRATIONDIRECTIVES_H
#define ML3MIGRATIONDIRECTIVES_H


#import <Foundation/Foundation.h>


@interface ML3MigrationDirectives : NSObject

@property (nonatomic) int currentUserVersion; // ivar: _currentUserVersion
@property (nonatomic) BOOL forceUpdateOriginals; // ivar: _forceUpdateOriginals
@property (nonatomic) BOOL needsAnalyze; // ivar: _needsAnalyze
@property (nonatomic) BOOL needsToAutogenerateArtworkVariants; // ivar: _needsToAutogenerateArtworkVariants
@property (nonatomic) BOOL needsToRecreateIndexes; // ivar: _needsToRecreateIndexes
@property (nonatomic) BOOL needsToRecreateTriggers; // ivar: _needsToRecreateTriggers
@property (nonatomic) BOOL needsToReloadCollectionRepresentativeItems; // ivar: _needsToReloadCollectionRepresentativeItems
@property (nonatomic) BOOL needsToReloadContainerMediaTypes; // ivar: _needsToReloadContainerMediaTypes
@property (nonatomic) BOOL needsToReloadStoreBookmarkMetadataIdentifiers; // ivar: _needsToReloadStoreBookmarkMetadataIdentifiers
@property (nonatomic) BOOL needsToRemoveLocationsForItemsMissingAssets; // ivar: _needsToRemoveLocationsForItemsMissingAssets
@property (nonatomic) BOOL needsToUpdateSortMap; // ivar: _needsToUpdateSortMap
@property (readonly, nonatomic) int originalUserVersion; // ivar: _originalUserVersion


-(id)initWithOriginalUserVersion:(int)arg0 ;


@end


#endif