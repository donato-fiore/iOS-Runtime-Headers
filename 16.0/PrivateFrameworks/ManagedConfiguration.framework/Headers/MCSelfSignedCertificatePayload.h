// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCSELFSIGNEDCERTIFICATEPAYLOAD_H
#define MCSELFSIGNEDCERTIFICATEPAYLOAD_H

@class NSArray, NSString;


#import "MCCertificatePayload.h"

@interface MCSelfSignedCertificatePayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSArray *extendedKeyUsage; // ivar: _extendedKeyUsage
@property (readonly, nonatomic) BOOL isHardwareBound; // ivar: _isHardwareBound
@property (readonly, nonatomic) NSUInteger keySize; // ivar: _keySize
@property (readonly, retain, nonatomic) NSString *keyType; // ivar: _keyType
@property (readonly, nonatomic) unsigned int keyUsage; // ivar: _keyUsage
@property (readonly, nonatomic) NSUInteger lifetime; // ivar: _lifetime


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)isIdentity;
-(BOOL)isRoot;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)persistentResourceID;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)validateExtendedKeyUsage:(id)arg0 ;
-(id)verboseDescription;


@end


#endif