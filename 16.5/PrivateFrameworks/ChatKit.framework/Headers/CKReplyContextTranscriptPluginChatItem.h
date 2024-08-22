// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKREPLYCONTEXTTRANSCRIPTPLUGINCHATITEM_H
#define CKREPLYCONTEXTTRANSCRIPTPLUGINCHATITEM_H

@class LPLinkMetadata;
@protocol CKReplyContext;


#import "CKMessagePartChatItem.h"

@interface CKReplyContextTranscriptPluginChatItem : CKMessagePartChatItem <CKReplyContext>



@property (readonly, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata


-(BOOL)isReplyContextPreview;
-(BOOL)replyIsFromMe;
-(Class)balloonViewClass;
-(char)color;
-(id)_imChatItem;
-(id)description;
-(id)mediaObject;
-(struct CKBalloonDescriptor_t )balloonDescriptor;
-(void)configureBalloonView:(id)arg0 ;


@end


#endif