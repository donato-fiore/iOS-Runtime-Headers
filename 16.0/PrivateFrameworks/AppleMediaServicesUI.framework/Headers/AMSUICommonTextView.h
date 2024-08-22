// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUICOMMONTEXTVIEW_H
#define AMSUICOMMONTEXTVIEW_H

@class UITextView;
@protocol AMSUICommonTextViewDelegate;



@interface AMSUICommonTextView : UITextView

@property (weak, nonatomic) NSObject<AMSUICommonTextViewDelegate> *ams_delegate; // ivar: _ams_delegate
@property (nonatomic) BOOL centerText; // ivar: _centerText


-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif