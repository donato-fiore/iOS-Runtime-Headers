// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUTEXTPAIRVIEW_H
#define MUTEXTPAIRVIEW_H

@class UIView, UILabel, NSArray, NSString;
@protocol MUStackable;


#import "MUTextPairViewModel.h"

@interface MUTextPairView : UIView <MUStackable>

 {
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    NSArray *_constraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isStacked) BOOL stacked; // ivar: _stacked
@property (readonly) Class superclass;
@property (retain, nonatomic) MUTextPairViewModel *viewModel; // ivar: _viewModel


-(BOOL)shouldStackForProposedWidth:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_setupSubviews;
-(void)_updateAppearance;
-(void)_updateConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif