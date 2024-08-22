// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMUSICSUBSCRIPTIONSTATUSRESPONSE_H
#define ICMUSICSUBSCRIPTIONSTATUSRESPONSE_H

@class NSDate, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICMusicSubscriptionStatus.h"

@interface ICMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (nonatomic, getter=isFinalResponse) BOOL finalResponse; // ivar: _finalResponse
@property (nonatomic) BOOL needsReload; // ivar: _needsReload
@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property (copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus; // ivar: _subscriptionStatus


+(BOOL)isValidSubscriptionStatusPropertyListRepresentation:(id)arg0 error:(*id)arg1 ;
+(BOOL)isValidSubscriptionStatusResponseDictionary:(id)arg0 error:(*id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 expirationDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif