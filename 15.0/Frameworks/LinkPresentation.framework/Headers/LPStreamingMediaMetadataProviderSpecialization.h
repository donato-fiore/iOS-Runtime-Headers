// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPSTREAMINGMEDIAMETADATAPROVIDERSPECIALIZATION_H
#define LPSTREAMINGMEDIAMETADATAPROVIDERSPECIALIZATION_H

@class AVAssetImageGenerator;


#import "LPMetadataProviderSpecialization.h"
#import "LPMediaAssetFetcher.h"
#import "LPLinkMetadata.h"

@interface LPStreamingMediaMetadataProviderSpecialization : LPMetadataProviderSpecialization {
    BOOL _cancelled;
    LPMediaAssetFetcher *_fetcher;
    AVAssetImageGenerator *_videoImageGenerator;
    LPLinkMetadata *_metadata;
}




+(NSUInteger)specialization;
+(id)specializedMetadataProviderForResourceWithContext:(id)arg0 ;
-(void)cancel;
-(void)done;
-(void)fail;
-(void)start;


@end


#endif