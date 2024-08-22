// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPERFUTILS_H
#define MTPERFUTILS_H



#import "MTUtils.h"

@interface MTPerfUtils : MTUtils



-(id)DNSServersIPAddresses;
-(id)loadUrlMeasurementWithURLSessionTaskMetrics:(id)arg0 ;
-(id)loadUrlMeasurementWithURLSessionTaskTransactionMetrics:(id)arg0 ;


@end


#endif