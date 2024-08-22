// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RBIGNOREALLENTITLEMENTSMANAGER_H
#define RBIGNOREALLENTITLEMENTSMANAGER_H

@class NSString;
@protocol RBEntitlementManaging, RBEntitlementPossessing;

#import <Foundation/Foundation.h>


@interface RBIgnoreAllEntitlementsManager : NSObject <RBEntitlementManaging, RBEntitlementPossessing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)hasEntitlementDomain:(NSUInteger)arg0 ;
-(id)allEntitlements;
-(id)entitlementsForProcess:(id)arg0 ;
-(void)purgeEntitlementsForProcess:(id)arg0 ;


@end


#endif