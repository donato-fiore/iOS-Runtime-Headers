// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMASSISTANTRELEVANTCHATMATCHINGRECIPIENTS_H
#define IMASSISTANTRELEVANTCHATMATCHINGRECIPIENTS_H

@class IMChat, NSArray;

#import <Foundation/Foundation.h>


@interface IMAssistantRelevantChatMatchingRecipients : NSObject

@property (retain, nonatomic) IMChat *chat; // ivar: _chat
@property (copy, nonatomic) NSArray *resolvedPersons; // ivar: _resolvedPersons


-(id)description;
-(id)initWithChat:(id)arg0 resolvedPersons:(id)arg1 ;


@end


#endif