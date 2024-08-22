// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGEDUALPHOTOFACEPROPAGATORNODE_H
#define BWSTILLIMAGEDUALPHOTOFACEPROPAGATORNODE_H

@class NSArray;


#import "BWNode.h"
#import "BWNodeError.h"
#import "BWNodeInput.h"
#import "BWNodeOutput.h"

@interface BWStillImageDualPhotoFacePropagatorNode : BWNode {
    NSInteger _currentSettingsID;
    NSArray *_baseZoomFactors;
    *opaqueCMSampleBuffer _widerFOVBuffer;
    *opaqueCMSampleBuffer _narrowerFOVBuffer;
    BWNodeError *_widerFOVError;
    BWNodeError *_narrowerFOVError;
    BWNodeInput *_widerFOVInput;
    BWNodeInput *_narrowerFOVInput;
    BWNodeOutput *_widerFOVOutput;
    BWNodeOutput *_narrowerFOVOutput;
}




+(void)initialize;
-(id)initWithBaseZoomFactors:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif