// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTINPUTSESSIONINSERTIONACTION_H
#define _UITEXTINPUTSESSIONINSERTIONACTION_H

@class UITextInputSessionAction;



@interface _UITextInputSessionInsertionAction : UITextInputSessionAction

@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSUInteger textLength; // ivar: _textLength


-(BOOL)changedContent;
-(NSInteger)mergeActionIfPossible:(id)arg0 ;


@end


#endif