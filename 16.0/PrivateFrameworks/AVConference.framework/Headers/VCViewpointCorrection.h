// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVIEWPOINTCORRECTION_H
#define VCVIEWPOINTCORRECTION_H


#import <Foundation/Foundation.h>


@interface VCViewpointCorrection : NSObject {
    *CVAViewpointCorrection _viewpointCorrectionRef;
}




+(struct ? )intrinsicsFromDeviceFormat:(id)arg0 ;
-(id)init;
-(int)viewpointCorrectionForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 activeFormat:(id)arg1 enabled:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif