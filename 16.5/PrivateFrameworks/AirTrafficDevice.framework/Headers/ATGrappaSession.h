// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATGRAPPASESSION_H
#define ATGRAPPASESSION_H

@class NSData;

#import <Foundation/Foundation.h>


@interface ATGrappaSession : NSObject {
    unsigned int _sessionId;
    NSUInteger _sessionType;
    NSData *_sessionResponseData;
    NSData *_sessionRequestData;
}




-(id)_deviceCreateSignature:(*id)arg0 forData:(id)arg1 ;
-(id)_deviceVerifySignature:(id)arg0 forData:(id)arg1 ;
-(id)_hostCreateSignature:(*id)arg0 forData:(id)arg1 ;
-(id)_hostVerifySignature:(id)arg0 forData:(id)arg1 ;
-(id)beginHostSessionWithDeviceResponseData:(id)arg0 ;
-(id)createSignature:(*id)arg0 forData:(id)arg1 ;
-(id)deviceInfo;
-(id)establishDeviceSessionWithRequestData:(id)arg0 responseData:(*id)arg1 ;
-(id)establishHostSessionWithDeviceInfo:(id)arg0 clientRequestData:(*id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)verifySignature:(id)arg0 forData:(id)arg1 ;


@end


#endif