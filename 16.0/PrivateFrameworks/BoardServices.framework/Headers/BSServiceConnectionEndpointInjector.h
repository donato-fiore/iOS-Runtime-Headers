// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSSERVICECONNECTIONENDPOINTINJECTOR_H
#define BSSERVICECONNECTIONENDPOINTINJECTOR_H

@class RBSTarget, NSArray, NSString, RBSAssertion;
@protocol BSServiceConnectionEndpointInjectorConfiguring, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BSServiceManager.h"

@interface BSServiceConnectionEndpointInjector : NSObject <BSServiceConnectionEndpointInjectorConfiguring, BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    BSServiceManager *_manager;
    RBSTarget *_target;
    NSArray *_additionalAttributes;
    NSString *_domain;
    NSString *_service;
    NSString *_instance;
    NSString *_inheritingEnvironment;
    RBSAssertion *_assertion;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)injectorWithConfigurator:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)setAdditionalAttributes:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setInheritingEnvironment:(id)arg0 ;
-(void)setInstance:(id)arg0 ;
-(void)setService:(id)arg0 ;
-(void)setTarget:(id)arg0 ;


@end


#endif