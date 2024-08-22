// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSENTITLEMENTVERIFIER_H
#define BCSENTITLEMENTVERIFIER_H

@class NSString;
@protocol BCSEntitlementVerifying;

#import <Foundation/Foundation.h>


@interface BCSEntitlementVerifier : NSObject <BCSEntitlementVerifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)auditToken:(struct ? *)arg0 hasEntitlement:(id)arg1 ;


@end


#endif