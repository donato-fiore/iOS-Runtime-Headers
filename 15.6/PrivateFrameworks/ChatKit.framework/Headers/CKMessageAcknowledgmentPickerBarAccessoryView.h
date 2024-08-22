// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMESSAGEACKNOWLEDGMENTPICKERBARACCESSORYVIEW_H
#define CKMESSAGEACKNOWLEDGMENTPICKERBARACCESSORYVIEW_H

@class UIContextMenuAccessoryView;


#import "CKMessagePartChatItem.h"
#import "CKMessageAcknowledgmentPickerBarViewController.h"

@interface CKMessageAcknowledgmentPickerBarAccessoryView : UIContextMenuAccessoryView

@property (retain, nonatomic) CKMessagePartChatItem *chatItem; // ivar: _chatItem
@property (nonatomic) CGRect layoutBounds; // ivar: _layoutBounds
@property (retain, nonatomic) CKMessageAcknowledgmentPickerBarViewController *pickerViewController; // ivar: _pickerViewController
@property (nonatomic) BOOL visible; // ivar: _visible


-(id)initWithChatItem:(id)arg0 layoutBounds:(struct CGRect )arg1 ;
-(struct CGPoint )attachmentOffsetWithReferenceFrame:(struct CGRect )arg0 ;


@end


#endif