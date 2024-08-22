// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXPHOENIXDATALOGGER_H
#define AXPHOENIXDATALOGGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXPhoenixDataLogger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)logClassifierData:(id)arg0 isDoubleTap:(BOOL)arg1 startTime:(CGFloat)arg2 endTime:(CGFloat)arg3 completion:(id)arg4 ;


@end


#endif