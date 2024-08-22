// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLCLIENTMANAGERAUTHORIZATIONCONTEXT_H
#define CLCLIENTMANAGERAUTHORIZATIONCONTEXT_H


#import <Foundation/Foundation.h>


@interface CLClientManagerAuthorizationContext : NSObject

@property (readonly, nonatomic) BOOL authorizedForWidgetUpdates; // ivar: _authorizedForWidgetUpdates
@property (readonly, nonatomic) NSUInteger effectiveServiceMask; // ivar: _effectiveServiceMask
@property (readonly, nonatomic) int inUseLevel; // ivar: _inUseLevel
@property (readonly, nonatomic) NSUInteger provisionalServiceMask; // ivar: _provisionalServiceMask
@property (readonly, nonatomic) int registrationResult; // ivar: _registrationResult
@property (readonly, nonatomic) NSUInteger staticServiceMask; // ivar: _staticServiceMask
@property (readonly, nonatomic) int transientAwareRegistrationResult; // ivar: _transientAwareRegistrationResult


-(BOOL)inUseLevelIsAtLeast:(int)arg0 ;
-(BOOL)isAuthorizedForServiceType:(NSUInteger)arg0 ;
-(BOOL)isAuthorizedForServiceTypeMask:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNonProvisionallyAuthorizedForServiceType:(NSUInteger)arg0 ;
-(BOOL)isNonProvisionallyAuthorizedForServiceTypeMask:(NSUInteger)arg0 ;
-(id)authorizationContextByANDingServiceMaskTuple:(struct CLClientServiceTypeMaskTuple )arg0 ;
-(id)description;
-(id)initWithInUseLevel:(int)arg0 registrationResult:(int)arg1 transientAwareRegistrationResult:(int)arg2 serviceMaskTuple:(struct CLClientServiceTypeMaskTuple )arg3 authorizedForWidgetUpdates:(BOOL)arg4 ;


@end


#endif