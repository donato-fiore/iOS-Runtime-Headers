// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTINPUTSESSIONDELETIONACTION_H
#define _UITEXTINPUTSESSIONDELETIONACTION_H

@class UITextInputSessionAction;



@interface _UITextInputSessionDeletionAction : UITextInputSessionAction

@property (nonatomic) NSUInteger deletionCount; // ivar: _deletionCount


-(BOOL)changedContent;
-(NSInteger)mergeActionIfPossible:(id)arg0 ;


@end


#endif