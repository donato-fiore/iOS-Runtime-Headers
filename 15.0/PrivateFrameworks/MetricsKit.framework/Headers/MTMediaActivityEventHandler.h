// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMEDIAACTIVITYEVENTHANDLER_H
#define MTMEDIAACTIVITYEVENTHANDLER_H

@protocol MTMediaActivityEventHandlerDelegate;


#import "MTEventHandler.h"

@interface MTMediaActivityEventHandler : MTEventHandler

@property (weak, nonatomic) NSObject<MTMediaActivityEventHandlerDelegate> *delegate;


-(id)eventVersion:(id)arg0 ;
-(id)knownFields;
-(id)metricsDataForStartActionWithPosition:(NSUInteger)arg0 overallPosition:(NSUInteger)arg1 type:(id)arg2 reason:(id)arg3 eventData:(id)arg4 ;
-(id)metricsDataForStopActionWithPosition:(NSUInteger)arg0 overallPosition:(NSUInteger)arg1 type:(id)arg2 reason:(id)arg3 startMetricsData:(id)arg4 eventData:(id)arg5 ;
-(void)didCreateMetricsData:(id)arg0 ;


@end


#endif