// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUBARBUTTONITEM_H
#define SUBARBUTTONITEM_H

@class UIBarButtonItem, UINavigationItem, NSString, UIView;


#import "SUUIAppearance.h"
#import "SUTouchCaptureView.h"

@interface SUBarButtonItem : UIBarButtonItem {
    SUUIAppearance *_confirmationAppearance;
    UINavigationItem *_lastNavigationItem;
    NSString *_preConfirmationTitle;
    SUTouchCaptureView *_touchCaptureView;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) UIEdgeInsets accessoryViewInsets; // ivar: _accessoryViewInsets
@property (nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic, getter=isShowingConfirmation) BOOL showingConfirmation;


+(Class)classForNavigationButton;
-(id)_navigationButton;
-(id)createViewForNavigationItem:(id)arg0 ;
-(void)_addTouchCaptureViewForNavigationButton:(id)arg0 ;
-(void)_removeTouchCaptureView;
-(void)_setTitle:(id)arg0 isConfirmation:(BOOL)arg1 appearance:(id)arg2 animated:(BOOL)arg3 ;
-(void)_touchCaptureAction:(id)arg0 ;
-(void)_updateViewForAccessoryChange;
-(void)configureFromScriptButton:(id)arg0 ;
-(void)dealloc;
-(void)hideConfirmationWithAppearance:(id)arg0 animated:(BOOL)arg1 ;
-(void)showConfirmationWithTitle:(id)arg0 appearance:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif