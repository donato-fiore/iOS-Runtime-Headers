// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSMOVETRIAGEACTION_H
#define MSMOVETRIAGEACTION_H

@class EMMailbox, ECMessageFlagChange;


#import "MSTriageAction.h"

@interface MSMoveTriageAction : MSTriageAction {
    EMMailbox *_destinationMailbox;
    NSInteger _destinationMailboxType;
    ECMessageFlagChange *_flagChange;
    BOOL _copyMessages;
}




-(id)_changeAction;
-(id)initWithMessageListSelection:(id)arg0 delegate:(id)arg1 destinationMailbox:(id)arg2 flagChange:(id)arg3 copyMessages:(BOOL)arg4 ;
-(id)initWithMessageListSelection:(id)arg0 delegate:(id)arg1 destinationMailboxType:(NSInteger)arg2 flagChange:(id)arg3 copyMessages:(BOOL)arg4 ;


@end


#endif