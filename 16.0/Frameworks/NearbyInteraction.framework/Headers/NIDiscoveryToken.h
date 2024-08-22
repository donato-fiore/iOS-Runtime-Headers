// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NIDISCOVERYTOKEN_H
#define NIDISCOVERYTOKEN_H

@class NSNumber, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding>

 {
    NSNumber *_shortDeviceAddress;
}


@property (copy) NSData *rawToken; // ivar: _rawToken


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionInternal;
-(id)initWithBytes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceAddress:(unsigned short)arg0 ;
-(id)shortDeviceAddress;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif