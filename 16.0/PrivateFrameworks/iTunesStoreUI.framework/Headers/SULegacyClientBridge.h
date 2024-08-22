// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SULEGACYCLIENTBRIDGE_H
#define SULEGACYCLIENTBRIDGE_H

@class NSString, UITabBarController;
@protocol MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate;

#import <Foundation/Foundation.h>

#import "SUPreviewOverlayViewController.h"
#import "SUClientInterface.h"
#import "SUOverlayBackgroundViewController.h"

@interface SULegacyClientBridge : NSObject <MFMailComposeViewControllerDelegate, SUOverlayBackgroundDelegate>

 {
    SUPreviewOverlayViewController *_previewOverlayViewController;
}


@property (readonly, nonatomic) SUClientInterface *clientInterface; // ivar: _clientInterface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SUOverlayBackgroundViewController *overlayBackgroundViewController; // ivar: _overlayBackgroundViewController
@property (readonly, nonatomic) SUPreviewOverlayViewController *previewOverlayViewController;
@property (retain, nonatomic) UITabBarController *rootViewController; // ivar: _rootViewController
@property (readonly) Class superclass;


-(BOOL)composeReviewWithViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)enterAccountFlowWithViewController:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)performActionForDialog:(id)arg0 button:(id)arg1 ;
-(BOOL)presentOverlayBackgroundViewController:(id)arg0 ;
-(id)initWithClientInterface:(id)arg0 ;
-(void)_removePreviewOverlayViewController;
-(void)_showPreviewOverlayAnimated:(BOOL)arg0 ;
-(void)composeEmailWithSubject:(id)arg0 body:(id)arg1 ;
-(void)dealloc;
-(void)dismissOverlayBackgroundViewController;
-(void)hidePreviewOverlayAnimated:(BOOL)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)scriptOverlayBackgroundDidDismiss:(id)arg0 ;
-(void)showPreviewOverlayAnimated:(BOOL)arg0 ;


@end


#endif