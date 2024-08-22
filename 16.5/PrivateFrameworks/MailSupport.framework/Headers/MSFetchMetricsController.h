// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSFETCHMETRICSCONTROLLER_H
#define MSFETCHMETRICSCONTROLLER_H

@protocol MSFetchMetricsControllerDataSource;

#import <Foundation/Foundation.h>


@interface MSFetchMetricsController : NSObject {
    CGFloat _startTime;
}


@property (readonly, weak, nonatomic) NSObject<MSFetchMetricsControllerDataSource> *dataSource; // ivar: _dataSource


-(id)initWithDataSource:(id)arg0 ;
-(void)start;
-(void)stopAndSubmitWithOptions:(NSUInteger)arg0 fetchSize:(NSUInteger)arg1 ;


@end


#endif