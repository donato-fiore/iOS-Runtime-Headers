// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AADEVICELISTRESPONSE_H
#define AADEVICELISTRESPONSE_H

@class NSArray;


#import "AAResponse.h"

@interface AADeviceListResponse : AAResponse

@property (readonly, nonatomic) NSArray *devices; // ivar: _devices


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif