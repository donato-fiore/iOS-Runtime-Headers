// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTTAPTOTRACKPREPROCESSOR_H
#define FTTAPTOTRACKPREPROCESSOR_H

@protocol FTScaling;

#import <Foundation/Foundation.h>


@interface FTTapToTrackPreprocessor : NSObject {
    shared_ptr<__CVBuffer> _intermediateBuffer;
    ? _meanPixel;
    id<FTScaling> *_scaler;
}




-(BOOL)preprocessBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithScaler:(id)arg0 ;
-(id)meanPixel;
-(struct __CVBuffer *)bgraPixelBuffer;


@end


#endif