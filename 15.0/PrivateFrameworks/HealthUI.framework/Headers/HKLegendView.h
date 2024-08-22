// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKLEGENDVIEW_H
#define HKLEGENDVIEW_H

@class UIStackView, NSMutableArray, UIView, NSLayoutConstraint, NSArray, UIColor;


#import "HKBorderLineView.h"

@interface HKLegendView : HKBorderLineView {
    UIStackView *_mainStack;
    NSMutableArray *_leftEntryViews;
    NSMutableArray *_rightEntryViews;
    UIView *_topDividerView;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}


@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) NSMutableArray *extensionViews; // ivar: _extensionViews
@property (readonly, nonatomic) NSArray *leftEntries; // ivar: _leftEntries
@property (retain, nonatomic) UIColor *lollipopColor; // ivar: _lollipopColor
@property (nonatomic) BOOL opaqueBackground; // ivar: _opaqueBackground
@property (readonly, nonatomic) NSArray *rightEntries; // ivar: _rightEntries
@property (retain, nonatomic) UIColor *topBorderColor; // ivar: _topBorderColor


+(CGFloat)horizontalOffsetWithOpaque:(BOOL)arg0 ;
+(struct UIEdgeInsets )modifiedInsetsForOpaqueLegend:(BOOL)arg0 originalInsets:(struct UIEdgeInsets )arg1 ;
-(id)initWithEdgeInsets:(struct UIEdgeInsets )arg0 opaqueBackground:(BOOL)arg1 ;
-(void)_rebuildExtensionsWithStickLocations:(id)arg0 ;
-(void)_rebuildStackStructure;
-(void)_updateLegendLeftEntries:(id)arg0 rightEntries:(id)arg1 ;
-(void)hideLollipops;
-(void)showLollipopsWithSelectedValues:(id)arg0 ;


@end


#endif