// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSPREYMESCALSESSION_H
#define OSPREYMESCALSESSION_H


#import <Foundation/Foundation.h>


@interface OspreyMescalSession : NSObject {
    *FPSAPContextOpaque_ _fairplayContext;
    FairPlayHWInfo_ _hardwareInfo;
    NSUInteger _state;
}




-(BOOL)completeWithHandshakeResponse:(id)arg0 error:(*id)arg1 ;
-(id)_exchangeData:(id)arg0 error:(*id)arg1 ;
-(id)handshakeRequestWithCertificateData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)signData:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif