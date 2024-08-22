// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKLOCATIONSHAREBALLOONVIEW_H
#define CKLOCATIONSHAREBALLOONVIEW_H

@class UIImageView, UIVisualEffectView, UIView, UIButton, UILabel, NSString;
@protocol CKLocationShareBalloonViewDelegate;


#import "CKImageBalloonView.h"

@interface CKLocationShareBalloonView : CKImageBalloonView

@property (retain, nonatomic) UIImageView *chevron; // ivar: _chevron
@property (weak, nonatomic) NSObject<CKLocationShareBalloonViewDelegate> *delegate;
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (retain, nonatomic) UIView *horizontalSeparator; // ivar: _horizontalSeparator
@property (retain, nonatomic) UIButton *ignoreButton; // ivar: _ignoreButton
@property (retain, nonatomic) UILabel *locationLabel; // ivar: _locationLabel
@property (copy, nonatomic) NSString *locationString; // ivar: _locationString
@property (nonatomic) NSInteger offerState; // ivar: _offerState
@property (retain, nonatomic) UIButton *startSharingButton; // ivar: _startSharingButton
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleString; // ivar: _titleString
@property (retain, nonatomic) UIView *verticalSeparator; // ivar: _verticalSeparator


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)_ignoreButtonHit:(id)arg0 ;
-(void)_shareButtonHit:(id)arg0 ;
-(void)addFilter:(id)arg0 ;
-(void)clearFilters;
-(void)configureForLocationShareOfferChatItem:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;


@end


#endif