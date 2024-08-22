// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDATECHATITEM_H
#define IMDATECHATITEM_H

@class NSDate;


#import "IMTranscriptChatItem.h"

@interface IMDateChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) NSDate *date;


-(id)_initWithItem:(id)arg0 ;
-(id)transcriptDate;


@end


#endif