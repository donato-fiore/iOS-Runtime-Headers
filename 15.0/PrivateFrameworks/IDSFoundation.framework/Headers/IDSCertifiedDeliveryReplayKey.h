// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCERTIFIEDDELIVERYREPLAYKEY_H
#define IDSCERTIFIEDDELIVERYREPLAYKEY_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSCertifiedDeliveryReplayKey : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSData *payloadHash; // ivar: _payloadHash


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToReplayKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHash:(id)arg0 ;
-(id)initWithPayload:(id)arg0 legacyIdentity:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif