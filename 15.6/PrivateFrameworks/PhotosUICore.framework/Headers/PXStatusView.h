// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTATUSVIEW_H
#define PXSTATUSVIEW_H

@class UIView, UIAlertController, NSString;
@protocol PXChangeObserver, PXStatusViewDelegate;


#import "PXContentUnavailableView.h"
#import "PXStatusViewModel.h"

@interface PXStatusView : UIView <PXChangeObserver>

 {
    PXContentUnavailableView *_contentUnavailabilityView;
}


@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXStatusViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXStatusViewModel *viewModel; // ivar: _viewModel


-(id)init;
-(id)test_actionTitle;
-(id)test_message;
-(id)test_title;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_handleButtonAction;
-(void)_updateButtonTitle;
-(void)_updateMessage;
-(void)_updateTitle;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif