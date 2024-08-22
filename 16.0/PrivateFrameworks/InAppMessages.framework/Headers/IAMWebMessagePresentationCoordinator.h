// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IAMWEBMESSAGEPRESENTATIONCOORDINATOR_H
#define IAMWEBMESSAGEPRESENTATIONCOORDINATOR_H

@class NSURL, NSString, ICInAppMessageEntry;
@protocol IAMWebMessageControllerDelegate, IAMViewControllerMetricsDelegate, IAMWebMessagePresentationCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "IAMWebMessageController.h"

@interface IAMWebMessagePresentationCoordinator : NSObject <IAMWebMessageControllerDelegate, IAMViewControllerMetricsDelegate>

 {
    NSURL *_webArchiveURL;
    id *_modalViewControllerDismissedCompletion;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IAMWebMessagePresentationCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPresenting; // ivar: _isPresenting
@property (readonly) Class superclass;
@property (retain, nonatomic) IAMWebMessageController *webMessageController; // ivar: _webMessageController
@property (retain, nonatomic) ICInAppMessageEntry *webMessageEntry; // ivar: _webMessageEntry


-(BOOL)present;
-(id)initWithWebMessageEntry:(id)arg0 webArchiveURL:(id)arg1 ;
-(id)presentingViewController;
-(void)_dismissModalViewController:(id)arg0 ;
-(void)_handleOpenURL:(id)arg0 ;
-(void)_handleWebMessageDismissed;
-(void)_modalViewControllerDismissalTransitionDidEnd:(id)arg0 ;
-(void)load;
-(void)viewController:(id)arg0 didReportDismissalAction:(NSInteger)arg1 ;
-(void)webMessageControllerWebViewDidReportEvent:(id)arg0 event:(id)arg1 ;
-(void)webMessageControllerWebViewDidRequestAction:(id)arg0 actionConfiguration:(id)arg1 options:(id)arg2 ;
-(void)webMessageControllerWebViewDidRequestClose:(id)arg0 ;
-(void)webMessageControllerWebViewDidRequestOpenURL:(id)arg0 url:(id)arg1 options:(id)arg2 ;


@end


#endif