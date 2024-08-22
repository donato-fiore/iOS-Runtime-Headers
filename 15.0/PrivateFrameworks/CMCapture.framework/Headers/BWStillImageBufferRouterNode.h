// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSTILLIMAGEBUFFERROUTERNODE_H
#define BWSTILLIMAGEBUFFERROUTERNODE_H

@class NSArray, NSDictionary;


#import "BWNode.h"
#import "BWNodeOutput.h"

@interface BWStillImageBufferRouterNode : BWNode {
    BOOL _usingBravoDevice;
    BOOL _usingPearlDevice;
    BOOL _HDRSupported;
    BOOL _SISSupported;
    BOOL _GNRSISSupported;
    BOOL _LTMHDRSupported;
    NSArray *_inputPortTypes;
    NSDictionary *_portTypeToInput;
}


@property (readonly, nonatomic) BWNodeOutput *HDROutput; // ivar: _HDROutput
@property (readonly, nonatomic) BWNodeOutput *SISOutput; // ivar: _SISOutput
@property (readonly, nonatomic) BWNodeOutput *bravoTelephotoOutput; // ivar: _bravoTelephotoOutput
@property (readonly, nonatomic) BWNodeOutput *defaultOutput; // ivar: _defaultOutput
@property (readonly, nonatomic) BWNodeOutput *pearlInfraredOutput; // ivar: _pearlInfraredOutput


+(void)initialize;
-(id)_defaultOutputsForInput:(id)arg0 ;
-(id)_outputForInput:(id)arg0 resolvedStillImageCaptureSettings:(id)arg1 metadata:(id)arg2 ;
-(id)initWithInputPortTypes:(id)arg0 HDRSupported:(BOOL)arg1 SISSupported:(BOOL)arg2 GNRSISSupported:(BOOL)arg3 LTMHDRSupported:(BOOL)arg4 depthDataDeliveryEnabled:(BOOL)arg5 ;
-(id)inputForPortType:(id)arg0 ;
-(id)nodeSubType;
-(id)nodeType;
-(void)configurationWithID:(NSInteger)arg0 updatedFormat:(id)arg1 didBecomeLiveForInput:(id)arg2 ;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)handleNodeError:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImagePrewarmWithSettings:(id)arg0 forInput:(id)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg0 forInput:(id)arg1 ;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;


@end


#endif