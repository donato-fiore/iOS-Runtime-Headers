// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYCONNECTIONPREFERENCES_H
#define OSPREYCONNECTIONPREFERENCES_H

@class NSData, NSString, NSDate, NSNumber;

#import <Foundation/Foundation.h>

#import "OspreyKeychain.h"

@interface OspreyConnectionPreferences : NSObject {
    OspreyKeychain *_keychain;
    BOOL _certificateDataFetched;
    NSData *_certificateData;
    NSData *_deviceAttestationData;
}


@property (retain, nonatomic) NSData *certificateData;
@property (copy, nonatomic) NSString *connectionHost; // ivar: _connectionHost
@property (copy, nonatomic) NSDate *deviceAttestionExpireOn; // ivar: _deviceAttestionExpireOn
@property (copy, nonatomic) NSNumber *deviceAttestionVersion; // ivar: _deviceAttestionVersion
@property (copy, nonatomic) NSNumber *deviceAuthenticationVersion; // ivar: _deviceAuthenticationVersion
@property (readonly, nonatomic) BOOL isDeviceAttestionExpired;


-(BOOL)setDeviceAttestationData:(id)arg0 withExpiration:(id)arg1 ;
-(id)_deviceAttestationDataKey;
-(id)deviceAttestationData;
-(id)dictionaryRepresentation;
-(id)initWithConnectionHost:(id)arg0 keychain:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 keychain:(id)arg1 ;
-(void)deleteAll;
-(void)deleteCertificateData;
-(void)deleteDeviceAttestationData;
-(void)resetCachedDeviceAttestation;


@end


#endif