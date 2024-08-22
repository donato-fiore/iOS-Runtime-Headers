// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSCHROMEPLACEHOLDERVIEW_H
#define SSCHROMEPLACEHOLDERVIEW_H

@class UIView, UINavigationItem, UIBarButtonItem, UINavigationBar, NSArray, VKSelectableBarButtonItem, VKImageAnalysisBarButtonItem, NSString;
@protocol UINavigationBarDelegate;


#import "SSVellumOpacityControl.h"

@interface SSChromePlaceholderView : UIView <UINavigationBarDelegate>

 {
    UINavigationItem *_managedNavigationItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_doneItem;
    UIBarButtonItem *_deleteItem;
    UIBarButtonItem *_undoItem;
    UIBarButtonItem *_redoItem;
    UIBarButtonItem *_undoRedoSpacerItem;
    UIBarButtonItem *_opacityItem;
    SSVellumOpacityControl *_opacityControl;
    UIView *_opacityView;
    UINavigationBar *_topBar;
    UINavigationBar *_topBarBackground;
    UIView *_topBarSeparatorLine;
    NSArray *_barItems;
    VKSelectableBarButtonItem *_annotationEnabledButton;
    VKImageAnalysisBarButtonItem *_aaBarButtonItem;
}


@property (nonatomic) CGFloat contentAlpha; // ivar: _contentAlpha
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)topBarHeight;
-(NSInteger)positionForBar:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_initializeBarButtonItems;
-(void)_layoutTopBar;
-(void)_updateBarButtonItemPositionsAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;


@end


#endif