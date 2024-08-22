// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCONVERSATIONLISTCOLLECTIONVIEWRECOVERABLECONVERSATIONCELL_H
#define CKCONVERSATIONLISTCOLLECTIONVIEWRECOVERABLECONVERSATIONCELL_H



#import "CKConversationListCollectionViewConversationCell.h"

@interface CKConversationListCollectionViewRecoverableConversationCell : CKConversationListCollectionViewConversationCell



+(id)reuseIdentifier;
+(id)reuseIdentifierForAXFontSize:(BOOL)arg0 ;
+(id)reuseIdentifiers;
-(BOOL)shouldAppearAsRecoverableConversation;
-(NSUInteger)_daysUntilDeletion:(id)arg0 ;
-(id)_attributedStringForRecoverableSummaryLabelWithText:(id)arg0 ;
-(void)updateDateLabel:(id)arg0 conversation:(id)arg1 ;
-(void)updateSummaryLabel:(id)arg0 conversation:(id)arg1 fastPreview:(BOOL)arg2 ;


@end


#endif