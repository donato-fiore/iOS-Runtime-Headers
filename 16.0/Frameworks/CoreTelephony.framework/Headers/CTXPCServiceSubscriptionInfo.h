// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTXPCSERVICESUBSCRIPTIONINFO_H
#define CTXPCSERVICESUBSCRIPTIONINFO_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTXPCServiceSubscriptionInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *subscriptions; // ivar: _subscriptions
@property (retain, nonatomic) NSArray *subscriptionsInUse; // ivar: _subscriptionsInUse
@property (retain, nonatomic) NSArray *subscriptionsValid; // ivar: _subscriptionsValid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif