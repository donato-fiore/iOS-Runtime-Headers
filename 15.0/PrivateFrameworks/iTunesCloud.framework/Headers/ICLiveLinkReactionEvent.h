// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICLIVELINKREACTIONEVENT_H
#define ICLIVELINKREACTIONEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ICLiveLinkReactionEvent : NSObject

@property (readonly, copy, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, copy, nonatomic) NSString *reaction; // ivar: _reaction
@property (readonly, copy, nonatomic) NSString *reactionIdentifier; // ivar: _reactionIdentifier


-(id)description;
-(id)initWithReaction:(id)arg0 reactionIdentifier:(id)arg1 itemIdentifier:(id)arg2 ;


@end


#endif