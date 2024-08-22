// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDYNAMICCONTENTVIEW_H
#define PKDYNAMICCONTENTVIEW_H

@class UIView, UIImageView, PKDynamicLayerEmitterConfiguration, CAEmitterLayer;



@interface PKDynamicContentView : UIView {
    UIImageView *_imageView;
    PKDynamicLayerEmitterConfiguration *_dynamicLayerEmitterConfiguration;
    CAEmitterLayer *_emitterLayer;
    BOOL _paused;
}


@property (nonatomic, getter=isPaused) BOOL paused;


-(id)initWithImage:(id)arg0 emitterImage:(id)arg1 dynamicLayerEmitterConfiguration:(id)arg2 ;
-(void)_configureEmitterLayerWithImage:(id)arg0 ;
-(void)_pauseEmitters;
-(void)_startEmitters;
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;


@end


#endif