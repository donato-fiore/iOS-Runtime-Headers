// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKPINNEDCONVERSATIONCONTACTITEMAVATARVIEW_H
#define CKPINNEDCONVERSATIONCONTACTITEMAVATARVIEW_H

@protocol CKPinnedConversationContactItemView, CKPinnedConversationContactItem;


#import "CKAvatarView.h"

@interface CKPinnedConversationContactItemAvatarView : CKAvatarView <CKPinnedConversationContactItemView>



@property (retain, nonatomic) NSObject<CKPinnedConversationContactItem> *pinnedConversationContactItem; // ivar: _pinnedConversationContactItem


-(id)init;
-(void)_updateContactItemViewShadows;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif