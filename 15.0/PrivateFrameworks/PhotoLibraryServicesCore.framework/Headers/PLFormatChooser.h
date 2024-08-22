// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLFORMATCHOOSER_H
#define PLFORMATCHOOSER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "PLDeviceConfiguration.h"
#import "PLImageFormat.h"

@interface PLFormatChooser : NSObject {
    PLDeviceConfiguration *_deviceConfiguration;
    PLImageFormat *_posterThumbnailFormat;
}


@property (readonly, nonatomic) PLImageFormat *fullScreenFormatForCurrentDevice; // ivar: _fullScreenFormatForCurrentDevice
@property (readonly, nonatomic) PLImageFormat *indexSheetUnbakedFormat; // ivar: _indexSheetUnbakedFormat
@property (readonly, nonatomic) PLImageFormat *landscapeScrubberThumbnailFormat; // ivar: _landscapeScrubberThumbnailFormat
@property (readonly, nonatomic) PLImageFormat *largestUncroppedNonJPEGThumbnailFormat; // ivar: _largestUncroppedNonJPEGThumbnailFormat
@property (readonly, nonatomic) PLImageFormat *masterThumbnailFormat; // ivar: _masterThumbnailFormat
@property (readonly, nonatomic) PLImageFormat *portraitScrubberThumbnailFormat; // ivar: _portraitScrubberThumbnailFormat
@property (readonly, nonatomic) NSArray *supportedDerivativeFormats; // ivar: _supportedDerivativeFormats


+(id)_suppportedFullSizeFormatIDs;
+(id)defaultFormatChooser;
+(struct CGSize )_desiredImageSizeForRequestedViewSizeInPixels:(struct CGSize )arg0 isAspectFill:(BOOL)arg1 srcAspectRatio:(CGFloat)arg2 ;
// -(id)_bestFormatWithSize:(struct CGSize )arg0 specificVersionType:(NSInteger)arg1 contentMode:(NSInteger)arg2 demoteFactor:(CGFloat)arg3 srcAspectRatio:(CGFloat)arg4 hasAdjustmentsHandler:(id)arg5 desiredImagePixelSize:(unk)arg6  ;
-(id)_fastestDegradedFormatFallingBackFromFormat:(id)arg0 ;
-(id)_nextLargestAcceptableFormatForFormat:(id)arg0 ;
-(id)_standardDegradedFormatFallingBackFromFormat:(id)arg0 ;
-(id)derivativeFormatThatFitsSize:(struct CGSize )arg0 contentMode:(NSInteger)arg1 demoteFactor:(CGFloat)arg2 srcAspectRatio:(CGFloat)arg3 desiredImagePixelSize:(struct CGSize *)arg4 ;
-(id)initWithDeviceConfiguration:(id)arg0 ;
-(struct CGSize )posterThumbnailSize;
// -(void)chooseFormatsForSize:(struct CGSize )arg0 specificVersionType:(NSInteger)arg1 contentMode:(NSInteger)arg2 demoteFactor:(CGFloat)arg3 srcAspectRatio:(CGFloat)arg4 degradedFormatPolicy:(NSInteger)arg5 hasAdjustmentsHandler:(id)arg6 desiredImagePixelSize:(unk)arg7 bestFormat:(struct CGSize *)arg8 degradedFormat:(*id)arg9  ;


@end


#endif