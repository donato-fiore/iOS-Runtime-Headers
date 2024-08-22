// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCOMPOSEREVIEWVIEWCONTROLLER_H
#define SUCOMPOSEREVIEWVIEWCONTROLLER_H

@class SKComposeReviewViewController, NSURL, NSString;
@protocol SKComposeReviewDelegate;


#import "SUViewController.h"

@interface SUComposeReviewViewController : SUViewController <SKComposeReviewDelegate>

 {
    SKComposeReviewViewController *_remoteViewController;
}


@property (readonly, nonatomic) NSURL *compositionURL; // ivar: _compositionURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(id)copyScriptViewController;
-(id)init;
-(id)initWithCompositionURL:(id)arg0 ;
-(void)_showRemoteView;
-(void)dealloc;
-(void)loadView;
-(void)prepareWithCompletionBlock:(id)arg0 ;
-(void)reviewComposeViewControllerDidFinish:(id)arg0 ;


@end


#endif