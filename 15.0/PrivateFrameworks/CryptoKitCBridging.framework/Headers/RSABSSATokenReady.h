// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RSABSSATOKENREADY_H
#define RSABSSATOKENREADY_H

@class NSData;

#import <Foundation/Foundation.h>


@interface RSABSSATokenReady : NSObject

@property (readonly, retain, nonatomic) NSData *keyId; // ivar: _keyId
@property (readonly, retain, nonatomic) NSData *signature; // ivar: _signature
@property (readonly, retain, nonatomic) NSData *tokenContent; // ivar: _tokenContent


-(id)initWithTokenContent:(id)arg0 tokenSignature:(id)arg1 keyId:(id)arg2 ;


@end


#endif