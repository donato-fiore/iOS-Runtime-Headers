// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKTUCONVERSATIONCHATITEM_H
#define CKTUCONVERSATIONCHATITEM_H

@class NSUUID;


#import "CKBalloonChatItem.h"

@interface CKTUConversationChatItem : CKBalloonChatItem

@property (readonly, nonatomic) char color;
@property (readonly, weak, nonatomic) NSUUID *tuConversationUUID;


-(BOOL)isFromMe;
-(BOOL)shouldCacheSize;
-(Class)balloonViewClass;
-(id)sender;
-(id)time;
-(void)configureBalloonView:(id)arg0 ;


@end


#endif