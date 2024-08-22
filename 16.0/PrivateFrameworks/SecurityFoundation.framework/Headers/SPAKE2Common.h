// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPAKE2COMMON_H
#define SPAKE2COMMON_H

@class NSString, NSData;
@protocol SPAKE2Protocol;

#import <Foundation/Foundation.h>

#import "_SFAESKey.h"

@interface SPAKE2Common : NSObject <SPAKE2Protocol>



@property (retain) NSString *code; // ivar: _code
@property *ccspake_cp cp; // ivar: _cp
@property *ccspake_mac mac; // ivar: _mac
@property NSUInteger point_size; // ivar: _point_size
@property *ccrng_state rng; // ivar: _rng
@property (retain) NSData *salt; // ivar: _salt
@property (retain) _SFAESKey *session_key; // ivar: _session_key
@property *ccspake_ctx spake_ctx; // ivar: _spake_ctx
@property BOOL verified; // ivar: _verified
@property (retain) NSData *w0; // ivar: _w0
@property (retain) NSData *w1; // ivar: _w1
@property NSUInteger w_size; // ivar: _w_size


-(BOOL)generateStateWithError:(*id)arg0 ;
-(BOOL)isVerified;
-(BOOL)processMsg1:(id)arg0 error:(*id)arg1 ;
-(BOOL)processMsg2:(id)arg0 error:(*id)arg1 ;
-(BOOL)setupProver:(*id)arg0 ;
-(BOOL)setupVerifier:(*id)arg0 ;
-(id)decryptMessage:(id)arg0 error:(*id)arg1 ;
-(id)encryptMessage:(id)arg0 error:(*id)arg1 ;
-(id)getKey;
-(id)getMsg1WithError:(*id)arg0 ;
-(id)getMsg2WithError:(*id)arg0 ;
-(id)initWithSalt:(id)arg0 code:(id)arg1 ;
-(void)dealloc;


@end


#endif