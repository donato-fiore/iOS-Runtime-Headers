// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTTOKENCONFIGURATION_H
#define PKPAYMENTTOKENCONFIGURATION_H

@class NSURL, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentTokenConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger configurationType;
@property (retain, nonatomic) NSURL *merchantTokenManagementURL; // ivar: _merchantTokenManagementURL
@property (retain, nonatomic) NSURL *merchantTokenNotificationURL; // ivar: _merchantTokenNotificationURL
@property (copy, nonatomic) NSArray *multiTokenContexts; // ivar: _multiTokenContexts
@property (nonatomic) BOOL requestMerchantToken; // ivar: _requestMerchantToken


+(BOOL)supportsSecureCoding;
+(NSInteger)version;
+(id)configurationWithProtobuf:(id)arg0 ;
+(id)merchantTokenConfigurationWithManagementURL:(id)arg0 notificationURL:(id)arg1 ;
+(id)multiTokenConfigurationWithContexts:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPaymentTokenConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif