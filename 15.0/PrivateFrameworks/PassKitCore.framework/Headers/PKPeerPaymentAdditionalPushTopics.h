// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPEERPAYMENTADDITIONALPUSHTOPICS_H
#define PKPEERPAYMENTADDITIONALPUSHTOPICS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentAdditionalPushTopics : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *associatedAccounts; // ivar: _associatedAccounts
@property (copy, nonatomic) NSString *preferences; // ivar: _preferences


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif