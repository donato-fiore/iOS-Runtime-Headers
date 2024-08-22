// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHCLOUDACTIVITYVIEW_H
#define PHCLOUDACTIVITYVIEW_H

@class UIView, CALayer, CAPropertyAnimation;



@interface PHCloudActivityView : UIView

@property (retain, nonatomic) CALayer *cloudImageLayer; // ivar: _cloudImageLayer
@property (retain, nonatomic) CALayer *completedImageLayer; // ivar: _completedImageLayer
@property (nonatomic) CGFloat initialWidth; // ivar: _initialWidth
@property (retain, nonatomic) CALayer *loadingImageLayer; // ivar: _loadingImageLayer
@property (retain, nonatomic) CAPropertyAnimation *rotationAnimation; // ivar: _rotationAnimation
@property (nonatomic) NSUInteger state; // ivar: _state


+(void)initialize;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)persistenceManagerDidChange:(id)arg0 ;
-(void)registerForNotifications;
-(void)startRotationAnimation;
-(void)stopRotationAnimation;
-(void)streamingDidStart:(id)arg0 ;
-(void)streamingDidStop:(id)arg0 ;
-(void)updateViewVisibility;


@end


#endif