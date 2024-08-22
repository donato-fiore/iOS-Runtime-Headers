// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIALERTCONTROLLERVIEW_H
#define _UIALERTCONTROLLERVIEW_H

@class NSAttributedString, NSString;


#import "UIView.h"
#import "UIAlertControllerVisualStyle.h"
#import "UIAlertController.h"

@interface _UIAlertControllerView : UIView

@property (readonly) UIView *_contentView; // ivar: __contentView
@property (readonly) UIView *_dimmingView; // ivar: __dimmingView
@property (retain, nonatomic, setter=_setVisualStyle:) UIAlertControllerVisualStyle *_visualStyle; // ivar: __visualStyle
@property (nonatomic, getter=_actionsReversed, setter=_setActionsReversed:) BOOL actionsReversed; // ivar: _actionsReversed
@property (weak) UIAlertController *alertController; // ivar: _alertController
@property BOOL alignsToKeyboard; // ivar: _alignsToKeyboard
@property (copy, nonatomic, setter=_setAttributedDetailMessage:) NSAttributedString *attributedDetailMessage; // ivar: _attributedDetailMessage
@property (copy, nonatomic, setter=_setAttributedMessage:) NSAttributedString *attributedMessage; // ivar: _attributedMessage
@property (copy, nonatomic, setter=_setAttributedTitle:) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (nonatomic) CGFloat effectAlpha; // ivar: _effectAlpha
@property BOOL hasDimmingView; // ivar: _hasDimmingView
@property (copy, nonatomic, setter=_setMessage:) NSString *message; // ivar: _message
@property BOOL presentedAsPopover; // ivar: _presentedAsPopover
@property BOOL shouldHaveBackdropView; // ivar: _shouldHaveBackdropView
@property (copy, nonatomic, setter=_setTitle:) NSString *title; // ivar: _title


-(id)_focusedAction;
-(void)_actionLayoutDirectionChanged;
-(void)_actionsChanged;
-(void)_addContentViewControllerToViewHierarchyIfNecessary;
-(void)_performBatchActionChangesWithBlock:(id)arg0 ;
-(void)_propertiesChanged;
-(void)_removeContentViewControllerViewFromHierarchy;
-(void)_textFieldsChanged;
-(void)_updateLabelProperties;
-(void)_updatePreferredAction;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg0 ;
-(void)configureForDismissAlongsideTransitionCoordinator:(id)arg0 ;
-(void)configureForPresentAlongsideTransitionCoordinator:(id)arg0 ;
-(void)deselectAllActions;


@end


#endif