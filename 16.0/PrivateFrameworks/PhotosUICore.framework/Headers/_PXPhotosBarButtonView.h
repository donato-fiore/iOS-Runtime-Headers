// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXPHOTOSBARBUTTONVIEW_H
#define _PXPHOTOSBARBUTTONVIEW_H

@class UIView, UIBarButtonItem, NSString;
@protocol PXChangeObserver;


#import "PXCuratedLibraryOverlayButton.h"
#import "_PXPhotosBarButtonSpecManager.h"
#import "PXUpdater.h"
#import "PXPhotosViewModel.h"

@interface _PXPhotosBarButtonView : UIView <PXChangeObserver>



@property (readonly, nonatomic) SEL action; // ivar: _action
@property (weak, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (readonly, nonatomic) PXCuratedLibraryOverlayButton *button; // ivar: _button
@property (retain, nonatomic) id *changeDeliveryHandle; // ivar: _changeDeliveryHandle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SEL menuAction; // ivar: _menuAction
@property (readonly, nonatomic) _PXPhotosBarButtonSpecManager *specManager; // ivar: _specManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *systemIconImageName; // ivar: _systemIconImageName
@property (readonly, nonatomic) NSInteger systemItem; // ivar: _systemItem
@property (readonly, weak, nonatomic) id *target; // ivar: _target
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXPhotosViewModel *viewModel; // ivar: _viewModel


-(id)_createButtonConfiguration;
-(id)initWithTitle:(id)arg0 orSystemItem:(NSInteger)arg1 orSystemIconName:(id)arg2 target:(id)arg3 action:(SEL)arg4 menuAction:(SEL)arg5 specManager:(id)arg6 viewModel:(id)arg7 ;
-(void)_handleAction;
-(void)_handleMenuAction;
-(void)_handleWillDismissMenu;
-(void)_handleWillDisplayMenu;
-(void)_invalidateButtons;
-(void)_pauseChangeDelivery;
-(void)_resumeChangeDeliveryIfPossible;
-(void)_updateButtons;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)tintColorDidChange;


@end


#endif