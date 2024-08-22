// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CITEXTDETECTOR_H
#define CITEXTDETECTOR_H

@class NSMutableDictionary, FKTextDetector;


#import "CIDetector.h"
#import "CIContext.h"

@interface CITextDetector : CIDetector {
    CGFloat _width;
    CGFloat _height;
    NSMutableDictionary *featureOptions;
    FKTextDetector *textDetector;
}


@property (retain, nonatomic) CIContext *context; // ivar: context


-(id)adjustedImageFromImage:(id)arg0 orientation:(int)arg1 inverseCTM:(struct CGAffineTransform *)arg2 ;
-(id)featuresInImage:(id)arg0 ;
-(id)featuresInImage:(id)arg0 options:(id)arg1 ;
-(id)initWithContext:(id)arg0 options:(id)arg1 ;
-(struct CGAffineTransform )ctmForImageWithBounds:(struct CGRect )arg0 orientation:(int)arg1 ;
-(void)dealloc;
-(void)finalize;


@end


#endif