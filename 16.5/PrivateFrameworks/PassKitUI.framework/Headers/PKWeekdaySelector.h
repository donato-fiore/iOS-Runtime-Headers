// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKWEEKDAYSELECTOR_H
#define PKWEEKDAYSELECTOR_H

@class UIView, UIStackView, NSMutableSet;
@protocol PKWeekdaySelectorDelegate;



@interface PKWeekdaySelector : UIView {
    UIStackView *_stackView;
    NSMutableSet *_selectedWeekdays;
    NSMutableSet *_possibleWeekdays;
}


@property (weak, nonatomic) NSObject<PKWeekdaySelectorDelegate> *delegate; // ivar: _delegate


-(id)init;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 isTemplateLayout:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_weekdayTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)setDirectionalLayoutMargins:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setSelectedDays:(id)arg0 possibleDays:(id)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;


@end


#endif