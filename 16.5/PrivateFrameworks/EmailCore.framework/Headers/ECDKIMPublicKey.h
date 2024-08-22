// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECDKIMPUBLICKEY_H
#define ECDKIMPUBLICKEY_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface ECDKIMPublicKey : NSObject

@property (readonly, copy, nonatomic) NSString *flags; // ivar: _flags
@property (readonly, nonatomic) NSUInteger hashingAlgorithm; // ivar: _hashingAlgorithm
@property (readonly, copy, nonatomic) NSString *notes; // ivar: _notes
@property (readonly, copy, nonatomic) NSData *publicKeyData; // ivar: _publicKeyData
@property (readonly, copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly, nonatomic) NSUInteger signingAlgorithm; // ivar: _signingAlgorithm
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


-(id)description;
-(id)initWithKeyValueDictionary:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)initWithVersion:(id)arg0 hashingAlgorithm:(NSUInteger)arg1 signingAlgorithm:(NSUInteger)arg2 notes:(id)arg3 publicKeyData:(id)arg4 serviceType:(id)arg5 flags:(id)arg6 ;
-(void)_parseAcceptableHashingAlgorithmsFromDictionary:(id)arg0 ;
-(void)_parseFlagsFromDictionary:(id)arg0 ;
-(void)_parseNotesFromDictionary:(id)arg0 ;
-(void)_parsePublicKeyDataFromDictionary:(id)arg0 ;
-(void)_parseServiceTypeFromDictionary:(id)arg0 ;
-(void)_parseSigningAlgorithmFromDictionary:(id)arg0 ;
-(void)_parseVersionFromDictionary:(id)arg0 ;


@end


#endif