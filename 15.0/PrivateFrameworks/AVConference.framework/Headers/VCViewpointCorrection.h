// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVIEWPOINTCORRECTION_H
#define VCVIEWPOINTCORRECTION_H


#import <Foundation/Foundation.h>


@interface VCViewpointCorrection : NSObject {
    *CVAViewpointCorrection _viewpointCorrectionRef;
}




+(struct ? )intrinsicsFromDeviceFormat:(id)arg0 ;
-(id)init;
-(int)viewpointCorrectionForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 faceMesh:(id)arg1 activeFormat:(id)arg2 enabled:(BOOL)arg3 ;
-(void)dealloc;


@end


#endif