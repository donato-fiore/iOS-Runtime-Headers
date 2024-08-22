// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETWRITERINPUTTERMINALHELPER_H
#define AVASSETWRITERINPUTTERMINALHELPER_H

@class NSString;
@protocol AVAssetWriterInputMediaDataRequesterDelegate;


#import "AVAssetWriterInputHelper.h"

@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper <AVAssetWriterInputMediaDataRequesterDelegate>

 {
    NSInteger _terminalStatus;
    BOOL _didRequestMediaDataOnce;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ? )arg1 ;
-(BOOL)canStartRespondingToEachPassDescriptionReturningReason:(*id)arg0 ;
-(BOOL)isReadyForMoreMediaData;
-(BOOL)mediaDataRequesterShouldRequestMediaData;
-(NSInteger)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(NSInteger)status;
-(id)initWithConfigurationState:(id)arg0 ;
-(id)initWithConfigurationState:(id)arg0 terminalStatus:(NSInteger)arg1 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(NSInteger)arg0 ;
-(void)markAsFinished;
-(void)markCurrentPassAsFinished;
-(void)requestMediaDataOnceIfNecessaryWithMediaDataRequester:(id)arg0 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg0 usingBlock:(id)arg1 ;
-(void)stopRequestingMediaData;


@end


#endif