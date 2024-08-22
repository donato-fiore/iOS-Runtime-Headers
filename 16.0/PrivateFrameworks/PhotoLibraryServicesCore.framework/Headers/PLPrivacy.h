// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPRIVACY_H
#define PLPRIVACY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PLAssetsdPrivacySupportClient.h"

@interface PLPrivacy : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSInteger _authRightFullAccess;
    NSInteger _authRightAddOnly;
    PLAssetsdPrivacySupportClient *_privacySupportClient;
}


@property BOOL hasHandledLimitedLibraryReprompt; // ivar: _hasHandledLimitedLibraryReprompt
@property (nonatomic, getter=isLimitedLibrarySupported) BOOL limitedLibrarySupported; // ivar: _limitedLibrarySupported


+(id)_logDictionaryFromPhotosPickerClientLogFile:(id)arg0 ;
+(id)sharedInstance;
-(NSInteger)_authStatusForScope:(NSInteger)arg0 ;
-(NSInteger)checkPhotosAccessAllowedWithScope:(NSInteger)arg0 ;
-(NSInteger)photosAccessAllowedWithScope:(NSInteger)arg0 ;
-(NSInteger)photosAccessAllowedWithScope:(NSInteger)arg0 auditToken:(struct ? )arg1 clientAuthorization:(id)arg2 ;
-(id)init;
-(id)photosPickerPresentedLibraryLogForClient:(id)arg0 ;
-(id)photosPickerPresentedLibraryLogsByClient;
-(void)_checkAuthStatusForPhotosAccessScope:(NSInteger)arg0 promptIfUnknown:(BOOL)arg1 resultHandler:(id)arg2 ;
-(void)_isPhotosAccessAllowedWithScope:(NSInteger)arg0 promptIfUnknown:(BOOL)arg1 synchronous:(BOOL)arg2 resultHandler:(id)arg3 ;
-(void)_resolvePreflightStatusForScope:(NSInteger)arg0 ;
-(void)_setAuthStatus:(NSInteger)arg0 scope:(NSInteger)arg1 ;
-(void)checkPhotosAccessAllowedWithScope:(NSInteger)arg0 handler:(id)arg1 ;
-(void)logPhotosAccessWithClientAuthorization:(id)arg0 ;
-(void)logPhotosAccessWithPhotoPickerClientIdentification:(id)arg0 ;
-(void)logPhotosAccessWithSelfAuditToken;
-(void)logPhotosPickerPresentedLibraryForClient:(id)arg0 ;
-(void)presentAsyncPromptForLimitedLibraryPickerIfNeeded;
-(void)requestLimitedLibraryPromptForApplicationIdentifier:(id)arg0 ;


@end


#endif