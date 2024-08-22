// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKPOTRACE_H
#define AKPOTRACE_H


#import <Foundation/Foundation.h>


@interface AKPotrace : NSObject {
    *CGPath _cachedPath;
    *potrace_bitmap_s _potraceBitmap;
    *potrace_param_s _potraceParameters;
}


@property CGFloat alphamax;
@property int opticurve;
@property CGFloat opttolerance;
@property int turdsize;
@property int turnpolicy;


+(struct CGPath *)newCGPathFromPotracePath:(struct potrace_path_s *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 flipped:(BOOL)arg1 whiteIsInside:(BOOL)arg2 ;
-(struct CGPath *)CGPath;
-(void)_clearPathIfNecessary;
-(void)_generatePath;
-(void)dealloc;


@end


#endif