// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGNEROLAYER_H
#define FIGNEROLAYER_H

@class CALayer;
@protocol OS_dispatch_queue, FigNeroLayerDelegate;



@interface FigNeroLayer : CALayer {
    NSObject<OS_dispatch_queue> *_neroQueue;
    *OpaqueFigNeroid _neroid;
    id<FigNeroLayerDelegate> *_neroDelegate;
}


@property (nonatomic) NSObject<FigNeroLayerDelegate> *neroDelegate;


-(id)init;
-(void)_dispatchNotification:(id)arg0 value:(id)arg1 ;
-(void)_start;
-(void)dealloc;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)start;
-(void)stop;


@end


#endif