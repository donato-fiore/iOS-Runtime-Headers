// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDSIMPLEARTWORKRENDITIONSPEC_H
#define TDSIMPLEARTWORKRENDITIONSPEC_H

@class NSString, NSOrderedSet;


#import "TDRenditionSpec.h"
#import "TDPNGAsset.h"
#import "TDThemeCompressionType.h"
#import "TDImageColorHistogram.h"

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec {
    CGRect _alignmentRect;
}


@property (nonatomic) CGRect alignmentRect;
@property (retain, nonatomic) NSString *alignmentRectString;
@property (nonatomic) BOOL allowsCompactCompression;
@property (nonatomic) BOOL allowsDeepmap2Compression;
@property (nonatomic) BOOL allowsDeepmapCompression;
@property (nonatomic) BOOL allowsHevcCompression;
@property (nonatomic) BOOL allowsMultiPassEncoding;
@property (nonatomic) BOOL allowsOptimalRowbytesPacking;
@property (nonatomic) BOOL allowsPaletteImageCompression;
@property (retain, nonatomic) TDPNGAsset *asset;
@property (retain, nonatomic) TDThemeCompressionType *compressionType;
@property (retain, nonatomic) TDImageColorHistogram *histogram; // ivar: _histogram
@property (nonatomic) BOOL isBackstop; // ivar: _isBackstop
@property (nonatomic) BOOL isTintable;
@property (retain, nonatomic) NSString *nonAlphaImageAreaString;
@property (retain, nonatomic) NSString *originalImageSizeString;
@property (nonatomic) CGSize physicalSizeInMeters;
@property (retain, nonatomic) NSString *physicalSizeInMetersString;
@property (nonatomic) CGFloat postScaleFactor;
@property (nonatomic) CGRect primitiveAlignmentRect;
@property (retain, nonatomic) NSOrderedSet *slices;


+(void)initialize;
-(BOOL)canBePackedWithDocument:(id)arg0 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg0 ;
-(id)_sliceRectanglesForRenditionSize:(struct ? )arg0 unadjustedSliceRectangles:(*id)arg1 imageSlicesNeedAdjustment:(*BOOL)arg2 newRenditionSize:(struct ? *)arg3 ;
-(id)associatedFileModificationDateWithDocument:(id)arg0 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(int)_rawPixelFormatOfCGImage:(struct CGImage *)arg0 ;
-(struct ? )_edgeMetricsForAlignmentRect:(struct CGRect )arg0 originalRenditionSize:(struct ? )arg1 newRenditionSize:(struct ? )arg2 ;
-(struct CGImage *)_createImageRefWithURL:(id)arg0 andDocument:(id)arg1 format:(*unsigned int)arg2 vectorBased:(*BOOL)arg3 ;
-(struct CGSize )_scaleRecognitionImageFromSize:(struct CGSize )arg0 ;
-(void)_logError:(id)arg0 ;
-(void)_logExtra:(id)arg0 ;
-(void)_logWarning:(id)arg0 ;
-(void)awakeFromFetch;
-(void)copyAttributesInto:(id)arg0 ;
-(void)dealloc;
-(void)drawPackableRenditionInContext:(struct CGContext *)arg0 withDocument:(id)arg1 ;


@end


#endif