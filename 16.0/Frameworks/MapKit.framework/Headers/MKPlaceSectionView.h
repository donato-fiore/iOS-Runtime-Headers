// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACESECTIONVIEW_H
#define MKPLACESECTIONVIEW_H

@class MKStackView, NSArray;
@protocol MKPlaceSectionViewDelegate;


#import "MKViewWithHairline.h"
#import "MKPlaceSectionItemView.h"

@interface MKPlaceSectionView : MKStackView {
    NSUInteger _trackingSelectForRow;
    MKViewWithHairline *_hairLineView;
}


@property (weak, nonatomic) NSObject<MKPlaceSectionViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MKPlaceSectionItemView *footerView; // ivar: _footerView
@property (retain, nonatomic) MKPlaceSectionItemView *headerView; // ivar: _headerView
@property (nonatomic) BOOL highlightsTouches; // ivar: _highlightsTouches
@property (copy, nonatomic) NSArray *rowViews; // ivar: _rowViews
@property (nonatomic) BOOL showsBottomHairline; // ivar: _showsBottomHairline


-(NSUInteger)indexOfRowAt:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)rowAt:(struct CGPoint )arg0 ;
-(void)_tappedRow:(id)arg0 at:(NSUInteger)arg1 ;
-(void)_touchesBeganForRow:(id)arg0 at:(NSUInteger)arg1 ;
-(void)_touchesCancelledForRow:(id)arg0 at:(NSUInteger)arg1 ;
-(void)_updateHairlineInsets;
-(void)_updateViewsAnimated:(BOOL)arg0 ;
-(void)_updateViewsAnimated:(BOOL)arg0 isNeedLayout:(BOOL)arg1 ;
-(void)infoCardThemeChanged;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif