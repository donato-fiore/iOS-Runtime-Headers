// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTOKENKEYCHAINCERTIFICATE_H
#define TKTOKENKEYCHAINCERTIFICATE_H

@class NSNumber, NSData;


#import "TKTokenKeychainItem.h"

@interface TKTokenKeychainCertificate : TKTokenKeychainItem

@property (retain) NSNumber *certificateEncoding; // ivar: _certificateEncoding
@property (retain) NSNumber *certificateType; // ivar: _certificateType
@property (readonly, copy) NSData *data; // ivar: _data
@property (retain) NSData *issuer; // ivar: _issuer
@property (retain) NSData *publicKeyHash; // ivar: _publicKeyHash
@property (retain) NSData *serialNumber; // ivar: _serialNumber
@property (retain) NSData *subject; // ivar: _subject
@property (retain) NSData *subjectKeyID; // ivar: _subjectKeyID


-(id)encodedObjectID;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 objectID:(id)arg1 ;
-(id)initWithItemInfo:(id)arg0 ;
-(id)keychainAttributes;


@end


#endif