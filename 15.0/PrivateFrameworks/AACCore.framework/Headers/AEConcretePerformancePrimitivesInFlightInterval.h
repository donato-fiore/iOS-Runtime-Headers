// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AECONCRETEPERFORMANCEPRIMITIVESINFLIGHTINTERVAL_H
#define AECONCRETEPERFORMANCEPRIMITIVESINFLIGHTINTERVAL_H

@class NSString;
@protocol AEPerformancePrimitivesInFlightInterval, OS_os_log;

#import <Foundation/Foundation.h>


@interface AEConcretePerformancePrimitivesInFlightInterval : NSObject <AEPerformancePrimitivesInFlightInterval>

 {
    BOOL _isEnded;
    NSString *_name;
    NSUInteger _signpostID;
    NSObject<OS_os_log> *_log;
}




-(void)dealloc;
-(void)endInterval;


@end


#endif