// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUREDEYEDETECTIONREQUEST_H
#define NUREDEYEDETECTIONREQUEST_H



#import "NUImageDataRequest.h"

@interface NURedEyeDetectionRequest : NUImageDataRequest



-(id)initWithComposition:(id)arg0 dataExtractor:(id)arg1 options:(id)arg2 ;
-(id)initWithComposition:(id)arg0 options:(id)arg1 ;
-(id)initWithRequest:(id)arg0 dataExtractor:(id)arg1 options:(id)arg2 ;
-(id)initWithRequest:(id)arg0 options:(id)arg1 ;
-(id)newRenderJob;


@end


#endif