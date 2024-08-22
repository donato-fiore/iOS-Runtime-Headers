// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBENTITLEMENTS_H
#define RBENTITLEMENTS_H

@class NSSet, NSString;
@protocol RBEntitlementPossessing;

#import <Foundation/Foundation.h>


@interface RBEntitlements : NSObject <RBEntitlementPossessing>

 {
    NSSet *_entitlements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)hasEntitlementDomain:(NSUInteger)arg0 ;
-(id)_initWithEntitlements:(id)arg0 ;
-(id)init;


@end


#endif