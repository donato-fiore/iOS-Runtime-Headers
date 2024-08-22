// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDETAILSTUCONVERSATIONCELL_H
#define CKDETAILSTUCONVERSATIONCELL_H

@class UIButton, TUConversation, NSString, UIImageView, UILabel;
@protocol CKDetailsCell;


#import "CKDetailsCell.h"

@interface CKDetailsTUConversationCell : CKDetailsCell <CKDetailsCell>



@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (readonly, nonatomic) CGFloat buttonInteritemSpacing;
@property (readonly, nonatomic) CGFloat buttonTitleHorizontalSpacing;
@property (readonly, nonatomic) CGFloat buttonTitleVerticalSpacing;
@property (retain, nonatomic) TUConversation *conversation; // ivar: _conversation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (readonly, nonatomic) CGFloat insetPadding;
@property (readonly, nonatomic) CGFloat interitemSpacing;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(BOOL)shouldHighlight;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 conversation:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleMultiWayStateChange:(id)arg0 ;
-(void)actionButtonTapped:(id)arg0 ;
-(void)addConstraints;
-(void)configureActionButton;
-(void)configureIconView;
-(void)configureSubtitle;
-(void)formatIconViewForExpanse;
-(void)formatIconViewForFaceTime;
-(void)formatSubtitleForText;
-(void)formatTitle;
-(void)layoutSubviews;
-(void)setupView;
-(void)updateView;


@end


#endif