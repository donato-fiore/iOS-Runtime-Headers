// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSMUSICRECOMMENDATIONSREQUESTCONTEXT_H
#define NMSMUSICRECOMMENDATIONSREQUESTCONTEXT_H

@class NSMutableOrderedSet, NSMapTable, MPModelStoreBrowseResponse, MPModelForYouRecommendationsResponse, MPModelResponse, NSArray, NSSet, NSOrderedSet;

#import <Foundation/Foundation.h>

#import "NMSMutableMediaSyncInfo.h"

@interface NMSMusicRecommendationsRequestContext : NSObject {
    NSMutableOrderedSet *_recentMusicModelObjects;
    NSMapTable *_modelObjectSectionMap;
}


@property (retain, nonatomic) MPModelStoreBrowseResponse *editorialBrowseResponse; // ivar: _editorialBrowseResponse
@property (retain, nonatomic) MPModelForYouRecommendationsResponse *forYouResponse; // ivar: _forYouResponse
@property (retain, nonatomic) MPModelResponse *heavyRotationResponse; // ivar: _heavyRotationResponse
@property (retain, nonatomic) NSArray *importedObjects; // ivar: _importedObjects
@property (readonly, nonatomic) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings;
@property (retain, nonatomic) MPModelResponse *libraryRecentMusicResponse; // ivar: _libraryRecentMusicResponse
@property (retain, nonatomic) MPModelResponse *lookupResponse; // ivar: _lookupResponse
@property (nonatomic) NSUInteger minimumNumberOfRecentMusicModelObjects; // ivar: _minimumNumberOfRecentMusicModelObjects
@property (readonly, nonatomic) NSSet *modelObjects;
@property (readonly, nonatomic) NSUInteger numberOfRecentMusicModelObjects;
@property (readonly, nonatomic) NSOrderedSet *recommendations;
@property (retain, nonatomic) MPModelResponse *starterPackResponse; // ivar: _starterPackResponse


-(BOOL)_hasDownloadableSongsForModelObject:(id)arg0 ;
-(BOOL)_recentMusicContainsModelObject:(id)arg0 ;
-(void)_processItem:(id)arg0 section:(id)arg1 identifier:(id)arg2 ;
-(void)_processResponsesIfNeeded;


@end


#endif