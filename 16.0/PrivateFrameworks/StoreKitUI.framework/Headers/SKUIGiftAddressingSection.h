// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGIFTADDRESSINGSECTION_H
#define SKUIGIFTADDRESSINGSECTION_H

@class NSString, UITextView;
@protocol UITextFieldDelegate;


#import "SKUIGiftTableViewSection.h"
#import "SKUIGiftRecipientTableViewCell.h"
#import "SKUIGift.h"
#import "SKUIGiftTextTableViewCell.h"

@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection {
    CGFloat _footerHeight;
    NSString *_footerString;
    SKUIGiftRecipientTableViewCell *_recipientTableViewCell;
    CGFloat _textViewCellHeight;
}


@property (retain, nonatomic) SKUIGift *gift; // ivar: _gift
@property (retain, nonatomic) SKUIGiftTextTableViewCell *messageCell; // ivar: _messageCell
@property (readonly, nonatomic) UITextView *messagingTextView; // ivar: _messagingTextView
@property (nonatomic) NSObject<UITextFieldDelegate> *textFieldDelegate; // ivar: _textFieldDelegate


-(CGFloat)heightForCellInTableView:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)numberOfRowsInSection;
-(id)_attributedPlaceholderWithString:(id)arg0 ;
-(id)_footerString;
-(id)_recipientTableViewCell;
-(id)_textFieldTableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithGiftConfiguration:(id)arg0 ;
-(id)tableViewCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)beginEditingMessageForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)endEditingMessageForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forIndexPath:(id)arg2 ;


@end


#endif