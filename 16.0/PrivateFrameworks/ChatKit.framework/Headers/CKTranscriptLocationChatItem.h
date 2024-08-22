// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTLOCATIONCHATITEM_H
#define CKTRANSCRIPTLOCATIONCHATITEM_H

@class NSURL;


#import "CKAttachmentMessagePartChatItem.h"
#import "CKLocationMediaObject.h"

@interface CKTranscriptLocationChatItem : CKAttachmentMessagePartChatItem

@property (retain, nonatomic) CKLocationMediaObject *locationMediaObject; // ivar: _locationMediaObject
@property (retain, nonatomic) NSURL *locationURL; // ivar: _locationURL


-(BOOL)canCopy;
-(Class)balloonViewClass;
-(id)dragItemProvider;
-(id)mediaObject;
-(id)transferGUID;
-(struct CGSize )loadSizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;


@end


#endif