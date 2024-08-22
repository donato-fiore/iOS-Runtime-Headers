// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCUIACTIVITYCONTROLMENUVIEW_H
#define FCUIACTIVITYCONTROLMENUVIEW_H

@class UIView, NSArray, NSMutableArray, UISelectionFeedbackGenerator, NSMutableDictionary, NSString, UIAction, UIGestureRecognizer;
@protocol UIGestureRecognizerDelegate, FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring;


#import "_FCUIActivityControlMenuFooterView.h"

@interface FCUIActivityControlMenuView : UIView <UIGestureRecognizerDelegate, FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring>

 {
    NSArray *_menuItemViews;
    NSMutableArray *_outgoingMenuItemViews;
    NSArray *_purgeableMenuItemViews;
    _FCUIActivityControlMenuFooterView *_footerView;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    NSMutableDictionary *_categoriesToVisualStylingProviders;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIAction *footerAction;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *menuItemActions;
@property (readonly, copy, nonatomic) NSArray *menuItemElements;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly, nonatomic) UIGestureRecognizer *pressGestureRecognizer; // ivar: _pressGestureRecognizer
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;


-(BOOL)_toggleHighlightForMenuElement:(id)arg0 ;
-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureFooterViewIfNecessary;
-(void)_handlePressGesture:(id)arg0 ;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProvider:(id)arg0 didChangeForCategory:(NSInteger)arg1 outgoingProvider:(id)arg2 ;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif