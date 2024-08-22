// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSENDERCHATITEM_H
#define IMSENDERCHATITEM_H

@class NSString;


#import "IMTranscriptChatItem.h"
#import "IMHandle.h"

@interface IMSenderChatItem : IMTranscriptChatItem

@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) IMHandle *handle; // ivar: _handle
@property (readonly, nonatomic) NSInteger transcriptSharingMessageType; // ivar: _transcriptSharingMessageType


-(id)_initWithItem:(id)arg0 handle:(id)arg1 ;
-(id)_initWithItem:(id)arg0 handle:(id)arg1 displayName:(id)arg2 transcriptSharingMessageType:(NSInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif