// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITCONTRASTDETECTIONMANAGER_H
#define AXAUDITCONTRASTDETECTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface AXAuditContrastDetectionManager : NSObject



+(id)sharedManager;
-(CGFloat)_euclideanDistanceBetweenColor1:(id)arg0 color2:(id)arg1 ;
-(CGFloat)contrastRatioForColor1:(id)arg0 color2:(id)arg1 ;
-(CGFloat)luminanceForColor:(id)arg0 ;
-(id)_topColorsForColors:(id)arg0 ;
-(id)_topColorsForImageData:(id)arg0 optimized:(BOOL)arg1 ;
-(id)auditDisplayStringForAuditColor:(id)arg0 ;
-(id)colorForHexValueString:(id)arg0 ;
-(id)contrastResultForInput:(id)arg0 ;
-(id)getSuggestedColorForFailContrast:(id)arg0 backgroundColor:(id)arg1 ;
-(id)pixelColorInImagePixelData:(struct __CFData *)arg0 atX:(int)arg1 atY:(int)arg2 width:(CGFloat)arg3 ;


@end


#endif