// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBWORKSPACEDOMAIN_H
#define FBWORKSPACEDOMAIN_H

@class NSSet, BSServiceConnectionListener, NSArray, NSString;
@protocol BSServiceConnectionListenerDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface FBWorkspaceDomain : NSObject <BSServiceConnectionListenerDelegate>

 {
    BOOL _bootstrapConfigured;
    BOOL _usesDefaultShellEndpoint;
    BOOL _injectorEnabled;
    BOOL _assertsVisibility;
    BOOL _selfAssertRuntime;
    BOOL _monitorAllSuspendableProcesses;
    NSSet *_reconnectableWorkspaces;
    id<BSInvalidatable> *_registration;
    BSServiceConnectionListener *_listener;
    id<BSInvalidatable> *_activation;
    NSArray *_fgLaunchAttributes;
    NSArray *_fgSupportLaunchAttributes;
    NSArray *_bgLaunchAttributes;
    NSArray *_utLaunchAttributes;
    NSArray *_bgUtilityAttributes;
    NSArray *_bgActiveAttributes;
    NSArray *_fgSuspendedAttributes;
    NSArray *_fgUtilityAttributes;
    NSArray *_fgNonFocalAttributes;
    NSArray *_fgFocalAttributes;
    NSArray *_fgSupportSuspendedAttributes;
    NSArray *_fgSupportUtilityAttributes;
    NSArray *_fgSupportNonFocalAttributes;
    NSArray *_fgSupportFocalAttributes;
    NSArray *_injectorAttributes;
    NSString *_identifier;
    NSString *_machName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)endpoint;
-(id)init;
-(void)dealloc;
-(void)listener:(id)arg0 didReceiveConnection:(id)arg1 withContext:(id)arg2 ;


@end


#endif