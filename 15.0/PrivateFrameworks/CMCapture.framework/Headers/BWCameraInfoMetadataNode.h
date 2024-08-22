// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWCAMERAINFOMETADATANODE_H
#define BWCAMERAINFOMETADATANODE_H



#import "BWNode.h"
#import "BWNodeOutput.h"

@interface BWCameraInfoMetadataNode : BWNode {
    BOOL _generateLivePhotosMetadata;
    *opaqueCMFormatDescription _boxedMetadataFormatDescription;
    *opaqueCMFormatDescription _basicBoxedMetadataFormatDescription;
    BOOL _previousGeneratedMetadataBufferWasEmpty;
    *OpaqueCMBlockBuffer _emptyMetadataSampleData;
    ? _videoDimensions;
    unsigned int _localIDForLivePhotosMetadata_BE;
}


@property (readonly, nonatomic) BWNodeOutput *boxedMetadataOutput; // ivar: _boxedMetadataOutput
@property (readonly, nonatomic) BWNodeOutput *passthruOutput; // ivar: _passthruOutput


+(void)initialize;
-(id)_initForMotionMetadataSource:(int)arg0 generateLivePhotosMetadata:(BOOL)arg1 generateDebugMetadata:(BOOL)arg2 ;
-(id)initForLivePhotosMetadata:(BOOL)arg0 generateDebugMetadata:(BOOL)arg1 ;
-(id)nodeSubType;
-(id)nodeType;
-(struct OpaqueCMBlockBuffer *)_emptyMetadataBlockBuffer;
-(void)_emitLivePhotosAndDebugBoxedMetadataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 metadata:(id)arg1 time:(struct ? )arg2 ;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleDroppedSample:(id)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif