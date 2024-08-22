// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPRPINDATA_H
#define SPRPINDATA_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPRPINData : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *casd; // ivar: _casd
@property (readonly, nonatomic) BOOL isPinBypass; // ivar: _isPinBypass
@property (readonly, copy, nonatomic) NSData *pinAppletAttestationData; // ivar: _pinAppletAttestationData
@property (readonly, copy, nonatomic) NSData *pinBlock; // ivar: _pinBlock
@property (readonly, copy, nonatomic) NSData *pinKEKHash; // ivar: _pinKEKHash


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPinBlock:(id)arg0 casd:(id)arg1 pinAppletAttestationData:(id)arg2 pinKEKHash:(id)arg3 ;
-(id)initWithPinBlock:(id)arg0 casd:(id)arg1 pinAppletAttestationData:(id)arg2 pinKEKHash:(id)arg3 isPinBypass:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif