// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPHANDPOSEVIDEOREQUEST_H
#define VCPHANDPOSEVIDEOREQUEST_H

@class NSArray;


#import "VCPRequest.h"
#import "VCPImageHandsAnalyzer.h"

@interface VCPHandPoseVideoRequest : VCPRequest {
    int _handID;
    int _preferredWidth;
    int _preferredHeight;
    unsigned int _preferredFormat;
    VCPImageHandsAnalyzer *_analyzer;
    NSArray *_existingHands;
}




-(BOOL)cleanupWithOptions:(id)arg0 error:(*id)arg1 ;
-(float)handDistance:(id)arg0 withhandB:(id)arg1 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(int)associateHands:(id)arg0 withExisingHands:(id)arg1 ;
-(struct CGSize )preferredInputSizeWithOptions:(id)arg0 error:(*id)arg1 ;
-(unsigned int)preferredPixelFormat;


@end


#endif