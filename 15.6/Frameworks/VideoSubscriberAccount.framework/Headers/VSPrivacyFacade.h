// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSPRIVACYFACADE_H
#define VSPRIVACYFACADE_H

@class NSString, NSArray, NSOperationQueue;
@protocol VSPrivacyServiceProtocol;

#import <Foundation/Foundation.h>

#import "VSPrivacyVoucherLockbox.h"

@interface VSPrivacyFacade : NSObject <VSPrivacyServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *knownAppBundles;
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (copy, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;
@property (retain, nonatomic) VSPrivacyVoucherLockbox *voucherLockbox; // ivar: _voucherLockbox


-(BOOL)isAccessGrantedForAuditToken:(struct ? )arg0 ;
-(BOOL)isAccessGrantedForBundle:(struct __CFBundle *)arg0 ;
-(BOOL)reset;
-(BOOL)setAccessGranted:(BOOL)arg0 forAuditToken:(struct ? )arg1 ;
-(BOOL)setAccessGranted:(BOOL)arg0 forBundle:(struct __CFBundle *)arg1 ;
-(id)_voucherForProcess:(int)arg0 providerID:(id)arg1 ;
-(id)init;
-(id)initWithService:(id)arg0 voucherLockbox:(id)arg1 ;
-(id)initWithVoucherLockbox:(id)arg0 ;
-(void)_promptForAccessUsingAuditToken:(struct ? )arg0 processIdentifier:(int)arg1 identityProviderDisplayName:(id)arg2 providerIsSupported:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)preflightCheckForProcessIdentifier:(int)arg0 withCompletionHandler:(id)arg1 ;
-(void)requestAccessForAuditToken:(struct ? )arg0 processIdentifier:(int)arg1 identityProviderDisplayName:(id)arg2 providerIsSupported:(BOOL)arg3 identityProviderID:(id)arg4 allowUI:(BOOL)arg5 completionHandler:(id)arg6 ;


@end


#endif