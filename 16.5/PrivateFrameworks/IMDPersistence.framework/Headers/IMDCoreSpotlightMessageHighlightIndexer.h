// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCORESPOTLIGHTMESSAGEHIGHLIGHTINDEXER_H
#define IMDCORESPOTLIGHTMESSAGEHIGHLIGHTINDEXER_H

@class NSString;
@protocol IMDCoreSpotlightIndexer;


#import "IMDCoreSpotlightBaseIndexer.h"

@interface IMDCoreSpotlightMessageHighlightIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)indexItem:(id)arg0 withChat:(id)arg1 isReindexing:(BOOL)arg2 metadataToUpdate:(id)arg3 timingProfiler:(id)arg4 ;


@end


#endif