// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSCLIPREQUEST_H
#define CPSCLIPREQUEST_H

@class NSString;
@protocol CPSSessionProxyDelegate;

#import <Foundation/Foundation.h>

#import "CPSSessionProxy.h"

@interface CPSClipRequest : NSObject <CPSSessionProxyDelegate>

 {
    CPSSessionProxy *_sessionProxy;
    id *_completionHandler;
    BOOL _shouldOpenClipWhenMetadataIsUpdated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldReturnErrorOnUserCancellation; // ivar: _shouldReturnErrorOnUserCancellation
@property (readonly) Class superclass;


+(void)confirmLocationWithURL:(id)arg0 inRegion:(id)arg1 completion:(id)arg2 ;
+(void)deleteClipsWithBundleIDs:(id)arg0 completion:(id)arg1 ;
+(void)getLocationConfirmationConsentForBundleID:(id)arg0 completion:(id)arg1 ;
+(void)getUserNotificationConsentForBundleID:(id)arg0 completion:(id)arg1 ;
-(id)_errorIgnoringUserCancelledErrorIfNeeded:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 fallbackClipBundleID:(id)arg1 ;
-(id)sessionProxy;
-(void)_openClipWithInvocationUI;
-(void)cancel;
-(void)dealloc;
-(void)installClipWithBundleID:(id)arg0 completion:(id)arg1 ;
-(void)proxy:(id)arg0 didDetermineAvailability:(BOOL)arg1 ;
-(void)proxy:(id)arg0 didFinishLoadingWithError:(id)arg1 ;
-(void)proxyAppDidLaunchForTesting:(id)arg0 ;
-(void)proxyDidUpdateMetadata:(id)arg0 ;
-(void)proxyRemoteServiceDidCrash:(id)arg0 ;
-(void)requestClipWithCompletion:(id)arg0 ;


@end


#endif