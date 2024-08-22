// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWREDEYEREDUCERNODE_H
#define BWREDEYEREDUCERNODE_H

@class NSDictionary, CIContext, CIDualRedEyeRepairSession, NSString;


#import "BWNode.h"

@interface BWRedEyeReducerNode : BWNode {
    NSDictionary *_redEyeReductionParametersByPortType;
    *opaqueCMFormatDescription _outputFormatDescription;
    CIContext *_ciContext;
    CIDualRedEyeRepairSession *_redEyeRepairSession;
    *opaqueCMSampleBuffer _primaryImageSampleBuffer;
    BOOL _skipRepair;
    int _redEyeReductionVersion;
    int _inferenceType;
    NSString *_inferenceAttachmentKey;
}




+(void)initialize;
-(id)inferenceAttachmentKey;
-(id)initWithVersion:(int)arg0 sensorConfigurationsByPortType:(id)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(int)inferenceType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setInferenceAttachmentKey:(id)arg0 ;
-(void)setInferenceType:(int)arg0 ;


@end


#endif