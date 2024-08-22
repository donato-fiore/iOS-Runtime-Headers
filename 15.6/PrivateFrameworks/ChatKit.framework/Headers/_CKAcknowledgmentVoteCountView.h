// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CKACKNOWLEDGMENTVOTECOUNTVIEW_H
#define _CKACKNOWLEDGMENTVOTECOUNTVIEW_H

@class UIView, UIImageView, UILabel;



@interface _CKAcknowledgmentVoteCountView : UIView

@property (retain, nonatomic) UIImageView *ackIconImageView; // ivar: _ackIconImageView
@property (retain, nonatomic) UILabel *voteCountLabel; // ivar: _voteCountLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)configureWithAcknowledgmentTally:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif