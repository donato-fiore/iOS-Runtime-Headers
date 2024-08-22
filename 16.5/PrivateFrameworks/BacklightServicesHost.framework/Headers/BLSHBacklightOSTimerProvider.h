// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTOSTIMERPROVIDER_H
#define BLSHBACKLIGHTOSTIMERPROVIDER_H

@class NSString, NSDate;
@protocol BLSHOSTimerProviding;

#import <Foundation/Foundation.h>


@interface BLSHBacklightOSTimerProvider : NSObject <BLSHOSTimerProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *now;
@property (readonly) Class superclass;


-(id)dateWithTimeIntervalSinceNow:(CGFloat)arg0 ;
-(id)scheduledTimerWithIdentifier:(id)arg0 interval:(CGFloat)arg1 leewayInterval:(CGFloat)arg2 handler:(id)arg3 ;
-(id)scheduledWakingTimerWithIdentifier:(id)arg0 interval:(CGFloat)arg1 leewayInterval:(CGFloat)arg2 handler:(id)arg3 ;
-(void)dispatchToMainQueueAfterSecondsDelay:(CGFloat)arg0 identifier:(id)arg1 block:(id)arg2 ;


@end


#endif