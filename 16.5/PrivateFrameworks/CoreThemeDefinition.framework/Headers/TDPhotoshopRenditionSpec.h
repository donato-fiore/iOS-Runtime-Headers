// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDPHOTOSHOPRENDITIONSPEC_H
#define TDPHOTOSHOPRENDITIONSPEC_H



#import "TDRenditionSpec.h"
#import "TDImageColorHistogram.h"
#import "TDPhotoshopLayer.h"

@interface TDPhotoshopRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDImageColorHistogram *histogram; // ivar: _histogram
@property (nonatomic) BOOL isTintable;
@property (retain, nonatomic) TDPhotoshopLayer *photoshopLayer;


-(BOOL)_sliceRectanglesForPSDImage:(id)arg0 rowsPerRendition:(*int)arg1 columnsPerRendition:(*int)arg2 originalColumnWidth:(*int)arg3 newColumnWidth:(*int)arg4 originalRowHeight:(*int)arg5 newRowHeight:(*int)arg6 originalColumnX:(*int)arg7 originalRowY:(*int)arg8 newRenditionSize:(struct ? *)arg9 newSliceCount:(*int)arg10 renditionRect:(struct CGRect *)arg11 throwawaySliceRect:(struct CGRect *)arg12 ;
-(BOOL)updatePackingPropertiesWithDocument:(id)arg0 ;
-(id)copyDataFromAttributes;
-(id)createCSIRepresentationFromGradientPSDImage:(id)arg0 withCompression:(BOOL)arg1 colorSpaceID:(NSUInteger)arg2 ;
-(id)createCSIRepresentationFromPSDImage:(id)arg0 withCompression:(BOOL)arg1 colorSpaceID:(NSUInteger)arg2 ;
-(id)createCSIRepresentationFromPSDImage:(id)arg0 withCompression:(BOOL)arg1 edgeMetricsMask:(id)arg2 textMetricsMask:(id)arg3 baselineMetricsMask:(id)arg4 auxiliary1MetricsMask:(id)arg5 auxiliary2MetricsMask:(id)arg6 colorSpaceID:(NSUInteger)arg7 allowsPaletteImageCompression:(BOOL)arg8 allowsHevcCompression:(BOOL)arg9 allowsDeepmapImageCompression:(BOOL)arg10 allowsDeepmap2ImageCompression:(BOOL)arg11 ;
-(id)createCSIRepresentationWithCompression:(BOOL)arg0 colorSpaceID:(NSUInteger)arg1 document:(id)arg2 ;
-(id)debugDescription;
-(int)_layerIndexInPSDImage:(id)arg0 ;
-(int)psdSliceNumberForRenditionRow:(int)arg0 sliceRow:(int)arg1 renditionColumn:(int)arg2 sliceColumn:(int)arg3 rowsPerRendition:(int)arg4 columnsPerRendition:(int)arg5 renditionColumnCount:(int)arg6 ;
-(struct ? )_subtractThrowawaySliceFromMetricsIfNeeded:(struct CGRect )arg0 metrics:(struct ? )arg1 renditionRect:(struct CGRect )arg2 ;
-(void)_logError:(id)arg0 ;
-(void)_logExtra:(id)arg0 ;
-(void)_logWarning:(id)arg0 ;
-(void)copyAttributesInto:(id)arg0 ;
-(void)dealloc;
-(void)drawPackableRenditionInContext:(struct CGContext *)arg0 withDocument:(id)arg1 ;
-(void)setAttributesFromCopyData:(id)arg0 ;


@end


#endif