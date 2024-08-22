// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVSUBSCRIPTIONENTITLEMENTS_H
#define SSVSUBSCRIPTIONENTITLEMENTS_H

@class NSString, NSNumber, NSDate, NSArray;

#import <Foundation/Foundation.h>


@interface SSVSubscriptionEntitlements : NSObject

@property (copy, nonatomic) NSString *accountISO3Country; // ivar: _accountISO3Country
@property (copy, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSNumber *accountStoreFrontIdentifier; // ivar: _accountStoreFrontIdentifier
@property (copy, nonatomic) NSDate *cachedTimestamp; // ivar: _cachedTimestamp
@property (copy, nonatomic) NSArray *entitledSubscriptions; // ivar: _entitledSubscriptions


+(id)_parseJSONDictionary:(id)arg0 ;
+(id)_valueForKey:(id)arg0 fromDictionary:(id)arg1 ofType:(Class)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif