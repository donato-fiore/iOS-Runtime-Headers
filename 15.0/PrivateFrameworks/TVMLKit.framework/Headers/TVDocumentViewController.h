// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TVDOCUMENTVIEWCONTROLLER_H
#define TVDOCUMENTVIEWCONTROLLER_H

@class UIViewController, NSDictionary;
@protocol TVDocumentViewControllerDelegate;


#import "TVApplicationController.h"

@interface TVDocumentViewController : UIViewController {
    ? _delegateFlags;
}


@property (readonly, weak, nonatomic) TVApplicationController *appController; // ivar: _appController
@property (weak, nonatomic) NSObject<TVDocumentViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *documentContext; // ivar: _documentContext


+(id)viewControllerWithContext:(id)arg0 forAppController:(id)arg1 ;
-(BOOL)handleEvent:(id)arg0 withElement:(id)arg1 targetResponder:(id)arg2 ;
-(id)tvdvc_initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didChangeDocumentContext;
-(void)didFailUpdateWithError:(id)arg0 ;
-(void)didUpdateDocument;
-(void)didUpdateWithContext:(id)arg0 ;
-(void)updateUsingContext:(id)arg0 ;
-(void)willUpdateDocument;


@end


#endif