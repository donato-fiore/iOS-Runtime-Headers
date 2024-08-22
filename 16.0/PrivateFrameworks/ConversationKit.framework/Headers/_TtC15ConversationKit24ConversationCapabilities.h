// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT24CONVERSATIONCAPABILITIES_H
#define _TTC15CONVERSATIONKIT24CONVERSATIONCAPABILITIES_H


#import <Foundation/Foundation.h>


@interface _TtC15ConversationKit24ConversationCapabilities : NSObject

@property (nonatomic) BOOL captioningAccessibilitySettingEnabled;
@property (nonatomic, readonly) BOOL isCaptioningSupported;


+(id)captionEnablementChangedNotification;
+(id)shared;
-(id)init;
-(void)dealloc;


@end


#endif