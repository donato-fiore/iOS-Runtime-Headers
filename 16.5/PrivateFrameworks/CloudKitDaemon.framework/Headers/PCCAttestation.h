// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCCATTESTATION_H
#define PCCATTESTATION_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface PCCAttestation : NSObject

@property (retain, nonatomic) NSData *applicationEnclaveQuote; // ivar: _applicationEnclaveQuote
@property (retain, nonatomic) NSString *certificate; // ivar: _certificate
@property (retain, nonatomic) NSData *quotingEnclaveQuote; // ivar: _quotingEnclaveQuote
@property (retain, nonatomic) NSData *routingToken; // ivar: _routingToken


-(id)initWithCertificate:(id)arg0 applicationEnclaveQuote:(id)arg1 quotingEnclaveQuote:(id)arg2 routingToken:(id)arg3 ;


@end


#endif