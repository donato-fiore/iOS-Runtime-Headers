// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBROWSERSELECTIONLABELACCESSORYVIEW_H
#define CKBROWSERSELECTIONLABELACCESSORYVIEW_H

@class UIView, UIImageView;



@interface CKBrowserSelectionLabelAccessoryView : UIView

@property (retain, nonatomic) UIImageView *plusDView; // ivar: _plusDView
@property (retain, nonatomic) UIImageView *plusLView; // ivar: _plusLView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLabelAccessoryType:(NSUInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif