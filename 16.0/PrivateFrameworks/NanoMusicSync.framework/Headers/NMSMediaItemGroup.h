// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSMEDIAITEMGROUP_H
#define NMSMEDIAITEMGROUP_H


#import <Foundation/Foundation.h>

#import "NMSMediaContainerQuotaData.h"

@interface NMSMediaItemGroup : NSObject

@property (nonatomic) BOOL downloadedItemsOnly; // ivar: _downloadedItemsOnly
@property (readonly, nonatomic) BOOL isEstimate;
@property (nonatomic) BOOL manuallyAdded; // ivar: _manuallyAdded
@property (retain, nonatomic) NMSMediaContainerQuotaData *quotaData; // ivar: _quotaData
@property (retain, nonatomic) id *referenceObj; // ivar: _referenceObj
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)_itemsForContainerClass:(Class)arg0 containerIDs:(id)arg1 includingNonLibraryContent:(BOOL)arg2 includingDownloadedContentOnly:(BOOL)arg3 manuallyAdded:(BOOL)arg4 ;
+(id)itemGroupWithAudiobookIdentifier:(id)arg0 downloadLimit:(NSUInteger)arg1 manuallyAdded:(BOOL)arg2 downloadedItemsOnly:(BOOL)arg3 ;
+(id)itemGroupWithCustomPodcastFeedURL:(id)arg0 downloadedItemsOnly:(BOOL)arg1 ;
+(id)itemGroupWithPodcastFeedURL:(id)arg0 downloadOrder:(NSUInteger)arg1 episodeLimit:(NSUInteger)arg2 manuallyAdded:(BOOL)arg3 downloadedItemsOnly:(BOOL)arg4 ;
+(id)itemGroupWithPodcastStationUUID:(id)arg0 downloadedItemsOnly:(BOOL)arg1 ;
+(id)itemGroupWithQuotaRefObj:(id)arg0 ;
+(id)itemGroupWithRecommendation:(id)arg0 downloadedItemsOnly:(BOOL)arg1 ;
+(id)itemGroupWithSavedEpisodesDownloadedItemsOnly:(BOOL)arg0 ;
+(id)itemGroupWithSyncedAlbumID:(id)arg0 downloadedItemsOnly:(BOOL)arg1 ;
+(id)itemGroupWithSyncedPlaylistID:(id)arg0 downloadedItemsOnly:(BOOL)arg1 ;
+(id)itemGroupWithUpNextEpisodesDownloadedItemsOnly:(BOOL)arg0 ;
+(id)sharedLibraryRequestQueue;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContainer:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)identifiers;
-(id)identifiersForContainerType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 refObj:(id)arg1 manuallyAdded:(BOOL)arg2 quotaRefObj:(id)arg3 downloadedItemsOnly:(BOOL)arg4 ;
-(id)itemList;


@end


#endif