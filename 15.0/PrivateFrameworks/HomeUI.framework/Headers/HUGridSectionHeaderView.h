// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDSECTIONHEADERVIEW_H
#define HUGRIDSECTIONHEADERVIEW_H

@class UICollectionReusableView, UIButton, UIListContentView, NSString, NSArray;
@protocol UIContentView, UIContentConfiguration;


#import "HUGridLayoutOptions.h"

@interface HUGridSectionHeaderView : UICollectionReusableView <UIContentView>



@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (copy, nonatomic) NSObject<UIContentConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) UIListContentView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *headerCellConstraints; // ivar: _headerCellConstraints
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly) Class superclass;


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)_invalidateConstraints;
-(void)prepareForReuse;
-(void)updateConstraints;


@end


#endif