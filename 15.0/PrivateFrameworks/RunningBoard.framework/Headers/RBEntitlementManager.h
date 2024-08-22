// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBENTITLEMENTMANAGER_H
#define RBENTITLEMENTMANAGER_H

@class NSMapTable, NSSet, NSDictionary, NSString;
@protocol RBEntitlementManaging, RBStateCapturing;

#import <Foundation/Foundation.h>


@interface RBEntitlementManager : NSObject <RBEntitlementManaging, RBStateCapturing>

 {
    os_unfair_lock_s _lock;
    NSMapTable *_entitlementsByIdentifier;
    NSSet *_availableEntitlements;
    NSDictionary *_restrictedEntitlements;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;
@property (readonly) Class superclass;


-(id)allEntitlements;
-(id)captureState;
-(id)entitlementsForProcess:(id)arg0 ;
-(id)initWithDomainAttributeEntitlements:(id)arg0 ;
-(void)purgeEntitlementsForProcess:(id)arg0 ;


@end


#endif