// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSKANIMATEDGIFMOVIEEXPORTER_H
#define TSKANIMATEDGIFMOVIEEXPORTER_H

@class TSPData;

#import <Foundation/Foundation.h>


@interface TSKAnimatedGIFMovieExporter : NSObject {
    TSPData *_data;
}




+(BOOL)canInitWithDataType:(id)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(struct opaqueCMSampleBuffer *)p_createCMSampleBufferFromImageInCGImageSource:(struct CGImageSource *)arg0 atIndex:(NSUInteger)arg1 withPresentationTime:(struct ? )arg2 nextPresentationTime:(struct ? *)arg3 ;
-(void)exportToMovieFileURL:(id)arg0 fileType:(id)arg1 completionHandler:(id)arg2 ;
-(void)p_finishWithSuccess:(BOOL)arg0 error:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif