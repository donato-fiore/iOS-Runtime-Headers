// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTINPUTSESSIONDICTATIONBEGANACTION_H
#define _UITEXTINPUTSESSIONDICTATIONBEGANACTION_H

@class UITextInputSessionAction;



@interface _UITextInputSessionDictationBeganAction : UITextInputSessionAction

@property (nonatomic) NSUInteger dictationBeganCount; // ivar: _dictationBeganCount
@property (nonatomic) NSUInteger modelessUsedAtLeastOnceCount; // ivar: _modelessUsedAtLeastOnceCount


-(NSInteger)mergeActionIfPossible:(id)arg0 ;
-(id)description;


@end


#endif