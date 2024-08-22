// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKTITLECONTAINERVIEW_H
#define TLKTITLECONTAINERVIEW_H

@class NUIContainerBoxView;


#import "TLKStackView.h"
#import "TLKImageView.h"
#import "TLKLabel.h"
#import "TLKRichTextField.h"

@interface TLKTitleContainerView : TLKStackView

@property (retain, nonatomic) TLKImageView *secondaryImageView; // ivar: _secondaryImageView
@property (retain, nonatomic) NUIContainerBoxView *secondaryImageViewBoxView; // ivar: _secondaryImageViewBoxView
@property (retain, nonatomic) TLKLabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) TLKRichTextField *titleField; // ivar: _titleField


+(BOOL)hasNonBoldFormattingInRichText:(id)arg0 ;
-(id)init;
-(id)secondaryTitleLabelString;
-(id)titleFont;
-(id)titleLabel;
-(id)titleLabelString;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(void)updateResultWithTitle:(id)arg0 secondaryTitle:(id)arg1 image:(id)arg2 detached:(BOOL)arg3 useCompactMode:(BOOL)arg4 truncateMiddle:(BOOL)arg5 ;


@end


#endif