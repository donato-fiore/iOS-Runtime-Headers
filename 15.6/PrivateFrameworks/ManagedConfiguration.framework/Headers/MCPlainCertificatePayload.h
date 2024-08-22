// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCPLAINCERTIFICATEPAYLOAD_H
#define MCPLAINCERTIFICATEPAYLOAD_H

@class NSData, NSString;


#import "MCCertificatePayload.h"

@interface MCPlainCertificatePayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSData *certificateData; // ivar: _certificateData
@property (readonly, retain, nonatomic) NSString *certificateFileName; // ivar: _certificateFileName
@property (readonly, nonatomic) int dataEncoding; // ivar: _dataEncoding
@property (readonly, retain, nonatomic) NSString *password; // ivar: _password


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)isIdentity;
-(BOOL)isSigned;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)installationWarnings;
-(id)persistentResourceID;
-(id)verboseDescription;
-(struct __SecCertificate *)copyCertificate;


@end


#endif