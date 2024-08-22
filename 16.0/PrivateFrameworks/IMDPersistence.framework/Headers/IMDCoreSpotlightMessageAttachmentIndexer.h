// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCORESPOTLIGHTMESSAGEATTACHMENTINDEXER_H
#define IMDCORESPOTLIGHTMESSAGEATTACHMENTINDEXER_H

@class NSString;
@protocol IMDCoreSpotlightIndexer;


#import "IMDCoreSpotlightBaseIndexer.h"

@interface IMDCoreSpotlightMessageAttachmentIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_attachmentIsSticker:(id)arg0 ;
+(BOOL)messageSupportsIndexingForItem:(id)arg0 ;
+(NSUInteger)partKeyForAttachmentFromItem:(id)arg0 withGUID:(id)arg1 ;
+(id)_possibleVideoComplementExtensions;
+(id)assetUUIDKey;
+(id)attachmentIndexTypeForPath:(id)arg0 filename:(id)arg1 isSticker:(BOOL)arg2 isCommSafetySensitive:(BOOL)arg3 ;
+(id)attachmentIsSyndicatableMediaKey;
+(id)attachmentRecordsFromAttachments:(id)arg0 ;
+(id)auxiliaryItemsForPrimaryAttributes:(id)arg0 withItem:(id)arg1 chat:(id)arg2 isReindexing:(BOOL)arg3 timingProfiler:(id)arg4 ;
+(id)livePhotoComplementKey;
+(id)momentShareURLKey;
+(id)videoComplementPathForResourceURL:(id)arg0 ;
+(void)indexItem:(id)arg0 withChat:(id)arg1 isReindexing:(BOOL)arg2 metadataToUpdate:(id)arg3 timingProfiler:(id)arg4 ;


@end


#endif