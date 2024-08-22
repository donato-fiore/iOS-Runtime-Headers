// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCMARKUPPRESENTER_H
#define DCMARKUPPRESENTER_H

@class MURemoteViewController, MarkupViewController, UIViewController;

#import <Foundation/Foundation.h>

#import "ICDocCamDocumentInfo.h"
#import "ICDocCamImageCache.h"

@interface DCMarkupPresenter : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) id *dismissCompletionBlock; // ivar: _dismissCompletionBlock
@property (retain) ICDocCamDocumentInfo *documentInfo; // ivar: _documentInfo
@property (copy, nonatomic) id *frameBlock; // ivar: _frameBlock
@property (retain) ICDocCamImageCache *imageCache; // ivar: _imageCache
@property (nonatomic) NSUInteger inkStyle; // ivar: _inkStyle
@property (retain, nonatomic) MURemoteViewController *markupRemoteViewController; // ivar: _markupRemoteViewController
@property (retain, nonatomic) MarkupViewController *markupViewController; // ivar: _markupViewController
@property (weak) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) id *startPresentBlock; // ivar: _startPresentBlock


+(void)cleanupMarkup;
// +(void)markupDocumentInfo:(id)arg0 imageCache:(id)arg1 fromView:(id)arg2 presentingViewController:(id)arg3 inkStyle:(NSUInteger)arg4 frameBlock:(id)arg5 startPresentBlock:(unk)arg6 completionBlock:(id)arg7 dismissCompletionBlock:(unk)arg8  ;
-(void)dismissMarkupViewController;
-(void)handleReturnedURL:(id)arg0 ;
-(void)markupCancelAction:(id)arg0 ;
-(void)markupDoneAction:(id)arg0 ;
-(void)presentMarkupFromView:(id)arg0 ;
-(void)presentMarkupViewControllerFromView:(id)arg0 ;


@end


#endif