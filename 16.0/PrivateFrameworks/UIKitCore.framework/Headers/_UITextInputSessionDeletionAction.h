// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTINPUTSESSIONDELETIONACTION_H
#define _UITEXTINPUTSESSIONDELETIONACTION_H

@class UITextInputSessionAction;



@interface _UITextInputSessionDeletionAction : UITextInputSessionAction

@property (nonatomic) NSUInteger deletionCount; // ivar: _deletionCount
@property (nonatomic) NSUInteger options; // ivar: _options


-(BOOL)changedContent;
-(NSInteger)mergeActionIfPossible:(id)arg0 ;


@end


#endif