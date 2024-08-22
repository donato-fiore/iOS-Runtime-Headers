// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKLOADMORECHATITEM_H
#define CKLOADMORECHATITEM_H



#import "CKChatItem.h"

@interface CKLoadMoreChatItem : CKChatItem



-(BOOL)displayDuringSend;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(id)layoutItemSpacingWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct UIEdgeInsets )contentInsets;
-(struct UIEdgeInsets )transcriptTextAlignmentInsets;


@end


#endif