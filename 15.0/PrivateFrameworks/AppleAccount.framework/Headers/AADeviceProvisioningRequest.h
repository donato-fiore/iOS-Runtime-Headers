// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AADEVICEPROVISIONINGREQUEST_H
#define AADEVICEPROVISIONINGREQUEST_H

@class NSString, NSData;


#import "AARequest.h"

@interface AADeviceProvisioningRequest : AARequest {
    NSString *_dsid;
    NSString *_url;
    NSData *_data;
}




-(id)initWithDSID:(id)arg0 URLString:(id)arg1 requestData:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif