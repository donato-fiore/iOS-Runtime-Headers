// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMASSISTANTMESSAGESEARCHCHATPARTICIPANT_H
#define IMASSISTANTMESSAGESEARCHCHATPARTICIPANT_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface IMAssistantMessageSearchChatParticipant : NSObject

@property (readonly, copy, nonatomic) NSArray *contactIdentifiers; // ivar: _contactIdentifiers
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) BOOL isMe; // ivar: _isMe


-(BOOL)matchesPerson:(id)arg0 withUnifiedContactIdentifiers:(id)arg1 ;
-(id)initWithHandle:(id)arg0 contactIdentifiers:(id)arg1 isMe:(BOOL)arg2 ;


@end


#endif