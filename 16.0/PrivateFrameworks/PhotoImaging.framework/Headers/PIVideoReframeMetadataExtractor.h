// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIVIDEOREFRAMEMETADATAEXTRACTOR_H
#define PIVIDEOREFRAMEMETADATAEXTRACTOR_H

@class AVAsset, AVAssetTrack, NSArray;

#import <Foundation/Foundation.h>


@interface PIVideoReframeMetadataExtractor : NSObject {
    AVAsset *_asset;
    AVAssetTrack *_videoTrack;
    AVAssetTrack *_mdataTrack;
    CGAffineTransform ndcMetadataTransform;
    CGAffineTransform pxlMetadataTransform;
}


@property (readonly, nonatomic) NSArray *timedMetadataArray; // ivar: timedMetadataArray


+(BOOL)canProvideMetadataForAVAsset:(id)arg0 ;
-(id)extractMetadata;
-(id)init;
-(id)initWithAVAsset:(id)arg0 ;
-(id)subjectsFromMetadata:(struct FigLivePhotoMetadata *)arg0 ;
-(struct ? )trajectoryeHomographyFromMetadata:(struct FigLivePhotoMetadata *)arg0 containsV3Metadata:(*BOOL)arg1 ;
-(struct CGVector )centerMotionVectorFromMetadata:(struct FigLivePhotoMetadata *)arg0 ;
-(struct CGVector )motionBlurVectorFromMetadata:(struct FigLivePhotoMetadata *)arg0 ;
-(void)overwriteTrackingMetadataWithPlist:(id)arg0 ;


@end


#endif