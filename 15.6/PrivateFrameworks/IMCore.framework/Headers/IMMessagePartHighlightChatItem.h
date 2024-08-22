// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMMESSAGEPARTHIGHLIGHTCHATITEM_H
#define IMMESSAGEPARTHIGHLIGHTCHATITEM_H

@class NSString;


#import "IMMessageChatItem.h"

@interface IMMessagePartHighlightChatItem : IMMessageChatItem

@property (readonly, nonatomic) IMAssociatedMessageGeometryDescriptor geometryDescriptor;
@property (readonly, nonatomic) BOOL highlightedMessageIsFromMe; // ivar: _highlightedMessageIsFromMe
@property (readonly, nonatomic) NSString *highlightedMessagePartGUID; // ivar: _highlightedMessagePartGUID
@property (readonly, nonatomic) NSUInteger highlightedMessagePartIndex; // ivar: _highlightedMessagePartIndex
@property (readonly, nonatomic) _NSRange highlightedMessagePartRange; // ivar: _highlightedMessagePartRange


-(id)_initWithItem:(id)arg0 highlightedMessagePartGUID:(id)arg1 highlightedMessagePartIndex:(NSInteger)arg2 highlightedMessagePartRange:(struct _NSRange )arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif