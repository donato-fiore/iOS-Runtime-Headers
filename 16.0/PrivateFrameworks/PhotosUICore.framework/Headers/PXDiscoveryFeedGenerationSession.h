// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISCOVERYFEEDGENERATIONSESSION_H
#define PXDISCOVERYFEEDGENERATIONSESSION_H

@class PHPhotoLibrary, PLPhotoAnalysisServiceClient, NSDictionary;

#import <Foundation/Foundation.h>

#import "PXDiscoveryFeedGenerationOptions.h"

@interface PXDiscoveryFeedGenerationSession : NSObject {
    PHPhotoLibrary *_photoLibrary;
    PXDiscoveryFeedGenerationOptions *_options;
    PLPhotoAnalysisServiceClient *_photoAnalysisServiceClient;
    NSDictionary *_sessionState;
}




-(id)_assetCollectionWithAsset:(id)arg0 ;
-(id)additionaItemsWithTargetCount:(NSUInteger)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 options:(id)arg1 ;


@end


#endif