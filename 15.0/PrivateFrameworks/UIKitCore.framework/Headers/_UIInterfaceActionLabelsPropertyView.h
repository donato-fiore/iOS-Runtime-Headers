// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIINTERFACEACTIONLABELSPROPERTYVIEW_H
#define _UIINTERFACEACTIONLABELSPROPERTYVIEW_H

@class NSLayoutConstraint, NSArray, NSString;
@protocol UIInterfaceActionDisplayPropertyObserver;


#import "UIView.h"
#import "UILabel.h"
#import "UIInterfaceAction.h"

@interface _UIInterfaceActionLabelsPropertyView : UIView <UIInterfaceActionDisplayPropertyObserver>

 {
    NSLayoutConstraint *_leadingLabelLeadingConstraint;
    NSLayoutConstraint *_leadingLabelVerticalPositionConstraint;
    NSLayoutConstraint *_trailingLabelTrailingConstraint;
    NSLayoutConstraint *_trailingLabelVerticalPositionConstraint;
    NSLayoutConstraint *_interLabelSpacingConstraint;
    UILabel *_classificationLabel;
    UILabel *_titleLabel;
    NSArray *_labelConstraints;
}


@property (readonly, nonatomic) UIInterfaceAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_classificationLabelIfVisible;
-(id)_interfaceActionViewState;
-(id)_newLabel;
-(id)_visualStyle;
-(id)initWithAction:(id)arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)_applyVisualStyle;
-(void)_applyVisualStyleToLabels;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_reloadContentClassificationLabelDisplayProperties;
-(void)_reloadContentForTitleDisplayProperties;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)interfaceAction:(id)arg0 reloadDisplayedContentActionProperties:(id)arg1 ;
-(void)interfaceAction:(id)arg0 reloadDisplayedContentVisualStyle:(id)arg1 ;
-(void)tintColorDidChange;


@end


#endif