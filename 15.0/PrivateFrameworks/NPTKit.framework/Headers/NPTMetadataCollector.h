// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPTMETADATACOLLECTOR_H
#define NPTMETADATACOLLECTOR_H


#import <Foundation/Foundation.h>


@interface NPTMetadataCollector : NSObject



+(id)fetch;
+(id)fetchCellularData;
+(id)fetchDeviceData;
+(id)fetchWRMMetrics;


@end


#endif