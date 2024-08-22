// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLCACHEMETRICSCOLLECTORSERVER_H
#define PLCACHEMETRICSCOLLECTORSERVER_H


#import <Foundation/Foundation.h>


@interface PLCacheMetricsCollectorServer : NSObject {
    NSUInteger _bufferSize;
    *void _sharedRegion;
}




-(id)initWithXPCObject:(id)arg0 ;
-(struct ? )getSharedImageRequestCacheMetrics;
-(void)dealloc;


@end


#endif