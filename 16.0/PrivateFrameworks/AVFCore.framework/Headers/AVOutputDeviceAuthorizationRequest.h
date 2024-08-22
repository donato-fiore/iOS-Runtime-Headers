// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTDEVICEAUTHORIZATIONREQUEST_H
#define AVOUTPUTDEVICEAUTHORIZATIONREQUEST_H

@class NSString, NSError;

#import <Foundation/Foundation.h>

#import "AVOutputDeviceAuthorizationRequestInternal.h"
#import "AVOutputDevice.h"

@interface AVOutputDeviceAuthorizationRequest : NSObject {
    AVOutputDeviceAuthorizationRequestInternal *_ivars;
}


@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *authorizationTokenType;
@property (readonly) NSError *error;
@property (readonly, nonatomic) AVOutputDevice *outputDevice;
@property (readonly) NSInteger status;


-(id)description;
-(id)impl;
-(id)initWithOutputDeviceAuthorizationRequestImpl:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)respondWithAuthorizationToken:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif