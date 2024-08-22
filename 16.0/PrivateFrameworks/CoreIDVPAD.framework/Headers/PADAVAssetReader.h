// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PADAVASSETREADER_H
#define PADAVASSETREADER_H


#import <Foundation/Foundation.h>


@interface PADAVAssetReader : NSObject



-(id)_frameFromVideo:(id)arg0 timestamp:(struct ? )arg1 size:(struct CGSize )arg2 error:(*id)arg3 ;
-(id)_imageDataFromVideo:(id)arg0 timestamp:(struct ? )arg1 size:(struct CGSize )arg2 error:(*id)arg3 ;
-(id)framesFromVideoURL:(id)arg0 timestamps:(id)arg1 error:(*id)arg2 ;
-(id)framesFromVideoURL:(id)arg0 timestamps:(id)arg1 size:(struct CGSize )arg2 error:(*id)arg3 ;
-(id)imagesFromVideoURL:(id)arg0 timestamps:(id)arg1 error:(*id)arg2 ;
-(id)imagesFromVideoURL:(id)arg0 timestamps:(id)arg1 size:(struct CGSize )arg2 error:(*id)arg3 ;
-(struct opaqueCMSampleBuffer *)_sampleBufferFromVideo:(id)arg0 timestamp:(struct ? )arg1 size:(struct CGSize )arg2 error:(*id)arg3 ;


@end


#endif