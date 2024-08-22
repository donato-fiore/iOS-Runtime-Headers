// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDCORESPOTLIGHTMESSAGEBODYINDEXER_H
#define IMDCORESPOTLIGHTMESSAGEBODYINDEXER_H

@class NSString;
@protocol IMDCoreSpotlightIndexer;


#import "IMDCoreSpotlightBaseIndexer.h"

@interface IMDCoreSpotlightMessageBodyIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)indexItem:(id)arg0 withChat:(id)arg1 isReindexing:(BOOL)arg2 metadataToUpdate:(id)arg3 timingProfiler:(id)arg4 ;


@end


#endif