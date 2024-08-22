// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPAKE2PROVER_H
#define SPAKE2PROVER_H

@protocol SPAKE2Protocol;

#import <Foundation/Foundation.h>

#import "SPAKE2Common.h"

@interface SPAKE2Prover : NSObject <SPAKE2Protocol>



@property (retain) SPAKE2Common *common; // ivar: _common


-(BOOL)isVerified;
-(BOOL)processMsg1:(id)arg0 error:(*id)arg1 ;
-(BOOL)processMsg2:(id)arg0 error:(*id)arg1 ;
-(id)decryptMessage:(id)arg0 error:(*id)arg1 ;
-(id)encryptMessage:(id)arg0 error:(*id)arg1 ;
-(id)getKey;
-(id)getMsg1WithError:(*id)arg0 ;
-(id)getMsg2WithError:(*id)arg0 ;
-(id)initWithSalt:(id)arg0 code:(id)arg1 error:(*id)arg2 ;


@end


#endif