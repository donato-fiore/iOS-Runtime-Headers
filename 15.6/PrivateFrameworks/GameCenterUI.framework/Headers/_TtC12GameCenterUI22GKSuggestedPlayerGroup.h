// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12GAMECENTERUI22GKSUGGESTEDPLAYERGROUP_H
#define _TTC12GAMECENTERUI22GKSUGGESTEDPLAYERGROUP_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface _TtC12GameCenterUI22GKSuggestedPlayerGroup : NSObject {
    ? players;
    ? groupName;
    ? messagesGroupIdentifier;
    ? conversationIdentifier;
}


@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, readonly) BOOL fromPeopleSuggester;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, readonly) BOOL isNearby;
@property (nonatomic, copy) NSString *messagesGroupIdentifier;
@property (nonatomic, copy) NSArray *players;
@property (nonatomic) NSInteger source; // ivar: source


-(id)init;


@end


#endif