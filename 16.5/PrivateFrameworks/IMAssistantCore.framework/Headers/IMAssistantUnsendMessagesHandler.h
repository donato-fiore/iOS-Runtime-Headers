// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMASSISTANTUNSENDMESSAGESHANDLER_H
#define IMASSISTANTUNSENDMESSAGESHANDLER_H

@class NSString;
@protocol INUnsendMessagesIntentHandling;


#import "IMAssistantMessageQueryHandler.h"

@interface IMAssistantUnsendMessagesHandler : IMAssistantMessageQueryHandler <INUnsendMessagesIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)makeRetractedMessageItem:(id)arg0 ;
-(void)chatsForMessageIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)handleUnsendMessages:(id)arg0 completion:(id)arg1 ;
-(void)retractPartIndex:(NSInteger)arg0 fromMessageItem:(id)arg1 chat:(id)arg2 backwardCompatabilityText:(id)arg3 ;


@end


#endif