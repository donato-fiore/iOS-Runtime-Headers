// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCSCEPPAYLOAD_H
#define MCSCEPPAYLOAD_H

@class NSArray, NSData, NSString, NSDictionary;


#import "MCCertificatePayload.h"

@interface MCSCEPPayload : MCCertificatePayload

@property (readonly, retain, nonatomic) NSArray *CACaps; // ivar: _CACaps
@property (readonly, retain, nonatomic) NSData *CAFingerprint; // ivar: _CAFingerprint
@property (readonly, retain, nonatomic) NSString *CAInstanceName; // ivar: _CAInstanceName
@property (readonly, retain, nonatomic) NSString *URLString; // ivar: _URLString
@property (readonly, retain, nonatomic) NSString *challenge; // ivar: _challenge
@property (readonly, nonatomic) NSUInteger keySize; // ivar: _keySize
@property (readonly, nonatomic) NSUInteger retries; // ivar: _retries
@property (readonly, nonatomic) NSUInteger retryDelay; // ivar: _retryDelay
@property (readonly, retain, nonatomic) NSArray *subject; // ivar: _subject
@property (readonly, retain, nonatomic) NSDictionary *subjectAltName; // ivar: _subjectAltName
@property (readonly, nonatomic) int usageFlags; // ivar: _usageFlags


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(BOOL)isIdentity;
-(BOOL)isRoot;
-(id)initWithDictionary:(id)arg0 profile:(id)arg1 outError:(*id)arg2 ;
-(id)payloadDescriptionKeyValueSections;
-(id)stubDictionary;
-(id)verboseDescription;


@end


#endif