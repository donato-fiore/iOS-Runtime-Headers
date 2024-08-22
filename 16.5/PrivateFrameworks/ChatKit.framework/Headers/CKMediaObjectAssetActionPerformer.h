// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMEDIAOBJECTASSETACTIONPERFORMER_H
#define CKMEDIAOBJECTASSETACTIONPERFORMER_H

@class PXAssetActionPerformer;
@protocol CKMediaObjectAssetActionHelper;


#import "CKMessagePartChatItem.h"

@interface CKMediaObjectAssetActionPerformer : PXAssetActionPerformer

@property (weak, nonatomic) NSObject<CKMediaObjectAssetActionHelper> *chatActionHelper; // ivar: _chatActionHelper
@property (retain, nonatomic) CKMessagePartChatItem *chatItem; // ivar: _chatItem


+(BOOL)canPerformOnImplicitSelection;
+(BOOL)canPerformWithActionManager:(id)arg0 ;
+(BOOL)canPerformWithActionManager:(id)arg0 selectionSnapshot:(id)arg1 ;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
+(id)createPreviewActionWithActionManager:(id)arg0 handler:(id)arg1 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;


@end


#endif