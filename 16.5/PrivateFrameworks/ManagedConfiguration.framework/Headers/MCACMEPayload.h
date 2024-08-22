// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCACMEPAYLOAD_H
#define MCACMEPAYLOAD_H

@class NSString, NSArray, NSDictionary;


#import "MCCertificatePayload.h"

@interface MCACMEPayload : MCCertificatePayload {
    BOOL _isHardwareBound;
}


@property (readonly, nonatomic) BOOL attest; // ivar: _attest
@property (readonly, retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, retain, nonatomic) NSString *directoryURLString; // ivar: _directoryURLString
@property (readonly, retain, nonatomic) NSArray *extendedKeyUsage; // ivar: _extendedKeyUsage
@property (readonly, nonatomic) NSUInteger keySize; // ivar: _keySize
@property (readonly, retain, nonatomic) NSString *keyType; // ivar: _keyType
@property (readonly, retain, nonatomic) NSArray *subject; // ivar: _subject
@property (readonly, retain, nonatomic) NSDictionary *subjectAltName; // ivar: _subjectAltName
@property (readonly, nonatomic) unsigned int usageFlags; // ivar: _usageFlags


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)isHardwareBound;
-(BOOL)isIdentity;
-(BOOL)isRoot;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)subtitle1Description;
-(id)verboseDescription;


@end


#endif