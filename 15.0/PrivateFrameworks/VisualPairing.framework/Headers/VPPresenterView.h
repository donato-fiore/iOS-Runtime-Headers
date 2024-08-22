// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VPPRESENTERVIEW_H
#define VPPRESENTERVIEW_H

@class UIView, AVPlayer, CALayer, NSArray, NSString;
@protocol OS_dispatch_source;



@interface VPPresenterView : UIView {
    AVPlayer *_moviePlayer;
    BOOL _started;
    CALayer *_watermarkLayer;
    NSArray *_watermarkPixelBuffers;
    NSUInteger _watermarkStepIndex;
    NSObject<OS_dispatch_source> *_watermarkStepTimer;
}


@property (nonatomic) unsigned int flags; // ivar: _flags
@property (copy, nonatomic) NSString *verificationCode; // ivar: _verificationCode


-(void)_watermarkStep;
-(void)layoutSubviews;
-(void)start;
-(void)stop;


@end


#endif