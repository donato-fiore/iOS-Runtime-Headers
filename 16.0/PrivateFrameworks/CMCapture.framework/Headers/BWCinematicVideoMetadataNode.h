// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWCINEMATICVIDEOMETADATANODE_H
#define BWCINEMATICVIDEOMETADATANODE_H



#import "BWNode.h"
#import "BWNodeOutput.h"

@interface BWCinematicVideoMetadataNode : BWNode {
    *opaqueCMFormatDescription _metadataFormatDescription;
    BOOL _previousGeneratedMetadataBufferWasEmpty;
    *OpaqueCMBlockBuffer _emptyMetadataSampleData;
    unsigned int _localIDForAperture_BE;
    unsigned int _localIDForDisparity_BE;
    unsigned int _localIDForCinematographyMetadata_BE;
    unsigned int _localIDForRenderingMetadata_BE;
    unsigned int _localIDForStabilizationMetadata_BE;
}


@property (readonly, nonatomic) BWNodeOutput *metadataOutput; // ivar: _metadataOutput
@property (readonly, nonatomic) BWNodeOutput *passthruOutput; // ivar: _passthruOutput


+(void)initialize;
-(id)init;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif