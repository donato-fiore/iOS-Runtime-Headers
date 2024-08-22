// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLMETRICS_H
#define BLMETRICS_H


#import <Foundation/Foundation.h>

#import "BLServiceProxy.h"

@interface BLMetrics : NSObject

@property (retain, nonatomic) BLServiceProxy *serviceProxy; // ivar: _serviceProxy


+(id)metrics;
+(void)flushInProcessWithCompletion:(id)arg0 ;
-(id)init;
-(void)enqueueEvents:(id)arg0 ;
-(void)flush;
-(void)setAutoFlushEnabled:(BOOL)arg0 ;


@end


#endif