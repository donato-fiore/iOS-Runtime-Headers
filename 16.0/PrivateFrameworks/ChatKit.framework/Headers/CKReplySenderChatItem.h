// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKREPLYSENDERCHATITEM_H
#define CKREPLYSENDERCHATITEM_H



#import "CKSenderChatItem.h"

@interface CKReplySenderChatItem : CKSenderChatItem



-(CGFloat)_calculateAddtionalOffsetForTapbackWithNextItem:(id)arg0 previousItem:(id)arg1 associatedChatItem:(id)arg2 ;
-(char)transcriptOrientation;
-(id)layoutItemSpacingWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)loadTranscriptText;
-(struct UIEdgeInsets )contentInsets;


@end


#endif