// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTVIEWTHROTTLER_H
#define AVTVIEWTHROTTLER_H

@class NSTimer, AVTView, NSString;
@protocol AVTDeviceResourceConsumer, AVTDeviceResourceConsumerDelegate, AVTUILogger;

#import <Foundation/Foundation.h>


@interface AVTViewThrottler : NSObject <AVTDeviceResourceConsumer>



@property (retain, nonatomic) NSTimer *autoUnthrottlingTimer; // ivar: _autoUnthrottlingTimer
@property (readonly, nonatomic) AVTView *avtView; // ivar: _avtView
@property (weak, nonatomic) NSObject<AVTDeviceResourceConsumerDelegate> *consumerDelegate; // ivar: _consumerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly) Class superclass;
@property (nonatomic) BOOL throttling; // ivar: _throttling


-(id)initWithAVTView:(id)arg0 environment:(id)arg1 ;
-(void)applyThrottling;
-(void)autoUnthrottle;
-(void)dealloc;
-(void)releaseRenderingResourceForEstimatedDuration:(CGFloat)arg0 ;
-(void)scheduleAutoUnthrottlingAfterDelay:(CGFloat)arg0 ;
-(void)throttle;
-(void)throttleForDelay:(CGFloat)arg0 ;
-(void)unthrottle;


@end


#endif