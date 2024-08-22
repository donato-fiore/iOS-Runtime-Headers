// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSTRIAGEACTION_H
#define MSTRIAGEACTION_H

@class EMMessageRepository;
@protocol MSTriageActionDelegate;

#import <Foundation/Foundation.h>

#import "MSMessageListItemSelection.h"

@interface MSTriageAction : NSObject

@property (readonly, weak, nonatomic) NSObject<MSTriageActionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) MSMessageListItemSelection *messageListItemSelection; // ivar: _messageListItemSelection
@property (readonly, nonatomic) EMMessageRepository *messageRepository;


+(id)log;
+(void)_performAction:(id)arg0 messageRepository:(id)arg1 undoManager:(id)arg2 actionName:(id)arg3 ;
-(id)_changeAction;
-(id)initWithMessageListSelection:(id)arg0 delegate:(id)arg1 ;
-(void)performWithUndoManager:(id)arg0 actionName:(id)arg1 completion:(id)arg2 ;


@end


#endif