// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIFACECOREDETECTOR_H
#define CIFACECOREDETECTOR_H

@class NSMutableDictionary, FCRFaceDetector;


#import "CIDetector.h"
#import "CIContext.h"

@interface CIFaceCoreDetector : CIDetector {
    NSMutableDictionary *featureOptions;
    BOOL _tracking;
}


@property (retain, nonatomic) CIContext *context; // ivar: context
@property (retain) FCRFaceDetector *faceCoreDetector; // ivar: faceCoreDetector


-(id)adjustedImageFromImage:(id)arg0 orientation:(int)arg1 inverseCTM:(struct CGAffineTransform *)arg2 ;
-(id)createFaceCoreDataFromCIImage:(id)arg0 width:(*NSUInteger)arg1 height:(*NSUInteger)arg2 ;
-(id)featuresInImage:(id)arg0 ;
-(id)featuresInImage:(id)arg0 options:(id)arg1 ;
-(id)initWithContext:(id)arg0 options:(id)arg1 ;
-(struct CGAffineTransform )ctmForImageWithBounds:(struct CGRect )arg0 orientation:(int)arg1 ;
-(void)dealloc;
-(void)finalize;


@end


#endif