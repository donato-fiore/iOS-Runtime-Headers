// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


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
-(id)initForLivePhotosMetadata:(BOOL)arg0 generateDebugMetadata:(BOOL)arg1 ;
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