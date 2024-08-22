// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYASSISTANTWELCOMEVIEWCONTROLLER_H
#define PXSHAREDLIBRARYASSISTANTWELCOMEVIEWCONTROLLER_H

@class OBWelcomeController, UITextView, NSString;
@protocol PXAssistantViewController, PXAssistantViewControllerDelegate;


#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryAssistantWelcomeViewController : OBWelcomeController <PXAssistantViewController>

 {
    UITextView *_textView;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel


-(id)initWithViewModel:(id)arg0 ;
-(void)_updateTextView;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)startButtonTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif