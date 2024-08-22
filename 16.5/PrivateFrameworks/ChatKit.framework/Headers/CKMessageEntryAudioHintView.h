// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMESSAGEENTRYAUDIOHINTVIEW_H
#define CKMESSAGEENTRYAUDIOHINTVIEW_H

@class UIView, UIButton, UIImageView, UILabel;



@interface CKMessageEntryAudioHintView : UIView

@property (nonatomic) UIEdgeInsets coverInsets; // ivar: _coverInsets
@property (retain, nonatomic) UIButton *hintButton; // ivar: _hintButton
@property (retain, nonatomic) UIImageView *hintImageView; // ivar: _hintImageView
@property (retain, nonatomic) UILabel *hintLabel; // ivar: _hintLabel
@property (retain, nonatomic) UIButton *referenceButton; // ivar: _referenceButton
@property (nonatomic) BOOL shouldAnimateReferenceButton; // ivar: _shouldAnimateReferenceButton


-(id)initWithReferenceButton:(id)arg0 coverInsets:(struct UIEdgeInsets )arg1 ;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif