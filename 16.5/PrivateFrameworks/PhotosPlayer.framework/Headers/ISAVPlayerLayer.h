// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISAVPLAYERLAYER_H
#define ISAVPLAYERLAYER_H

@class AVPlayerLayer;
@protocol OS_dispatch_queue;



@interface ISAVPlayerLayer : AVPlayerLayer {
    NSObject<OS_dispatch_queue> *_isolationQueue;
}


@property (copy, nonatomic) id *readyForDisplayChangeHandler; // ivar: _readyForDisplayChangeHandler


-(id)init;
-(void)dealloc;
-(void)deferredDealloc;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setPlayer:(id)arg0 ;
-(void)setWrappedPlayer:(id)arg0 ;


@end


#endif