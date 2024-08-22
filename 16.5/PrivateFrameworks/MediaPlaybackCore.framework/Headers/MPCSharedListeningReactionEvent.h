// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCSHAREDLISTENINGREACTIONEVENT_H
#define MPCSHAREDLISTENINGREACTIONEVENT_H

@class MPModelGenericObject, NSString;

#import <Foundation/Foundation.h>


@interface MPCSharedListeningReactionEvent : NSObject

@property (readonly, nonatomic) MPModelGenericObject *item; // ivar: _item
@property (readonly, copy, nonatomic) NSString *reaction; // ivar: _reaction
@property (readonly, copy, nonatomic) NSString *reactionIdentifier; // ivar: _reactionIdentifier


-(id)description;
-(id)initWithReaction:(id)arg0 reactionIdentifier:(id)arg1 item:(id)arg2 ;


@end


#endif