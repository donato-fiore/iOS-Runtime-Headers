// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTQUOTEDYNAMICFRAUDCONTENT_H
#define PKPEERPAYMENTQUOTEDYNAMICFRAUDCONTENT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentQuoteDynamicFraudContent : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *defaultButtonTitle; // ivar: _defaultButtonTitle
@property (readonly, copy, nonatomic) NSString *header; // ivar: _header
@property (readonly, copy, nonatomic) NSString *message; // ivar: _message
@property (readonly, copy, nonatomic) NSString *otherButtonTitle; // ivar: _otherButtonTitle


+(BOOL)supportsSecureCoding;
+(id)dynamicFraudContentWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif