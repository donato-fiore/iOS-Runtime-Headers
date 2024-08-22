// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRNEURALTEXTDETECTOR_H
#define CRNEURALTEXTDETECTOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CRDetectorConfiguration.h"
#import "CRPerformanceStatistics.h"

@interface CRNeuralTextDetector : NSObject

@property (retain) CRDetectorConfiguration *configuration; // ivar: _configuration
@property (retain) CRPerformanceStatistics *detectorStats; // ivar: _detectorStats
@property (retain) CRPerformanceStatistics *inferenceStats; // ivar: _inferenceStats
@property (retain) CRPerformanceStatistics *postProcStats; // ivar: _postProcStats
@property BOOL shouldCancel; // ivar: _shouldCancel
@property (retain, nonatomic) NSMutableArray *tileRects; // ivar: _tileRects


+(id)detectorForRevision:(NSUInteger)arg0 imageReaderOptions:(id)arg1 error:(*id)arg2 ;
+(id)textFeaturesFromPolygons:(*void)arg0 withScale:(*float)arg1 ;
+(struct CGSize )scaledImageSizeForOptions:(id)arg0 imageSize:(struct CGSize )arg1 ;
+(struct CGSize )smallestImageSizeForTextWithRelativeHeight:(CGFloat)arg0 originalImageSize:(struct CGSize )arg1 ;
-(BOOL)preheatWithError:(*id)arg0 ;
-(id)detectInImage:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)cancel;
-(void)enumerateTilesForImage:(id)arg0 block:(id)arg1 ;


@end


#endif