// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSVIBRANTLABEL_H
#define CPSVIBRANTLABEL_H

@class UIVisualEffectView, UILabel, NSString;
@protocol UIContentSizeCategoryAdjusting;



@interface CPSVibrantLabel : UIVisualEffectView <UIContentSizeCategoryAdjusting>

 {
    UILabel *_label;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) NSInteger numberOfLines;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;


-(BOOL)isUserInteractionEnabled;
-(id)initWithTextStyle:(id)arg0 textVariant:(NSInteger)arg1 vibrancyEffectStyle:(NSInteger)arg2 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif