// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSENDERCHATITEM_H
#define CKSENDERCHATITEM_H



#import "CKChatItem.h"

@interface CKSenderChatItem : CKChatItem



-(BOOL)isEditable;
-(BOOL)wantsDrawerLayout;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(id)cellIdentifier;
-(id)layoutItemSpacingWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )contentInsets;


@end


#endif