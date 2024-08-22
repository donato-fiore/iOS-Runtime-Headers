// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICUPDATEAUTOMATICDOWNLOADMEDIAKINDSREQUEST_H
#define ICUPDATEAUTOMATICDOWNLOADMEDIAKINDSREQUEST_H

@class NSSet, NSString;
@protocol AMSRequestPresentationDelegate;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"

@interface ICUpdateAutomaticDownloadMediaKindsRequest : ICRequestOperation <AMSRequestPresentationDelegate>

 {
    ICStoreRequestContext *_requestContext;
    NSSet *_mediaKindsToAdd;
    NSSet *_mediaKindsToRemove;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)automaticDownloadMediaKindsForMusic;
-(id)initWithRequestContext:(id)arg0 mediaKindsToAdd:(id)arg1 mediaKindsToRemove:(id)arg2 ;
-(void)execute;
-(void)handleAuthenticateRequest:(id)arg0 completion:(id)arg1 ;
-(void)handleDialogRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif