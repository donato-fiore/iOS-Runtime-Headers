// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKATTACHMENTMESSAGEPARTCHATITEM_H
#define CKATTACHMENTMESSAGEPARTCHATITEM_H

@class NSItemProvider, NSURL, UITraitCollection, NSString;


#import "CKMessagePartChatItem.h"
#import "CKMediaObject.h"

@interface CKAttachmentMessagePartChatItem : CKMessagePartChatItem {
    NSItemProvider *_dragItemProvider;
    NSURL *_momentShareURL;
    UITraitCollection *_transcriptTraitCollection;
}


@property (readonly, nonatomic) NSUInteger layoutGroupStyle;
@property (retain, nonatomic) CKMediaObject *mediaObject; // ivar: _mediaObject
@property (readonly, copy, nonatomic) NSURL *momentShareURL;
@property (readonly, copy, nonatomic) NSString *transferGUID;


-(BOOL)canCopy;
-(BOOL)canExport;
-(BOOL)canForward;
-(BOOL)canQuickSave;
-(BOOL)shouldCacheSize;
-(BOOL)stickersSnapToPoint;
-(Class)balloonViewClass;
-(Class)cellClass;
-(NSUInteger)balloonCorners;
-(id)compositionWithContext:(id)arg0 ;
-(id)description;
-(id)dragItemProvider;
-(id)fileURLForAttachment;
-(id)initWithIMChatItem:(id)arg0 maxWidth:(CGFloat)arg1 ;
-(id)rtfDocumentItemsWithFormatString:(id)arg0 selectedTextRange:(struct _NSRange )arg1 ;
-(id)transcriptTraitCollection;
-(struct CGSize )_transcoderGeneratedSizeFittingSize:(struct CGSize )arg0 sizeExists:(*BOOL)arg1 ;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)setTranscriptTraitCollection:(id)arg0 ;


@end


#endif