// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUILABELSTACKTEMPLATEVIEW_H
#define SIRIUILABELSTACKTEMPLATEVIEW_H

@class UIView, NSLayoutConstraint, NSMutableDictionary, UILayoutGuide, NSDictionary, UIStackView;
@protocol SiriUILabelStackTemplateModel, SiriUILabelStackTemplateViewDelegate;


#import "SiriUIBaseTemplateView.h"

@interface SiriUILabelStackTemplateView : SiriUIBaseTemplateView

@property (retain, nonatomic) UIView *bottomView; // ivar: _bottomView
@property (weak, nonatomic) NSLayoutConstraint *bottomViewConstraint; // ivar: _bottomViewConstraint
@property (retain, nonatomic) NSMutableDictionary *componentsForViews; // ivar: _componentsForViews
@property (nonatomic) BOOL constraintsUpdated; // ivar: _constraintsUpdated
@property (retain, nonatomic) UILayoutGuide *contentBoundsGuide; // ivar: _contentBoundsGuide
@property (retain, nonatomic) NSDictionary *contentBoundsGuideConstraints; // ivar: _contentBoundsGuideConstraints
@property (weak, nonatomic) NSObject<SiriUILabelStackTemplateModel> *dataSource;
@property (nonatomic) NSInteger defaultTextAlignment; // ivar: _defaultTextAlignment
@property (weak, nonatomic) NSObject<SiriUILabelStackTemplateViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIStackView *leadingViews; // ivar: _leadingViews
@property (retain, nonatomic) UILayoutGuide *stackedComponentsBoundsGuide; // ivar: _stackedComponentsBoundsGuide
@property (retain, nonatomic) NSMutableDictionary *stackedComponentsGuideConstraints; // ivar: _stackedComponentsGuideConstraints
@property (retain, nonatomic) UIView *topView; // ivar: _topView
@property (weak, nonatomic) NSLayoutConstraint *topViewConstraint; // ivar: _topViewConstraint
@property (retain, nonatomic) UIStackView *trailingViews; // ivar: _trailingViews


-(CGFloat)desiredHeight;
-(NSInteger)layoutStyle;
-(id)initWithDataSource:(id)arg0 ;
-(void)_createContentLayoutGuides;
-(void)_updateTopAndBottomViewConstraints;
-(void)insertLeadingView:(id)arg0 withMargins:(struct UIEdgeInsets )arg1 ;
-(void)insertTopView:(id)arg0 ;
-(void)insertTrailingView:(id)arg0 withMargins:(struct UIEdgeInsets )arg1 ;
-(void)populateStack;
-(void)reloadData;
-(void)removeFromTemplatedSuperview;
-(void)setTemplatedSuperview:(id)arg0 ;
-(void)updateConstraints;


@end


#endif