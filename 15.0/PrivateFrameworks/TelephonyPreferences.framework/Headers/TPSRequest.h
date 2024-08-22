// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSREQUEST_H
#define TPSREQUEST_H

@class NSString, CTXPCServiceSubscriptionContext;
@protocol TPSSecureObject;

#import <Foundation/Foundation.h>


@interface TPSRequest : NSObject <TPSSecureObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)unarchivedObjectClasses;
+(id)unarchivedObjectFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(id)archivedDataWithError:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif