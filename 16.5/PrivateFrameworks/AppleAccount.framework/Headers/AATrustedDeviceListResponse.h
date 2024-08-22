// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AATRUSTEDDEVICELISTRESPONSE_H
#define AATRUSTEDDEVICELISTRESPONSE_H

@class NSNumber, NSArray;


#import "AAResponse.h"

@interface AATrustedDeviceListResponse : AAResponse

@property (readonly, nonatomic) NSNumber *defaultNumberOfDevicesToShow; // ivar: _defaultNumberOfDevicesToShow
@property (readonly, nonatomic) NSArray *devices; // ivar: _devices


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif