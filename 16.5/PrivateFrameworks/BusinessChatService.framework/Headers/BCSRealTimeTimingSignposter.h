// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSREALTIMETIMINGSIGNPOSTER_H
#define BCSREALTIMETIMINGSIGNPOSTER_H

@class NSString;
@protocol BCSRealTimeTimingMeasurementHandler;


#import "BCSRealTimeShardSignposter.h"

@interface BCSRealTimeTimingSignposter : BCSRealTimeShardSignposter <BCSRealTimeTimingMeasurementHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)timingMeasurementDidBegin:(id)arg0 ;
-(void)timingMeasurementDidEnd:(id)arg0 ;


@end


#endif