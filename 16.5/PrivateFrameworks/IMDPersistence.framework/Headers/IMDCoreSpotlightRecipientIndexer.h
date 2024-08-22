// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCORESPOTLIGHTRECIPIENTINDEXER_H
#define IMDCORESPOTLIGHTRECIPIENTINDEXER_H

@class NSString;
@protocol IMDCoreSpotlightIndexer;


#import "IMDCoreSpotlightBaseIndexer.h"

@interface IMDCoreSpotlightRecipientIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_contactForURI:(id)arg0 ;
+(id)_handleIDForHandleID:(id)arg0 ;
+(id)_selfCSPersonFromHandleID:(id)arg0 messageService:(id)arg1 ;
+(id)groupPhotoPathCustomKey;
+(id)suggestedContactNameCustomKey;
+(id)suggestedContactPhotoCustomKey;
+(void)indexItem:(id)arg0 withChat:(id)arg1 isReindexing:(BOOL)arg2 metadataToUpdate:(id)arg3 timingProfiler:(id)arg4 ;


@end


#endif