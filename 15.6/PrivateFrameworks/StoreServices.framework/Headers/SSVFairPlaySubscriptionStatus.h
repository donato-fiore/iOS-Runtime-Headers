// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVFAIRPLAYSUBSCRIPTIONSTATUS_H
#define SSVFAIRPLAYSUBSCRIPTIONSTATUS_H

@class NSString;
@protocol SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSVFairPlaySubscriptionStatus : NSObject <SSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasSubscriptionLease; // ivar: _hasSubscriptionLease
@property (nonatomic) BOOL hasSubscriptionSlot; // ivar: _hasSubscriptionSlot
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif