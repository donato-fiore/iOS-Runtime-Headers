// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CLRANGINGPEER_H
#define _CLRANGINGPEER_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _CLRangingPeer : NSObject <NSCopying, NSSecureCoding>

 {
    id *_internal;
}


@property (readonly, nonatomic) NSUInteger macAddress;
@property (readonly, copy, nonatomic) NSData *secureRangingKeyID;


+(BOOL)supportsSecureCoding;
+(NSUInteger)uintMacAddressFromString:(id)arg0 ;
+(id)hexStringMacAddressFromUInt:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPeer:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getMacAddressAsString;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMacAddressAsData:(id)arg0 secureRangingKeyID:(id)arg1 ;
-(id)initWithMacAddressAsString:(id)arg0 secureRangingKeyID:(id)arg1 ;
-(id)initWithMacAddressAsUInt:(NSUInteger)arg0 secureRangingKeyID:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif