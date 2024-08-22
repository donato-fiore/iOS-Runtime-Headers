// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKDEADMANSCREENSHOTSERVICEPROXY_H
#define CRKDEADMANSCREENSHOTSERVICEPROXY_H

@class NSTimer;
@protocol CRKScreenshotServiceInterface;

#import <Foundation/Foundation.h>


@interface CRKDeadmanScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface>



@property (nonatomic) NSUInteger countOfInFlightRequests; // ivar: _countOfInFlightRequests
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer
@property (retain, nonatomic) NSObject<CRKScreenshotServiceInterface> *underlyingProxy; // ivar: _underlyingProxy


-(id)initWithTimeout:(CGFloat)arg0 ;
-(void)dealloc;
-(void)fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)startTimer;
-(void)stopTimer;


@end


#endif