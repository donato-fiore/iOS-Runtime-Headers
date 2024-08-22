// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSAVETOFILESACTIVITY_H
#define SFSAVETOFILESACTIVITY_H

@class SFActivity, UIViewController, NSString;
@protocol _SFSaveToFilesOperationDelegate;


#import "_SFSaveToFilesOperation.h"
#import "_SFActivityItemCustomizationController.h"

@interface SFSaveToFilesActivity : SFActivity <_SFSaveToFilesOperationDelegate>

 {
    _SFSaveToFilesOperation *_operation;
    UIViewController *_presenterViewController;
    id *_presentationCompletionHandler;
    BOOL _presentAnimated;
    _SFActivityItemCustomizationController *_customizationController;
    UIViewController *_presentedViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDownloads; // ivar: _supportsDownloads


-(BOOL)_dismissActivityFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_managesOwnPresentation;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)saveToFilesOperationShouldDismissViewControllerAfterCompletion:(id)arg0 ;
-(BOOL)saveToFilesOperationSupportsDownloads:(id)arg0 ;
-(id)activityType;
-(id)customizationControllerForSaveToFilesOperation:(id)arg0 ;
-(id)initWithActivityItemProviderCollection:(id)arg0 customizationController:(id)arg1 ;
-(void)saveToFilesOperation:(id)arg0 didFinishWithSuccess:(BOOL)arg1 ;
-(void)saveToFilesOperation:(id)arg0 presentViewController:(id)arg1 ;


@end


#endif