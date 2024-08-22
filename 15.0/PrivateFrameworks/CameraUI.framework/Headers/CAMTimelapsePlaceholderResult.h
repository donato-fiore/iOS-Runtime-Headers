// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMTIMELAPSEPLACEHOLDERRESULT_H
#define CAMTIMELAPSEPLACEHOLDERRESULT_H

@class NSString, NSDate, NSURL, UIImage, NSDictionary;
@protocol CAMTransientAssetConvertible;

#import <Foundation/Foundation.h>


@interface CAMTimelapsePlaceholderResult : NSObject <CAMTransientAssetConvertible>



@property (readonly, copy, nonatomic) NSString *assetUUID; // ivar: _assetUUID
@property (readonly, copy, nonatomic) NSString *burstIdentifier;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, nonatomic) NSInteger captureDevice; // ivar: _captureDevice
@property (readonly, nonatomic) NSInteger captureOrientation; // ivar: _captureOrientation
@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? duration;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo;
@property (readonly, nonatomic) CGSize finalExpectedPixelSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? irisStillDisplayTime;
@property (readonly, nonatomic) NSString *irisStillImageUUID;
@property (readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property (readonly, nonatomic) NSUInteger mediaSubtypes;
@property (readonly, nonatomic) NSUInteger mediaType;
@property (readonly, nonatomic) NSUInteger numberOfRepresentedAssets;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) *void previewImageSurface; // ivar: _previewImageSurface
@property (readonly, nonatomic) unsigned short sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timelapseDuration; // ivar: _timelapseDuration
@property (readonly, nonatomic, getter=isTransientAssetTemporaryPlaceholder) BOOL transientAssetTemporaryPlaceholder;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) CGSize videoDimensions; // ivar: _videoDimensions


-(id)initWithAssetUUID:(id)arg0 captureSession:(unsigned short)arg1 creationDate:(id)arg2 captureOrientation:(NSInteger)arg3 captureDevice:(NSInteger)arg4 videoDimensions:(struct CGSize )arg5 duration:(CGFloat)arg6 previewImageSurface:(*void)arg7 ;
-(void)dealloc;


@end


#endif