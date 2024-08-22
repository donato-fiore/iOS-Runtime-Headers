// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKRATINGPLATTERVIEW_H
#define MKRATINGPLATTERVIEW_H

@class UIView, NSArray, NSString;


#import "MKPlaceSectionItemView.h"
#import "MKBarView.h"
#import "_MKUILabel.h"

@interface MKRatingPlatterView : MKPlaceSectionItemView {
    MKBarView *_ratingCategoryBarView;
    _MKUILabel *_categoryLabel;
    UIView *_containerView;
    NSArray *_constraints;
}


@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGFloat score; // ivar: _score


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeChanged;
-(void)_setupConstraints;
-(void)_setupInitialAppearance;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif