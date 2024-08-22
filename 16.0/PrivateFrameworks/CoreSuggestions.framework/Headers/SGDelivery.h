// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGDELIVERY_H
#define SGDELIVERY_H

@class NSString, NSURL;
@protocol NSSecureCoding;


#import "SGObject.h"

@interface SGDelivery : SGObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (readonly, nonatomic) NSURL *parentURL; // ivar: _parentURL
@property (readonly, nonatomic) NSUInteger provider; // ivar: _provider
@property (readonly, nonatomic) NSString *trackingNumber; // ivar: _trackingNumber


+(BOOL)supportsSecureCoding;
+(NSUInteger)providerForString:(id)arg0 ;
+(id)stringForProvider:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordId:(id)arg0 origin:(id)arg1 parentURL:(id)arg2 provider:(NSUInteger)arg3 trackingNumber:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif