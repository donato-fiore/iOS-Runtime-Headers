// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCOMPOSERECIPIENTVIEW_H
#define PXCOMPOSERECIPIENTVIEW_H

@class UIView, UIButton, UIFont, NSString, NSArray, NSSet;
@protocol PXComposeRecipientViewDelegate;



@interface PXComposeRecipientView : UIView {
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) UIButton *addButton; // ivar: _addButton
@property (readonly, nonatomic) UIFont *baseFont; // ivar: _baseFont
@property (weak, nonatomic) NSObject<PXComposeRecipientViewDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSInteger maxRecipients; // ivar: _maxRecipients
@property (readonly, copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (nonatomic, getter=isSeparatorHidden) BOOL separatorHidden; // ivar: _separatorHidden
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (copy, nonatomic) NSSet *usedAddresses; // ivar: _usedAddresses


-(id)init;
-(void)addRecipient:(id)arg0 ;
-(void)addRecipients:(id)arg0 ;
-(void)removeRecipient:(id)arg0 ;
-(void)removeRecipients:(id)arg0 ;


@end


#endif