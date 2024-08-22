// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIATTRIBUTEDSTRINGWRAPPERVIEW_H
#define SKUIATTRIBUTEDSTRINGWRAPPERVIEW_H



#import "SKUIAttributedStringView.h"

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView

@property (readonly, nonatomic) SKUIAttributedStringView *delegateView; // ivar: _delegateView


-(BOOL)textColorFollowsTintColor;
-(BOOL)usesTallCharacterSet;
-(CGFloat)baselineOffset;
-(CGFloat)firstBaselineOffset;
-(NSInteger)badgePlacement;
-(NSInteger)firstLineTopInset;
-(NSInteger)stringTreatment;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)layout;
-(id)requiredBadges;
-(id)textColor;
-(id)treatmentColor;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBadgePlacement:(NSInteger)arg0 ;
-(void)setFirstLineTopInset:(NSInteger)arg0 ;
-(void)setLayout:(id)arg0 ;
-(void)setRequiredBadges:(id)arg0 ;
-(void)setStringTreatment:(NSInteger)arg0 ;
-(void)setTextColor:(id)arg0 ;
-(void)setTextColorFollowsTintColor:(BOOL)arg0 ;
-(void)setTreatmentColor:(id)arg0 ;
-(void)viewWasRecycled;


@end


#endif