// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNTEMPORALBUFFERINGSTRATEGY_H
#define _CNTEMPORALBUFFERINGSTRATEGY_H

@class NSString;
@protocol _CNBufferingStrategy, CNScheduler, CNCancelable;

#import <Foundation/Foundation.h>


@interface _CNTemporalBufferingStrategy : NSObject <_CNBufferingStrategy>

 {
    CGFloat _interval;
    id<CNScheduler> *_scheduler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<CNCancelable> *sendToken; // ivar: _sendToken
@property (readonly) Class superclass;


-(id)initWithTimeInterval:(CGFloat)arg0 scheduler:(id)arg1 ;
-(void)buffer:(id)arg0 didReceiveResults:(id)arg1 forObserver:(id)arg2 ;
-(void)bufferDidSendResults:(id)arg0 ;


@end


#endif