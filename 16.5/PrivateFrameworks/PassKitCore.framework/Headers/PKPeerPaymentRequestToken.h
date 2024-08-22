// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTREQUESTTOKEN_H
#define PKPEERPAYMENTREQUESTTOKEN_H

@class NSUUID, NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentRequestToken : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSUUID *deviceScoreIdentifier; // ivar: _deviceScoreIdentifier
@property (readonly, copy, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly, copy, nonatomic) NSString *requestToken; // ivar: _requestToken


+(BOOL)supportsSecureCoding;
+(id)informalRequestToken;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPeerPaymentRequestToken:(id)arg0 ;
-(BOOL)isInformalRequestToken;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestToken:(id)arg0 deviceScoreIdentifier:(id)arg1 ;
-(id)initWithRequestToken:(id)arg0 deviceScoreIdentifier:(id)arg1 expiryDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif