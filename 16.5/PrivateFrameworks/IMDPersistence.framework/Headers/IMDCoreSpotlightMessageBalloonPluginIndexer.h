// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCORESPOTLIGHTMESSAGEBALLOONPLUGININDEXER_H
#define IMDCORESPOTLIGHTMESSAGEBALLOONPLUGININDEXER_H

@class NSString;
@protocol IMDCoreSpotlightIndexer;


#import "IMDCoreSpotlightBaseIndexer.h"

@interface IMDCoreSpotlightMessageBalloonPluginIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_richLinkPluginHasRichContentForItem:(id)arg0 attachmentPaths:(id)arg1 originalURL:(id)arg2 outURL:(*id)arg3 outTitle:(*id)arg4 ;
+(id)_newSummaryTextForPayloadData:(id)arg0 item:(id)arg1 ;
+(id)_pluginPayloadAttachmentPathsForItem:(id)arg0 ;
+(id)lpDescriptionCustomKey;
+(id)lpHasRichMediaCustomKey;
+(id)lpPluginPathsCustomKey;
+(id)lpTitleCustomKey;
+(void)indexItem:(id)arg0 withChat:(id)arg1 isReindexing:(BOOL)arg2 metadataToUpdate:(id)arg3 timingProfiler:(id)arg4 ;


@end


#endif