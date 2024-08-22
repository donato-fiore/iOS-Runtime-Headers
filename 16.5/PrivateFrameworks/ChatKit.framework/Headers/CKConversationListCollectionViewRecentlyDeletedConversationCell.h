// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONVERSATIONLISTCOLLECTIONVIEWRECENTLYDELETEDCONVERSATIONCELL_H
#define CKCONVERSATIONLISTCOLLECTIONVIEWRECENTLYDELETEDCONVERSATIONCELL_H



#import "CKConversationListCollectionViewRecoverableConversationCell.h"

@interface CKConversationListCollectionViewRecentlyDeletedConversationCell : CKConversationListCollectionViewRecoverableConversationCell



-(BOOL)shouldAlwaysHideAvatar;
-(BOOL)shouldAlwaysHideUnreadIndicator;
-(NSUInteger)_daysUntilDeletion:(id)arg0 ;
-(id)_attributedStringForRecoverableSummaryLabelWithText:(id)arg0 ;
-(void)updateSummaryLabel:(id)arg0 conversation:(id)arg1 fastPreview:(BOOL)arg2 ;


@end


#endif