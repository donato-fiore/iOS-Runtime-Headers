// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRCRYPTOPAIRINGIDENTITY_H
#define MRCRYPTOPAIRINGIDENTITY_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface MRCryptoPairingIdentity : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *privateKey; // ivar: _privateKey
@property (readonly, nonatomic) NSData *publicKey; // ivar: _publicKey


-(id)init;
-(id)initWithIdentifier:(id)arg0 publicKey:(id)arg1 privateKey:(id)arg2 ;


@end


#endif