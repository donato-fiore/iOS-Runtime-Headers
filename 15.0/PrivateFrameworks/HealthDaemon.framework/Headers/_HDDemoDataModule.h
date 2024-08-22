// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDDEMODATAMODULE_H
#define _HDDEMODATAMODULE_H

@class NSOperationQueue, NSDate;
@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;

#import <Foundation/Foundation.h>


@interface _HDDemoDataModule : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_source> *_timerSource;
    NSDate *_lastFireDate;
}


@property (weak, nonatomic) NSObject<_HDDemoDataModuleDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat nextFireInterval;


-(id)initWithOperationQueue:(id)arg0 ;
-(void)scheduleNextFire;
-(void)start;
-(void)stop;
-(void)timerDidFireWithInterval:(CGFloat)arg0 ;


@end


#endif