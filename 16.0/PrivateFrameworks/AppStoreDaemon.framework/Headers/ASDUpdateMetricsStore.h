// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDUPDATEMETRICSSTORE_H
#define ASDUPDATEMETRICSSTORE_H

@class NSLock, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface ASDUpdateMetricsStore : NSObject {
    NSLock *_lock;
}


@property (readonly, nonatomic) CGFloat averagePollTime; // ivar: _averagePollTime
@property (readonly, nonatomic) NSDate *lastAutoPollDate; // ivar: _lastAutoPollDate
@property (readonly, nonatomic) NSArray *metrics; // ivar: _metrics


-(id)init;
-(void)addPoll:(id)arg0 ;
-(void)synchronize;


@end


#endif