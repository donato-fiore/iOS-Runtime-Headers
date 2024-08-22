// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCORESPOTLIGHTBASEINDEXER_H
#define IMDCORESPOTLIGHTBASEINDEXER_H

@class NSString;
@protocol IMDCoreSpotlightIndexer;

#import <Foundation/Foundation.h>


@interface IMDCoreSpotlightBaseIndexer : NSObject <IMDCoreSpotlightIndexer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)cancelIndexingForItem:(id)arg0 ;
+(id)auxiliaryItemsForPrimaryAttributes:(id)arg0 withItem:(id)arg1 chat:(id)arg2 isReindexing:(BOOL)arg3 timingProfiler:(id)arg4 ;
+(id)chatUniqueIdentifierKey;
+(id)indexTypeCustomKey;
+(id)isBusinessChatCustomKey;
+(id)isFromMeCustomKey;
+(id)messageServiceCustomKey;
+(id)timingProfileKey;
+(void)indexItem:(id)arg0 withChat:(id)arg1 isReindexing:(BOOL)arg2 metadataToUpdate:(id)arg3 timingProfiler:(id)arg4 ;
+(void)startTimingWithProfiler:(id)arg0 ;
+(void)stopTimingWithProfiler:(id)arg0 ;


@end


#endif