// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIBARCODEDETECTOR_H
#define CIBARCODEDETECTOR_H

@class NSMutableDictionary;


#import "CIDetector.h"
#import "CIContext.h"

@interface CIBarcodeDetector : CIDetector {
    CGFloat _width;
    CGFloat _height;
    NSMutableDictionary *featureOptions;
}


@property (retain, nonatomic) CIContext *context; // ivar: context


-(id)featuresInImage:(id)arg0 ;
-(id)featuresInImage:(id)arg0 options:(id)arg1 ;
-(id)initWithContext:(id)arg0 options:(id)arg1 ;
-(void)dealloc;


@end


#endif