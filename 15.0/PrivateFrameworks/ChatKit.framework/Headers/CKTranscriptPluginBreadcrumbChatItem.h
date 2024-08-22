// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTRANSCRIPTPLUGINBREADCRUMBCHATITEM_H
#define CKTRANSCRIPTPLUGINBREADCRUMBCHATITEM_H

@class IMTranscriptPluginBreadcrumbChatItem, UIImage;


#import "CKMultilineStampChatItem.h"
#import "CKTranscriptPluginChatItem.h"

@interface CKTranscriptPluginBreadcrumbChatItem : CKMultilineStampChatItem

@property (readonly, nonatomic) IMTranscriptPluginBreadcrumbChatItem *IMChatItem;
@property (readonly, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (readonly, nonatomic) CGFloat iconWidthPlusPadding;
@property (retain, nonatomic) CKTranscriptPluginChatItem *previousPluginChatItem; // ivar: _previousPluginChatItem


-(BOOL)_wantsCenteredOrientation;
-(BOOL)_wantsIconImage;
-(Class)cellClass;
-(NSUInteger)_breadcrumbOptionFlags;
-(NSUInteger)layoutType;
-(char)transcriptOrientation;
-(id)layoutItemSpacingWithEnvironment:(id)arg0 datasourceItemIndex:(NSInteger)arg1 allDatasourceItems:(id)arg2 supplementryItems:(id)arg3 ;
-(id)loadTranscriptText;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif