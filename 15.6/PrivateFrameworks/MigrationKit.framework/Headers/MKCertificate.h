// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCERTIFICATE_H
#define MKCERTIFICATE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MKCertificate : NSObject

@property (retain, nonatomic) NSData *certificate; // ivar: _certificate
@property (retain, nonatomic) NSData *digest; // ivar: _digest
@property (nonatomic) *__SecIdentity identity; // ivar: _identity


-(id)dataFromPEMFormattedData:(id)arg0 ;
-(id)encodedCertificate;
-(id)init;
-(id)initWithPEM:(id)arg0 ;
-(id)initWithTrust:(struct __SecTrust *)arg0 ;
-(id)pemFormattedCertificateData:(id)arg0 ;
-(void)_appendBase64Data:(id)arg0 toString:(id)arg1 ;
-(void)dealloc;
-(void)generateCertificate;


@end


#endif