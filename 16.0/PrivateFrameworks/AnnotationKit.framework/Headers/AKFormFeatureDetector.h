// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKFORMFEATUREDETECTOR_H
#define AKFORMFEATUREDETECTOR_H

@protocol AKFormFeatureDetectorDelegate;

#import <Foundation/Foundation.h>


@interface AKFormFeatureDetector : NSObject

@property (weak, nonatomic) NSObject<AKFormFeatureDetectorDelegate> *delegate; // ivar: _delegate


+(struct CGContext *)_newBitmapFromCGPDFDocument:(struct CGPDFDocument *)arg0 ;
+(struct CGContext *)_newBitmapInRect:(struct CGRect )arg0 onPage:(id)arg1 scale:(CGFloat)arg2 ;
-(*float)_shiftScanAwayFromEdgeInPixels:(*float)arg0 ;
-(*float)_thresholdPixelStripIn:(*float)arg0 withImageLenth:(NSInteger)arg1 thresholdValue:(float)arg2 startingPtr:(*float)arg3 withThresholdLength:(NSInteger)arg4 ;
-(BOOL)_floatPixelBufferForCGContext:(struct CGContext *)arg0 imageBuffer:(struct vImage_Buffer *)arg1 ;
-(NSInteger)_scanToEdgeOfFormFieldStartingAtPoint:(struct CGPoint )arg0 withBitmapData:(*float)arg1 width:(NSInteger)arg2 height:(NSInteger)arg3 bottomRowStartsAt:(*float)arg4 bottomRowEndsAt:(*float)arg5 withLineThickness:(NSInteger)arg6 gapWidthForDottedLines:(NSInteger)arg7 separatorHeights:(id)arg8 andRegionHeight:(*NSInteger)arg9 trackAverageSpacingWidth:(*NSInteger)arg10 trackFarthestPossibleEdge:(*NSInteger)arg11 trackNumberOfSegments:(*NSInteger)arg12 trackNumberOfGapsForDottedLine:(*NSInteger)arg13 goingLeft:(BOOL)arg14 ;
-(NSUInteger)_findLineEdgeTypeOnLeft:(BOOL)arg0 startingAt:(*float)arg1 withPageLeftEdge:(*float)arg2 withPageWidth:(NSInteger)arg3 andFormHeight:(NSUInteger)arg4 ;
-(id)_boxOnLine:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(id)_checkboxAtPoint:(struct CGPoint )arg0 onPage:(id)arg1 pageBitmap:(struct CGContext *)arg2 ;
-(id)_defaultFeatureForPoint:(struct CGPoint )arg0 onPage:(id)arg1 snapToVerticalEdges:(BOOL)arg2 ;
-(id)_featureAtPoint:(struct CGPoint )arg0 onPage:(id)arg1 mode:(NSInteger)arg2 ;
-(id)_formFieldAtPoint:(struct CGPoint )arg0 onPage:(id)arg1 enforceMaxWidth:(BOOL)arg2 pageBitmap:(struct CGContext *)arg3 ;
-(id)_lineAtPoint:(struct CGPoint )arg0 onPage:(id)arg1 useVerticalCenter:(BOOL)arg2 ;
-(id)_snappedFormFieldForField:(id)arg0 ;
-(id)featureAtPoint:(struct CGPoint )arg0 onPage:(id)arg1 mode:(NSInteger)arg2 ;
-(id)initWithDelegate:(id)arg0 ;
-(struct ? )_findVerticalEdgesAtPoint:(struct CGPoint )arg0 extent:(NSInteger)arg1 onPage:(id)arg2 ;
-(struct CGRect )_findExtentForLineTop:(CGFloat)arg0 lineBottom:(CGFloat)arg1 x:(CGFloat)arg2 onPage:(id)arg3 ;
-(struct CGRect )_translateFeature:(id)arg0 toPageOrigin:(struct CGPoint )arg1 ;
-(void)_drawThresholdedBitmapForTestForPageBitmap:(struct CGContext *)arg0 withPixels:(*float)arg1 ;
-(void)dealloc;


@end


#endif