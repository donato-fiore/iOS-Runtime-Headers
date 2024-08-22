// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAAVAILABILITYRESPONSE_H
#define AAAVAILABILITYRESPONSE_H

@class NSString;


#import "AAResponse.h"

@interface AAAvailabilityResponse : AAResponse

@property (readonly, nonatomic) NSString *eta; // ivar: _eta
@property (readonly, nonatomic) NSString *feature; // ivar: _feature
@property (readonly, nonatomic) NSString *status; // ivar: _status


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif