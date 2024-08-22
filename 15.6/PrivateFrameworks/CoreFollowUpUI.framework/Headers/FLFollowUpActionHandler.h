// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLFOLLOWUPACTIONHANDLER_H
#define FLFOLLOWUPACTIONHANDLER_H

@class FLHeadlessActionHandler, UIViewController, NSString;
@protocol FLExtensionHostContextInterface;


#import "FLViewExtensionLoader.h"

@interface FLFollowUpActionHandler : FLHeadlessActionHandler <FLExtensionHostContextInterface>

 {
    FLViewExtensionLoader *_extensionLoader;
    UIViewController *_remoteViewController;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *extensionRequestedViewControllerPresentation; // ivar: _extensionRequestedViewControllerPresentation
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_extensionLoader;
-(void)dealloc;
-(void)extensionDidFinish;
-(void)extensionDidFinishWithError:(id)arg0 ;
-(void)extensionDidFinishWithError:(id)arg0 userInfo:(id)arg1 completionHandler:(id)arg2 ;
-(void)extensionDidFinishWithUserInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)handleExtensionBasedAction:(id)arg0 completion:(id)arg1 ;
-(void)handleExtensionBasedAction:(id)arg0 completionWithUserInfo:(id)arg1 ;


@end


#endif