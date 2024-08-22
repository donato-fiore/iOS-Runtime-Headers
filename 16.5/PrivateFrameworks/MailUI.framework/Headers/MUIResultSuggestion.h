// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUIRESULTSUGGESTION_H
#define MUIRESULTSUGGESTION_H

@class NSArray, EMMessageList, EMMessageObjectID;


#import "MUISearchSuggestion.h"

@interface MUIResultSuggestion : MUISearchSuggestion

@property (readonly, nonatomic) NSArray *authorEmailAddresses; // ivar: _authorEmailAddresses
@property (readonly, nonatomic) NSArray *authors; // ivar: _authors
@property (readonly, nonatomic) EMMessageList *messageList; // ivar: _messageList
@property (readonly, nonatomic) EMMessageObjectID *objectID; // ivar: _objectID


-(id)initWithObjectID:(id)arg0 messageList:(id)arg1 authors:(id)arg2 authorEmailAddresses:(id)arg3 ;


@end


#endif