// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCAESGCMDUPLEXSESSION_H
#define KCAESGCMDUPLEXSESSION_H

@class NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KCAESGCMDuplexSession : NSObject <NSSecureCoding>



@property BOOL asSender; // ivar: _asSender
@property NSUInteger context; // ivar: _context
@property NSUInteger epoch; // ivar: _epoch
@property (retain) NSString *pairingUUID; // ivar: _pairingUUID
@property NSUInteger piggybackingVersion; // ivar: _piggybackingVersion
@property *? receive; // ivar: _receive
@property (retain) NSData *secret; // ivar: _secret
@property *? send; // ivar: _send


+(BOOL)supportsSecureCoding;
+(id)sessionAsReceiver:(id)arg0 context:(NSUInteger)arg1 ;
+(id)sessionAsSender:(id)arg0 context:(NSUInteger)arg1 ;
-(BOOL)GCM:(struct ccmode_gcm *)arg0 context:(struct ? *)arg1 iv:(id)arg2 size:(NSUInteger)arg3 data:(char *)arg4 processed:(char *)arg5 tag:(char *)arg6 error:(*id)arg7 ;
-(NSUInteger)encryptCapsuleSize:(id)arg0 IV:(id)arg1 ;
-(id)decryptAndVerify:(id)arg0 error:(*id)arg1 ;
-(id)encrypt:(id)arg0 error:(*id)arg1 ;
-(id)initAsReceiver:(id)arg0 context:(NSUInteger)arg1 ;
-(id)initAsSender:(id)arg0 context:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSecret:(id)arg0 context:(NSUInteger)arg1 as:(BOOL)arg2 ;
-(id)initWithSecret:(id)arg0 context:(NSUInteger)arg1 as:(BOOL)arg2 pairingUUID:(id)arg3 piggybackingVersion:(NSUInteger)arg4 epoch:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalize;


@end


#endif