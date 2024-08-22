// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAGGREGATEATTACHMENTMESSAGEPARTCHATITEM_H
#define CKAGGREGATEATTACHMENTMESSAGEPARTCHATITEM_H

@class UITraitCollection, NSArray, NSURL;


#import "CKMessagePartChatItem.h"
#import "CKMediaObjectAssetDataSource.h"

@interface CKAggregateAttachmentMessagePartChatItem : CKMessagePartChatItem {
    BOOL _hasCheckedForMomentShareURL;
    UITraitCollection *_transcriptTraitCollection;
}


@property (retain, nonatomic) NSArray *aggregateChatItems; // ivar: _aggregateChatItems
@property (retain, nonatomic) NSArray *aggregatedNonTapbackVisibleAssociatedMessageChatItems; // ivar: _aggregatedNonTapbackVisibleAssociatedMessageChatItems
@property (retain, nonatomic) NSArray *aggregatedVisibleAssociatedMessageChatItems; // ivar: _aggregatedVisibleAssociatedMessageChatItems
@property (retain, nonatomic) CKMediaObjectAssetDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSArray *mediaObjects; // ivar: _mediaObjects
@property (copy, nonatomic) NSURL *momentShareURL; // ivar: _momentShareURL
@property (readonly, copy, nonatomic) NSArray *transferGUIDs;
@property (readonly, nonatomic) NSArray *visibleAssociatedMessageChatItemsIncludingTapbacks;


-(BOOL)canCopy;
-(BOOL)canDelete;
-(BOOL)canExport;
-(BOOL)canForward;
-(BOOL)canPerformQuickAction;
-(BOOL)shouldCacheSize;
-(Class)balloonViewClass;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)pasteboardItemProviders;
-(id)transcriptTraitCollection;
-(id)visibleAssociatedMessageChatItems;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)_generateMediaObjects;
-(void)setTranscriptTraitCollection:(id)arg0 ;


@end


#endif