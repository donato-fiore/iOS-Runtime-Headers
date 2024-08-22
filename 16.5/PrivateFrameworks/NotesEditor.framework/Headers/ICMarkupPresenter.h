// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMARKUPPRESENTER_H
#define ICMARKUPPRESENTER_H

@class ICAttachment, NSString, MURemoteViewController, MarkupViewController, UIViewController;
@protocol ICMarkupDismissalDelegate;

#import <Foundation/Foundation.h>


@interface ICMarkupPresenter : NSObject <ICMarkupDismissalDelegate>



@property (retain) ICAttachment *attachment; // ivar: _attachment
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissCompletionBlock; // ivar: _dismissCompletionBlock
@property (copy, nonatomic) id *frameBlock; // ivar: _frameBlock
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger inkStyle; // ivar: _inkStyle
@property (retain, nonatomic) MURemoteViewController *markupRemoteViewController; // ivar: _markupRemoteViewController
@property (retain, nonatomic) MarkupViewController *markupViewController; // ivar: _markupViewController
@property (nonatomic) BOOL markupWasDismissedByUserInteraction; // ivar: _markupWasDismissedByUserInteraction
@property (weak) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) id *startPresentBlock; // ivar: _startPresentBlock
@property (readonly) Class superclass;


+(void)cleanupMarkup;
// +(void)markupAttachment:(id)arg0 fromView:(id)arg1 presentingViewController:(id)arg2 inkStyle:(NSUInteger)arg3 frameBlock:(id)arg4 startPresentBlock:(unk)arg5 completionBlock:(id)arg6 dismissCompletionBlock:(unk)arg7  ;
-(void)dismissMarkupViewController;
-(void)handleReturnedURL:(id)arg0 ;
-(void)markupCancelAction:(id)arg0 ;
-(void)markupDoneAction:(id)arg0 ;
-(void)markupViewWillDissappear;
-(void)presentMarkupFromView:(id)arg0 ;
-(void)presentMarkupUsingExtensionFromView:(id)arg0 ;
-(void)presentMarkupViewControllerFromView:(id)arg0 ;
-(void)saveChangesAndDismiss;


@end


#endif