// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSHORTCUTSIGNINGCERTIFICATE_H
#define WFSHORTCUTSIGNINGCERTIFICATE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface WFShortcutSigningCertificate : NSObject

@property (nonatomic) *__SecCertificate certificate; // ivar: _certificate
@property (readonly, nonatomic) NSString *commonName;
@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate


-(id)generateAuthData;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 ;
-(id)initWithCertificateData:(id)arg0 ;
-(struct __SecKey *)copyPublicKey;
-(void)dealloc;


@end


#endif