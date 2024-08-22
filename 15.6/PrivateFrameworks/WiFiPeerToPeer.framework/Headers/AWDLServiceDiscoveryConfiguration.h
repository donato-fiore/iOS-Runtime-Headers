// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDLSERVICEDISCOVERYCONFIGURATION_H
#define AWDLSERVICEDISCOVERYCONFIGURATION_H

@class NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AWDLServiceDiscoveryConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) BOOL browse; // ivar: _browse
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) NSData *serviceKey; // ivar: _serviceKey
@property (readonly, nonatomic) NSData *serviceValue; // ivar: _serviceValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceKey:(id)arg0 serviceValue:(id)arg1 browse:(BOOL)arg2 ;
-(id)initWithServiceKeyBytes:(char *)arg0 serviceKeyLength:(unsigned short)arg1 ;
-(id)initWithServiceKeyBytes:(char *)arg0 serviceKeyLength:(unsigned short)arg1 serviceValueBytes:(char *)arg2 serviceValueLength:(unsigned short)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif