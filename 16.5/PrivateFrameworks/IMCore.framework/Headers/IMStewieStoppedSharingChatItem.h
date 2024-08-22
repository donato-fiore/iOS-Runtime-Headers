// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSTEWIESTOPPEDSHARINGCHATITEM_H
#define IMSTEWIESTOPPEDSHARINGCHATITEM_H



#import "IMTranscriptChatItem.h"
#import "IMHandle.h"
#import "IMChat.h"

@interface IMStewieStoppedSharingChatItem : IMTranscriptChatItem {
    IMHandle *_handle;
}


@property (weak, nonatomic) IMChat *chat; // ivar: _chat


-(id)_initWithItem:(id)arg0 emergencyUserHandle:(id)arg1 chat:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)handle;


@end


#endif