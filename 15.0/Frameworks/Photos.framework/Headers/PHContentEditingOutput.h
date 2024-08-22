// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHCONTENTEDITINGOUTPUT_H
#define PHCONTENTEDITINGOUTPUT_H

@class NSString, NSURL, NSNumber, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PHAdjustmentData.h"

@interface PHContentEditingOutput : NSObject <NSSecureCoding>

 {
    PHAdjustmentData *_adjustmentData;
    NSInteger _baseVersion;
}


@property (copy, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (retain) PHAdjustmentData *adjustmentData;
@property NSInteger baseVersion;
@property (retain) NSURL *editorBundleURL; // ivar: _editorBundleURL
@property (nonatomic) CGFloat fullSizeRenderDuration; // ivar: _fullSizeRenderDuration
@property (nonatomic) NSInteger fullSizeRenderHeight; // ivar: _fullSizeRenderHeight
@property (nonatomic) NSInteger fullSizeRenderWidth; // ivar: _fullSizeRenderWidth
@property (nonatomic) BOOL isAsyncAdjustment; // ivar: _isAsyncAdjustment
@property (nonatomic) BOOL isSubstandardRender; // ivar: _isSubstandardRender
@property (readonly, getter=isLoopingLivePhoto) BOOL loopingLivePhoto; // ivar: _loopingLivePhoto
@property (readonly) NSInteger mediaType; // ivar: _mediaType
@property (retain, nonatomic) NSNumber *originalResourceChoice; // ivar: _originalResourceChoice
@property (retain) NSData *penultimateRenderedJPEGData; // ivar: _penultimateRenderedJPEGData
@property (copy) NSURL *penultimateRenderedVideoComplementContentURL; // ivar: _penultimateRenderedVideoComplementContentURL
@property (copy) NSURL *penultimateRenderedVideoContentURL; // ivar: _penultimateRenderedVideoContentURL
@property (retain, nonatomic) NSNumber *playbackVariation; // ivar: _playbackVariation
@property (retain, nonatomic) NSNumber *reframeVariation; // ivar: _reframeVariation
@property (copy) NSURL *renderedContentURL; // ivar: _renderedContentURL
@property (retain, nonatomic) NSURL *renderedPreviewContentURL; // ivar: _renderedPreviewContentURL
@property (copy) NSURL *renderedVideoComplementContentURL; // ivar: _renderedVideoComplementContentURL
@property (copy) NSURL *renderedVideoPosterURL; // ivar: _renderedVideoPosterURL
@property (retain, nonatomic) NSNumber *videoDuration; // ivar: _videoDuration


+(BOOL)supportsSecureCoding;
+(NSUInteger)maximumAdjustmentDataLength;
+(id)outputForFlippingFullSizeRenderWithContentEditingInput:(id)arg0 error:(*id)arg1 ;
+(id)renderURLWithExtensionForMediaType:(NSInteger)arg0 ;
+(id)renderURLWithExtensionForMediaType:(NSInteger)arg0 useHEICImage:(BOOL)arg1 ;
-(BOOL)isOnlyChangingOriginalChoice;
-(id)assetAdjustmentsWithEditorBundleID:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithAdjustmentBaseVersion:(NSInteger)arg0 mediaType:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentEditingInput:(id)arg0 ;
-(id)initWithContentEditingInput:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithPlaceholderForCreatedAsset:(id)arg0 ;
-(id)renderURLWithExtensionForMediaType:(NSInteger)arg0 ;
-(void)_setupRequiredRenderedContentURLsWithEditingInput:(id)arg0 options:(id)arg1 ;
-(void)clearRenderedContentURL;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setRenderedJPEGData:(id)arg0 ;


@end


#endif