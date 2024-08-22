// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPREDDITMETADATAPROVIDERSPECIALIZATION_H
#define LPREDDITMETADATAPROVIDERSPECIALIZATION_H



#import "LPMetadataProviderSpecialization.h"
#import "LPURLFetcher.h"
#import "LPLinkMetadata.h"

@interface LPRedditMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    BOOL _cancelled;
    LPURLFetcher *_fetcher;
    LPLinkMetadata *_metadata;
    id *_completionHandler;
}




+(BOOL)generateSpecializedMetadataForCompleteMetadata:(id)arg0 withContext:(id)arg1 completionHandler:(id)arg2 ;
+(NSUInteger)specialization;


@end


#endif