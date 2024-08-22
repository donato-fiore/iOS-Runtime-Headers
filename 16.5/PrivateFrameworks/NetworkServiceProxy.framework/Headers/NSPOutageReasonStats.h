// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPOUTAGEREASONSTATS_H
#define NSPOUTAGEREASONSTATS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "NSPProxyAnalytics.h"

@interface NSPOutageReasonStats : NSPProxyAnalytics <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *fallbackEgressProxy; // ivar: _fallbackEgressProxy
@property (retain, nonatomic) NSString *fallbackIngressProxy; // ivar: _fallbackIngressProxy
@property (retain, nonatomic) NSString *odohProxy; // ivar: _odohProxy
@property (retain, nonatomic) NSString *outageReasonSubType; // ivar: _outageReasonSubType
@property (retain, nonatomic) NSString *outageReasonType; // ivar: _outageReasonType
@property (retain, nonatomic) NSString *primaryEgressProxy; // ivar: _primaryEgressProxy
@property (retain, nonatomic) NSString *primaryIngressProxy; // ivar: _primaryIngressProxy
@property (retain, nonatomic) NSString *tierType; // ivar: _tierType
@property (retain, nonatomic) NSString *tokenProxy; // ivar: _tokenProxy


+(BOOL)supportsSecureCoding;
-(id)analyticsDict;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif