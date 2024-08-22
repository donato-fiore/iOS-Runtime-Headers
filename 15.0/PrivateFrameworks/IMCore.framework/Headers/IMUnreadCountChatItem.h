// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMUNREADCOUNTCHATITEM_H
#define IMUNREADCOUNTCHATITEM_H



#import "IMTranscriptChatItem.h"

@interface IMUnreadCountChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) NSUInteger unreadCount; // ivar: _unreadCount


-(id)_initWithItem:(id)arg0 unreadCount:(NSUInteger)arg1 ;


@end


#endif