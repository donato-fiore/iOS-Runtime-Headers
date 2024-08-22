// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMSFAIRPLAYSESSION_H
#define RMSFAIRPLAYSESSION_H


#import <Foundation/Foundation.h>


@interface RMSFairPlaySession : NSObject {
    *FPSAPContextOpaque_ _sessionToken;
    FairPlayHWInfo_ _hardwareInfo;
}


@property (readonly, nonatomic, getter=isHandshakeComplete) BOOL handshakeComplete; // ivar: _handshakeComplete


-(BOOL)_getHardwareInfo:(struct FairPlayHWInfo_ *)arg0 ;
-(id)_hexStringForData:(id)arg0 ;
-(id)handshakeData;
-(id)handshakeIterationWithData:(id)arg0 ;
-(id)headerForURL:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif