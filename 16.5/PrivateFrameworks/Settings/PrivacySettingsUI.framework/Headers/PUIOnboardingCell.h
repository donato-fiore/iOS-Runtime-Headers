// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIONBOARDINGCELL_H
#define PUIONBOARDINGCELL_H

@class PSTableCell, NSString, UIStackView, UIImageView;
@protocol UITextViewDelegate, PUIOnboardingCellDelegate;



@interface PUIOnboardingCell : PSTableCell <UITextViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUIOnboardingCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImageView *symbolImageView; // ivar: _symbolImageView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 title:(id)arg2 ;
-(void)didTapOnboardingCellLink:(id)arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setDetailText:(id)arg0 linkText:(id)arg1 ;
-(void)setSymbolImage:(id)arg0 tintColor:(id)arg1 ;


@end


#endif