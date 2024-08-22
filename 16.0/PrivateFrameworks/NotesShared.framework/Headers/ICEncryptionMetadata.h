// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICENCRYPTIONMETADATA_H
#define ICENCRYPTIONMETADATA_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface ICEncryptionMetadata : NSObject

@property (retain, nonatomic) NSString *accountKeyIdentifier; // ivar: _accountKeyIdentifier
@property (nonatomic) NSUInteger cipherVersion; // ivar: _cipherVersion
@property (retain, nonatomic) NSData *data; // ivar: _data


-(id)initWithCipherVersion:(NSUInteger)arg0 accountKeyIdentifier:(id)arg1 ;
-(id)initWithData:(id)arg0 ;


@end


#endif