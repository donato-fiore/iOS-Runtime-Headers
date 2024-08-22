// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRNETSERVICETRANSPORT_H
#define MRNETSERVICETRANSPORT_H

@class NSNetService;


#import "MRExternalDeviceTransport.h"
#import "MRDeviceInfo.h"

@interface MRNetServiceTransport : MRExternalDeviceTransport {
    MRDeviceInfo *_deviceInfo;
    BOOL _requiresCustomPairing;
}


@property (retain, nonatomic) NSNetService *netService; // ivar: _netService
@property (nonatomic) BOOL requiresCustomPairing;


+(id)createDeviceInfoFromNetService:(id)arg0 ;
+(id)createDeviceInfoFromTXTRecord:(id)arg0 ;
-(BOOL)getInputStream:(*id)arg0 outputStream:(*id)arg1 userInfo:(id)arg2 ;
-(BOOL)shouldUseSystemAuthenticationPrompt;
-(NSInteger)connectionType;
-(NSInteger)port;
-(id)createConnectionWithUserInfo:(id)arg0 ;
-(id)description;
-(id)deviceInfo;
-(id)error;
-(id)hostname;
-(id)initWithNetService:(id)arg0 ;
-(id)name;
-(void)dealloc;
-(void)resetWithError:(id)arg0 ;
-(void)setShouldUseSystemAuthenticationPrompt:(BOOL)arg0 ;
-(void)updateDeviceInfoWithTXTRecord:(id)arg0 ;


@end


#endif