// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVSUBSCRIPTIONRESPONSE_H
#define SSVSUBSCRIPTIONRESPONSE_H

@class NSMutableDictionary, NSString;
@protocol SSXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SSVSubscriptionResponse : NSObject <SSXPCCoding, NSCopying>

 {
    NSMutableDictionary *_accountUniqueIdentifierToSubscriptionStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;
-(id)subscriptionStatusForAccountUniqueIdentifier:(NSUInteger)arg0 ;
-(void)setSubscriptionStatus:(id)arg0 forAccountUniqueIdentifier:(NSUInteger)arg1 ;


@end


#endif