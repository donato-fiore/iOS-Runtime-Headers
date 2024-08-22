// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKBUSINESSINFOVIEW_H
#define CKBUSINESSINFOVIEW_H

@class UIView, NSString, UILabel;
@protocol CKBusinessInfoViewDelegate;


#import "CKStandardButton.h"

@interface CKBusinessInfoView : UIView

@property (weak, nonatomic) NSObject<CKBusinessInfoViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (retain, nonatomic) UILabel *descriptionTextLabel; // ivar: _descriptionTextLabel
@property (retain, nonatomic) NSString *greetingText; // ivar: _greetingText
@property (retain, nonatomic) UILabel *greetingTextLabel; // ivar: _greetingTextLabel
@property (readonly, nonatomic) BOOL hasValidGreeting;
@property (retain, nonatomic) CKStandardButton *infoButton; // ivar: _infoButton
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType


-(id)initWithLayoutType:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)infoButtonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)setup;


@end


#endif