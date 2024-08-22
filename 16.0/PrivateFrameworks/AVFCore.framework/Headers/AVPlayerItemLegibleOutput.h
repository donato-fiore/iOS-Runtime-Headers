// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERITEMLEGIBLEOUTPUT_H
#define AVPLAYERITEMLEGIBLEOUTPUT_H

@protocol AVPlayerItemLegibleOutputPushDelegate, OS_dispatch_queue;


#import "AVPlayerItemOutput.h"
#import "AVPlayerItemLegibleOutputInternal.h"

@interface AVPlayerItemLegibleOutput : AVPlayerItemOutput {
    AVPlayerItemLegibleOutputInternal *_legibleOutputInternal;
}


@property (nonatomic) CGFloat advanceIntervalForDelegateInvocation;
@property (readonly, weak, nonatomic) NSObject<AVPlayerItemLegibleOutputPushDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;


+(void)initialize;
-(BOOL)_attachToPlayerItem:(id)arg0 ;
-(BOOL)suppressesPlayerRendering;
-(id)_figLegibleOutputsDictionaryOptions;
-(id)init;
-(id)initWithDependencyFactory:(id)arg0 mediaSubtypesForNativeRepresentation:(id)arg1 ;
-(id)initWithMediaSubtypesForNativeRepresentation:(id)arg0 ;
-(id)textStylingResolution;
-(void)_collectUncollectables;
-(void)_detachFromPlayerItem;
-(void)_pushAttributedStrings:(id)arg0 andSampleBuffers:(id)arg1 atItemTime:(struct ? )arg2 ;
-(void)_signalFlush;
-(void)dealloc;
-(void)setSuppressesPlayerRendering:(BOOL)arg0 ;
-(void)setTextStylingResolution:(id)arg0 ;


@end


#endif