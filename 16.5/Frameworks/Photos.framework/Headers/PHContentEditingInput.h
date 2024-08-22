// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHCONTENTEDITINGINPUT_H
#define PHCONTENTEDITINGINPUT_H

@class NSMutableArray, NSString, AVAsset, NSURL, NSDate, UIImage, CLLocation, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PHAdjustmentData.h"
#import "PHLivePhoto.h"

@interface PHContentEditingInput : NSObject {
    NSObject<OS_dispatch_queue> *_avAssetIsolationQueue;
    NSMutableArray *_sandboxExtensionHandles;
}


@property (copy, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (retain, nonatomic) PHAdjustmentData *adjustmentData; // ivar: _adjustmentData
@property (readonly) AVAsset *audiovisualAsset; // ivar: _avAsset
@property (readonly) AVAsset *avAsset;
@property (copy, nonatomic) NSURL *backSwappingImageRenderURL; // ivar: _backSwappingImageRenderURL
@property (copy, nonatomic) NSURL *backSwappingVideoRenderURL; // ivar: _backSwappingVideoRenderURL
@property (nonatomic) NSInteger baseVersion; // ivar: _baseVersion
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) UIImage *displaySizeImage; // ivar: _displaySizeImage
@property (copy, nonatomic) NSURL *frontSwappingImageRenderURL; // ivar: _frontSwappingImageRenderURL
@property (copy, nonatomic) NSURL *frontSwappingVideoRenderURL; // ivar: _frontSwappingVideoRenderURL
@property (nonatomic) int fullSizeImageOrientation; // ivar: _fullSizeImageOrientation
@property (copy, nonatomic) NSURL *fullSizeImageURL; // ivar: _fullSizeImageURL
@property (retain, nonatomic) PHLivePhoto *livePhoto; // ivar: _livePhoto
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) NSUInteger mediaSubtypes; // ivar: _mediaSubtypes
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (retain, nonatomic) PHAdjustmentData *originalAdjustmentData; // ivar: _originalAdjustmentData
@property (retain, nonatomic) NSNumber *originalResourceChoice; // ivar: _originalResourceChoice
@property (copy, nonatomic) NSURL *overCapturePhotoURL; // ivar: _overCapturePhotoURL
@property (copy, nonatomic) NSURL *overCaptureVideoURL; // ivar: _overCaptureVideoURL
@property (nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (copy, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier
@property (copy, nonatomic) NSURL *videoURL; // ivar: _videoURL


-(BOOL)isMediaSubtype:(NSUInteger)arg0 ;
-(id)audioMix;
-(id)description;
-(id)imagePreview;
-(id)init;
-(id)videoComposition;
-(void)_invalidateAVAsset;
-(void)consumeSandboxExtensionToken:(id)arg0 ;
-(void)dealloc;
-(void)loadFullSizeImageDataWithCompletionHandler:(id)arg0 ;
-(void)requestFullSizeImageURLWithCompletionHandler:(id)arg0 ;


@end


#endif