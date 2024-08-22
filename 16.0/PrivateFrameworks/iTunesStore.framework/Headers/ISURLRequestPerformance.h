// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISURLREQUESTPERFORMANCE_H
#define ISURLREQUESTPERFORMANCE_H

@class NSURLResponse;

#import <Foundation/Foundation.h>


@interface ISURLRequestPerformance : NSObject {
    CGFloat _finishTime;
    CGFloat _receivedResponseTime;
    CGFloat _renderBeginTime;
    CGFloat _renderEndTime;
}


@property (copy, nonatomic) NSURLResponse *URLResponse; // ivar: _urlResponse
@property (readonly, nonatomic) CGFloat finishInterval;
@property (readonly, nonatomic) CGFloat receivedResponseInterval;
@property (readonly, nonatomic) CGFloat renderBeginInterval;
@property (readonly, nonatomic) CGFloat renderEndInterval;
@property (nonatomic) CGFloat startTime; // ivar: _startTime


-(void)dealloc;
-(void)setFinishTime:(CGFloat)arg0 ;
-(void)setReceivedResponseTime:(CGFloat)arg0 ;
-(void)setRenderBeginTime:(CGFloat)arg0 ;
-(void)setRenderFinishTime:(CGFloat)arg0 ;


@end


#endif