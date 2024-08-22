// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKCLOUDSERVICECONTROLLER_H
#define SKCLOUDSERVICECONTROLLER_H

@class ICCloudServiceStatusMonitor;

#import <Foundation/Foundation.h>


@interface SKCloudServiceController : NSObject {
    BOOL _allowsPromptingForPrivacyAcknowledgement;
    ICCloudServiceStatusMonitor *_cloudServiceStatusMonitor;
    os_unfair_lock_s _lock;
}


@property (nonatomic, setter=_setAllowsPromptingForPrivacyAcknowledgement:) BOOL _allowsPromptingForPrivacyAcknowledgement;


+(NSInteger)authorizationStatus;
+(id)_publicErrorForPrivateError:(id)arg0 ;
+(void)requestAuthorization:(id)arg0 ;
-(id)_cloudServiceStatusMonitorWithError:(*id)arg0 ;
-(id)init;
-(void)_handleCapabilitiesDidChangeNotification:(id)arg0 ;
-(void)_handleStorefrontCountryCodeDidChangeNotification:(id)arg0 ;
-(void)_handleStorefrontIdentifierDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)requestCapabilitiesWithCompletionHandler:(id)arg0 ;
-(void)requestPersonalizationTokenForClientToken:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)requestStorefrontCountryCodeWithCompletionHandler:(id)arg0 ;
-(void)requestStorefrontIdentifierWithCompletionHandler:(id)arg0 ;
-(void)requestUserTokenForDeveloperToken:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif