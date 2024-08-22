// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIREPAIRUTILITIES_H
#define PIREPAIRUTILITIES_H


#import <Foundation/Foundation.h>


@interface PIRepairUtilities : NSObject



+(BOOL)applyRepairMLStrokeToMutableBuffer:(id)arg0 brushStroke:(id)arg1 detectedFaces:(id)arg2 context:(id)arg3 error:(*id)arg4 ;
+(id)brushStrokeFromRetouchStrokeDictionary:(id)arg0 ;
+(id)extractRGBAfPixelsFromImage:(id)arg0 fromROI:(struct ? )arg1 ;
+(id)prepareForCIFilterWithFaces:(id)arg0 cropRect:(struct ? )arg1 ;
+(struct CGImage *)newWatchInfillFromImage:(struct CGImage *)arg0 mask:(struct CGImage *)arg1 ;
+(void)applyRepairStrokeToMutableBuffer:(id)arg0 brushStroke:(id)arg1 sourceOffset:(struct CGPoint )arg2 repairEdges:(BOOL)arg3 ;
+(void)calcExtentsForStrokeRadius:(CGFloat)arg0 offset:(struct ? )arg1 inputImageExtent:(struct ? )arg2 maskExtent:(struct ? )arg3 repairExtent:(struct ? *)arg4 textureExtent:(struct ? *)arg5 sourceExtent:(struct ? *)arg6 ;


@end


#endif