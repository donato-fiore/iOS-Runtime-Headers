// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHSTACKCONFIGURATIONAPERTUREVIEW_H
#define SBHSTACKCONFIGURATIONAPERTUREVIEW_H

@class UIView, MTMaterialView, NSSet, UIScrollView;


#import "SBIconListView.h"

@interface SBHStackConfigurationApertureView : UIView {
    MTMaterialView *_backgroundMaterialView;
    UIView *_backgroundStackMatchingView;
    UIView *_backgroundFilterView;
}


@property (readonly, nonatomic) NSSet *backgroundViews;
@property (retain, nonatomic) UIScrollView *contentScrollView; // ivar: _contentScrollView
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (retain, nonatomic) SBIconListView *iconListView; // ivar: _iconListView
@property (nonatomic) BOOL usesConcentricCorners; // ivar: _usesConcentricCorners
@property (readonly, nonatomic) UIView *widgetStackMatchingBackgroundView;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateFilterViewForUserInterfaceStyle:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif