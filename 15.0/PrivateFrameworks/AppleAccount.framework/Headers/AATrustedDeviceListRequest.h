// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AATRUSTEDDEVICELISTREQUEST_H
#define AATRUSTEDDEVICELISTREQUEST_H

@class NSString;


#import "AARequest.h"
#import "AAGrandSlamSigner.h"

@interface AATrustedDeviceListRequest : AARequest {
    AAGrandSlamSigner *_grandSlamSigner;
}


@property (copy, nonatomic) NSString *heartbeatToken; // ivar: _heartbeatToken


+(Class)responseClass;
-(id)initWithURLString:(id)arg0 accountStore:(id)arg1 grandSlamAccount:(id)arg2 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif