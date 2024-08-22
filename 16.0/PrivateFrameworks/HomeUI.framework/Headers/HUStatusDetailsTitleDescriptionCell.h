// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSTATUSDETAILSTITLEDESCRIPTIONCELL_H
#define HUSTATUSDETAILSTITLEDESCRIPTIONCELL_H

@class UICollectionViewCell, NSString, UITextView, NSArray, UILabel;
@protocol UITextViewDelegate, HFStringGenerator;


#import "HUGridLayoutOptions.h"

@interface HUStatusDetailsTitleDescriptionCell : UICollectionViewCell <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSObject<HFStringGenerator> *descriptionText;
@property (retain, nonatomic) UITextView *descriptionTextView; // ivar: _descriptionTextView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *labelConstraints; // ivar: _labelConstraints
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSObject<HFStringGenerator> *titleText;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutContentApplyingFrames:(BOOL)arg0 forTargetSize:(struct CGSize )arg1 desiredSize:(struct CGSize *)arg2 ;
-(void)layoutSubviews;


@end


#endif