// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLDELAYEDSAVEACTIONSDETAIL_H
#define PLDELAYEDSAVEACTIONSDETAIL_H

@class NSSet, NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PLDelayedSaveActionsDetail : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSSet *albumCountsAndDateRangeUpdates; // ivar: _albumCountsAndDateRangeUpdates
@property (copy, nonatomic) NSSet *assetsForDuetDelete; // ivar: _assetsForDuetDelete
@property (copy, nonatomic) NSArray *assetsForFilesystemPersistency; // ivar: _assetsForFilesystemPersistency
@property (copy, nonatomic) NSArray *cloudFeedAlbumUpdates; // ivar: _cloudFeedAlbumUpdates
@property (copy, nonatomic) NSArray *cloudFeedAssetInserts; // ivar: _cloudFeedAssetInserts
@property (copy, nonatomic) NSArray *cloudFeedAssetUpdates; // ivar: _cloudFeedAssetUpdates
@property (copy, nonatomic) NSArray *cloudFeedCommentInserts; // ivar: _cloudFeedCommentInserts
@property (copy, nonatomic) NSArray *cloudFeedDeletionEntries; // ivar: _cloudFeedDeletionEntries
@property (copy, nonatomic) NSArray *cloudFeedInvitationRecordUpdates; // ivar: _cloudFeedInvitationRecordUpdates
@property (copy, nonatomic) NSArray *dupeAnalysisCloudInserts; // ivar: _dupeAnalysisCloudInserts
@property (copy, nonatomic) NSArray *dupeAnalysisNormalInserts; // ivar: _dupeAnalysisNormalInserts
@property (copy, nonatomic) NSSet *importSessionCountsAndDateRangeUpdates; // ivar: _importSessionCountsAndDateRangeUpdates
@property (copy, nonatomic) NSSet *memoriesForAssetUpdate; // ivar: _memoriesForAssetUpdate
@property (copy, nonatomic) NSSet *memoriesForDuetDelete; // ivar: _memoriesForDuetDelete
@property (copy, nonatomic) NSDictionary *momentDeletes; // ivar: _momentDeletes
@property (copy, nonatomic) NSArray *momentInsertsAndUpdates; // ivar: _momentInsertsAndUpdates
@property (copy, nonatomic) NSDictionary *searchIndexUpdates; // ivar: _searchIndexUpdates
@property (readonly, nonatomic) BOOL shouldHandleMoments;
@property (nonatomic) BOOL shouldReloadWidgetTimeline; // ivar: _shouldReloadWidgetTimeline
@property (nonatomic) BOOL shouldUpdateFeaturedContent; // ivar: _shouldUpdateFeaturedContent
@property (copy, nonatomic) NSArray *updatedAssetIDsForHighlights; // ivar: _updatedAssetIDsForHighlights
@property (copy, nonatomic) NSArray *updatedMomentIDsForHighlights; // ivar: _updatedMomentIDsForHighlights


+(BOOL)supportsSecureCoding;
+(id)_decodeMomentDeletes:(id)arg0 urlToObjectID:(id)arg1 ;
-(id)_encodableMomentDeletes;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif