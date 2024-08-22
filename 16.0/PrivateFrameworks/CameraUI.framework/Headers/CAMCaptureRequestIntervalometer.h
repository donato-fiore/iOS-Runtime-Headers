// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCAPTUREREQUESTINTERVALOMETER_H
#define CAMCAPTUREREQUESTINTERVALOMETER_H

@protocol CAMCaptureRequestIntervalometerDelegate;

#import <Foundation/Foundation.h>

#import "CAMPreciseTimer.h"
#import "CAMCaptureRequest.h"

@interface CAMCaptureRequestIntervalometer : NSObject

@property (readonly, nonatomic) CAMPreciseTimer *_timer; // ivar: __timer
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, weak, nonatomic) NSObject<CAMCaptureRequestIntervalometerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (readonly, nonatomic) NSInteger maximumCount; // ivar: _maximumCount
@property (copy, nonatomic) CAMCaptureRequest *prototypeRequest; // ivar: _prototypeRequest
@property (nonatomic) NSInteger remaining; // ivar: _remaining


-(id)init;
-(id)initWithDelegate:(id)arg0 interval:(CGFloat)arg1 delay:(CGFloat)arg2 maximumCount:(NSInteger)arg3 ;
-(void)_generateRequestForDelegate;
-(void)manuallyGenerateRequest;
-(void)startGeneratingRequests;
-(void)stopGeneratingRequests;


@end


#endif