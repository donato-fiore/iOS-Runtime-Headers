// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPCBPERIPHERALKEYADDRESSPAIR_H
#define SPCBPERIPHERALKEYADDRESSPAIR_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPCBPeripheralKeyAddressPair : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *leMACAddress; // ivar: _leMACAddress
@property (readonly, copy, nonatomic) NSData *longTermKey; // ivar: _longTermKey


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLEMACAddress:(id)arg0 longTermKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif