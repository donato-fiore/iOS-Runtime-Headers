// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)description;
-(id)mediaObject;
-(struct CKBalloonDescriptor_t )balloonDescriptor;
-(void)configureBalloonView:(id)arg0 ;


@end


#endif