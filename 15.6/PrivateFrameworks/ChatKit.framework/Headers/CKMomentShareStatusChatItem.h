// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMOMENTSHARESTATUSCHATITEM_H
#define CKMOMENTSHARESTATUSCHATITEM_H



#import "CKChatItem.h"

@interface CKMomentShareStatusChatItem : CKChatItem



-(BOOL)wantsDrawerLayout;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(id)_statusChatItem;
-(id)layoutItemSpacingWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )contentInsets;


@end


#endif