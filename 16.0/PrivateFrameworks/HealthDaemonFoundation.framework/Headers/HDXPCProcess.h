// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDXPCPROCESS_H
#define HDXPCPROCESS_H

@class NSString, NSMutableSet, _HKXPCAuditToken, _HKEntitlements;

#import <Foundation/Foundation.h>


@interface HDXPCProcess : NSObject {
    NSString *_name;
    NSMutableSet *_droppedEntitlements;
}


@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy, nonatomic) _HKXPCAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *containerAppBundleIdentifier; // ivar: _containerAppBundleIdentifier
@property (readonly, nonatomic) _HKEntitlements *entitlements; // ivar: _entitlements
@property (readonly, nonatomic) BOOL isExtension; // ivar: _isExtension
@property (readonly, nonatomic) BOOL isWidgetKitExtension;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int processIdentifier;


+(id)currentProcess;
+(id)processWithConnection:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasArrayEntitlement:(id)arg0 containing:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg0 ;
-(BOOL)hasRequiredArrayEntitlement:(id)arg0 containing:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasRequiredEntitlement:(id)arg0 error:(*id)arg1 ;
-(id)_pluginBundleForCurrentProcess;
-(id)description;
-(id)initWithAuditToken:(id)arg0 entitlements:(id)arg1 isExtension:(BOOL)arg2 containerAppBundleIdentifier:(id)arg3 ;
-(id)unitTest_copyProcessWithEntitlements:(id)arg0 ;
-(id)valueForEntitlement:(id)arg0 ;
-(void)dropEntitlement:(id)arg0 ;
-(void)restoreEntitlement:(id)arg0 ;


@end


#endif