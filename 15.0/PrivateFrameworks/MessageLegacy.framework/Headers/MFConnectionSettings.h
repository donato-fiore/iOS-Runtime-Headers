// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFCONNECTIONSETTINGS_H
#define MFCONNECTIONSETTINGS_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MFConnectionSettings : NSObject <NSCopying>

 {
    *__CFString _connectionServiceType;
}


@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL allowsTrustPrompt; // ivar: _allowsTrustPrompt
@property (copy, nonatomic) NSString *certUIService; // ivar: _certUIService
@property (copy, nonatomic) NSArray *clientCertificates; // ivar: _clientCertificates
@property (copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (copy, nonatomic) NSString *networkAccountIdentifier; // ivar: _networkAccountIdentifier
@property (nonatomic) unsigned int portNumber; // ivar: _portNumber
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (nonatomic) BOOL tryDirectSSL; // ivar: _tryDirectSSLConnection
@property (nonatomic) BOOL usesOpportunisticSockets; // ivar: _usesOpportunisticSockets
@property (nonatomic) BOOL usesSSL; // ivar: _usesSSL


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(struct __CFString *)connectionServiceType;
-(void)dealloc;
-(void)setConnectionServiceType:(struct __CFString *)arg0 ;


@end


#endif