// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGEEDITCHATITEM_H
#define IMMESSAGEEDITCHATITEM_H

@class NSString, NSAttributedString, NSArray;
@protocol IMVisibleAssociatedMessageHost;


#import "IMAssociatedMessageChatItem.h"

@interface IMMessageEditChatItem : IMAssociatedMessageChatItem <IMVisibleAssociatedMessageHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSAttributedString *editedBody;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=_setVisibleAssociatedMessageChatItems:) NSArray *visibleAssociatedMessageChatItems; // ivar: _visibleAssociatedMessageChatItems




@end


#endif