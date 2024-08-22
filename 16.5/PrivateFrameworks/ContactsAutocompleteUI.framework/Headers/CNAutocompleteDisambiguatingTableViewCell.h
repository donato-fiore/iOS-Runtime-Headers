// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETEDISAMBIGUATINGTABLEVIEWCELL_H
#define CNAUTOCOMPLETEDISAMBIGUATINGTABLEVIEWCELL_H

@class UIImageView, UIView;


#import "CNComposeTableViewCell.h"

@interface CNAutocompleteDisambiguatingTableViewCell : CNComposeTableViewCell

@property (retain) UIImageView *checkmarkImageView; // ivar: _checkmarkImageView
@property (readonly) UIView *checkmarkView;
@property (nonatomic, getter=isCheckmarkVisible) BOOL checkmarkVisible; // ivar: _checkmarkVisible


+(id)createCheckmarkView;
+(id)identifier;
-(BOOL)canCollapseRecipient;
-(CGFloat)leadingInsetsFromCurrentMargins:(struct NSDirectionalEdgeInsets )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)titleTextStyle;
-(void)setRecipient:(id)arg0 ;


@end


#endif