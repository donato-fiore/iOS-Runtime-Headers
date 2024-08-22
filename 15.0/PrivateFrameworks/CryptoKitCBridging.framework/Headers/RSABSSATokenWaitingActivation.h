// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RSABSSATOKENWAITINGACTIVATION_H
#define RSABSSATOKENWAITINGACTIVATION_H

@class NSData;

#import <Foundation/Foundation.h>

#import "RSABSSATokenBlinder.h"

@interface RSABSSATokenWaitingActivation : NSObject {
    *ccrsabssa_ciphersuite _ciphersuite;
}


@property (readonly, retain, nonatomic) NSData *blindedMessage; // ivar: _blindedMessage
@property (readonly, retain, nonatomic) NSData *blindingInverse; // ivar: _blindingInverse
@property (readonly, retain, nonatomic) RSABSSATokenBlinder *tokenBlinder; // ivar: _tokenBlinder
@property (readonly, retain, nonatomic) NSData *tokenContent; // ivar: _tokenContent


-(id)activateTokenWithServerResponse:(id)arg0 error:(*id)arg1 ;
-(id)initWithBlindingInverse:(id)arg0 blindedMessage:(id)arg1 tokenContent:(id)arg2 tokenBlinder:(id)arg3 ciphersuite:(struct ccrsabssa_ciphersuite *)arg4 ;


@end


#endif