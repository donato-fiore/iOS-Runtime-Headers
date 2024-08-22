// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSUBSCRIPTION_H
#define VSSUBSCRIPTION_H

@class NSString, NSDate, NSArray, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VSSubscriptionSource.h"

@interface VSSubscription : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger accessLevel; // ivar: _accessLevel
@property (copy, nonatomic) NSString *billingIdentifier; // ivar: _billingIdentifier
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSString *derivedSubscriptionInfo; // ivar: _derivedSubscriptionInfo
@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (copy, nonatomic) NSString *providedSubscriptionInfo; // ivar: _providedSubscriptionInfo
@property (copy, nonatomic) VSSubscriptionSource *source; // ivar: _source
@property (copy, nonatomic) NSString *subscriberIdentifierHash; // ivar: _subscriberIdentifierHash
@property (copy, nonatomic) NSString *subscriptionInfo;
@property (copy, nonatomic) NSArray *tierIdentifiers; // ivar: _tierIdentifiers
@property (readonly, copy, nonatomic) NSData *versionHash;


+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSubscriptionInfo;
+(id)keyPathsForValuesAffectingVersionHash;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_updateHash:(id)arg0 withValueForProperty:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setNilValueForKey:(id)arg0 ;


@end


#endif