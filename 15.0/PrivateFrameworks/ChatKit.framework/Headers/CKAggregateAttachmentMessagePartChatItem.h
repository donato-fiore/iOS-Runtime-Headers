// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKAGGREGATEATTACHMENTMESSAGEPARTCHATITEM_H
#define CKAGGREGATEATTACHMENTMESSAGEPARTCHATITEM_H

@class UITraitCollection, NSArray, NSURL;


#import "CKMessagePartChatItem.h"
#import "CKMediaObjectAssetDataSource.h"

@interface CKAggregateAttachmentMessagePartChatItem : CKMessagePartChatItem {
    NSInteger _numberOfPhotoAttachments;
    NSInteger _numberOfVideoAttachments;
    NSInteger _numberOfOtherAttachments;
    BOOL _hasCheckedForMomentShareURL;
    UITraitCollection *_transcriptTraitCollection;
}


@property (retain, nonatomic) NSArray *aggregateChatItems; // ivar: _aggregateChatItems
@property (retain, nonatomic) NSArray *aggregatedNonTapbackVisibleAssociatedMessageChatItems; // ivar: _aggregatedNonTapbackVisibleAssociatedMessageChatItems
@property (retain, nonatomic) CKMediaObjectAssetDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) NSArray *firstItemVisibleAssociatedChatItems;
@property (retain, nonatomic) NSArray *mediaObjects; // ivar: _mediaObjects
@property (copy, nonatomic) NSURL *momentShareURL; // ivar: _momentShareURL
@property (readonly, copy, nonatomic) NSArray *transferGUIDs;


-(BOOL)canCopy;
-(BOOL)canDelete;
-(BOOL)canExport;
-(BOOL)canForward;
-(BOOL)canQuickSave;
-(BOOL)shouldCacheSize;
-(Class)balloonViewClass;
-(Class)cellClass;
-(NSUInteger)layoutType;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)transcriptTraitCollection;
-(id)visibleAssociatedMessageChatItems;
-(struct ? )_additionalCountInMomentShare:(id)arg0 ;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)_generateMediaObjects;
-(void)setTranscriptTraitCollection:(id)arg0 ;


@end


#endif