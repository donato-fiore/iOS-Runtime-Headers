// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMTRANSCRIPTBUBBLEFOOTERVIEW_H
#define PXCMMTRANSCRIPTBUBBLEFOOTERVIEW_H

@class UIView, UILabel, UIImageView, NSString;



@interface PXCMMTranscriptBubbleFooterView : UIView {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIImageView *_chevronImageView;
}


@property (nonatomic) BOOL chevronIsHidden;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;


+(CGFloat)_primaryToSecondaryBaselineSpacing;
+(CGFloat)_secondaryBaselineToBottomSpacing;
+(CGFloat)_topToPrimaryBaselineSpacing;
+(CGFloat)desiredHeight;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif