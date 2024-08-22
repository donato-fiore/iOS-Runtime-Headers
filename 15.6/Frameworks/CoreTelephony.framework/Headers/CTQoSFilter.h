// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTQOSFILTER_H
#define CTQOSFILTER_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTIPFilterEndpoint.h"

@interface CTQoSFilter : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) CTIPFilterEndpoint *dst; // ivar: _dst
@property (nonatomic) NSUInteger filterId; // ivar: _filterId
@property (retain, nonatomic) NSNumber *flowLabel; // ivar: _flowLabel
@property (nonatomic) NSUInteger ipFamilyProtocol; // ivar: _ipFamilyProtocol
@property (nonatomic) NSUInteger ipProtocol; // ivar: _ipProtocol
@property (readonly, nonatomic) BOOL isAnyIpFamilyProtocol;
@property (readonly, nonatomic) BOOL isAnyIpProtocol;
@property (readonly, nonatomic) BOOL isIpv4;
@property (readonly, nonatomic) BOOL isIpv6;
@property (readonly, nonatomic) BOOL isTcp;
@property (readonly, nonatomic) BOOL isUdp;
@property (nonatomic) NSUInteger precedence; // ivar: _precedence
@property (retain, nonatomic) CTIPFilterEndpoint *src; // ivar: _src
@property (retain, nonatomic) NSNumber *tos; // ivar: _tos
@property (retain, nonatomic) NSNumber *tosMask; // ivar: _tosMask


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif