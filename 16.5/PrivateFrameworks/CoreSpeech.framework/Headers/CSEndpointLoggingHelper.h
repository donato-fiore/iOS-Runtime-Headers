// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSENDPOINTLOGGINGHELPER_H
#define CSENDPOINTLOGGINGHELPER_H


#import <Foundation/Foundation.h>


@interface CSEndpointLoggingHelper : NSObject



+(id)getMHClientEventByMhUUID:(id)arg0 ;
+(id)getMHStatisticDistributionInfoFromDictionary:(id)arg0 ;
+(id)getMHStatisticDistributionInfoFromDictionary:(id)arg0 withScaleFactor:(CGFloat)arg1 ;
+(void)reportMHEndpointerAccessibleContextEventWithThresholdType:(id)arg0 MhId:(id)arg1 ;
+(void)reportServerEndpointWithMhId:(id)arg0 ;


@end


#endif