// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMESCALACCOUNTPRIMESESSION_H
#define AMSMESCALACCOUNTPRIMESESSION_H

@protocol AMSBagProtocol;

#import <Foundation/Foundation.h>

#import "AMSMescalSession.h"

@interface AMSMescalAccountPrimeSession : NSObject

@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) AMSMescalSession *session; // ivar: _session


-(id)initWithBag:(id)arg0 ;
-(id)primeSignatureForData:(id)arg0 ;
-(id)signData:(id)arg0 ;
-(id)verifyPrimeSignature:(id)arg0 ;


@end


#endif