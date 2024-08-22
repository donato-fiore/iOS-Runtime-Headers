// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMESSAGEACKNOWLEDGMENTPICKERBARITEMVIEW_H
#define CKMESSAGEACKNOWLEDGMENTPICKERBARITEMVIEW_H

@class UIView, UIButton;
@protocol CKMessageAcknowledgmentPickerBarItemViewDelegate;


#import "CKAcknowledgmentGlyphView.h"
#import "CKMessageAcknowledgmentDraftDescriptor.h"

@interface CKMessageAcknowledgmentPickerBarItemView : UIView

@property (readonly, nonatomic) CKAcknowledgmentGlyphView *acknowledgmentGlyphView; // ivar: _acknowledgmentGlyphView
@property (weak, nonatomic) NSObject<CKMessageAcknowledgmentPickerBarItemViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL displaySelected;
@property (readonly, nonatomic) CKMessageAcknowledgmentDraftDescriptor *draft; // ivar: _draft
@property (retain, nonatomic) UIButton *itemButton; // ivar: _itemButton
@property (readonly, nonatomic) NSInteger messageAcknowledgmentType; // ivar: _messageAcknowledgmentType
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithMessageAcknowledgmentDescriptor:(id)arg0 initiallySelected:(BOOL)arg1 ;
-(void)itemButtonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif