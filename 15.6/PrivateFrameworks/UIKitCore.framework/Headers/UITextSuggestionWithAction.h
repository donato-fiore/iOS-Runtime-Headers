// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITEXTSUGGESTIONWITHACTION_H
#define UITEXTSUGGESTIONWITHACTION_H



#import "UITextSuggestion.h"

@interface UITextSuggestionWithAction : UITextSuggestion

@property (nonatomic) SEL action; // ivar: _action
@property (retain, nonatomic) id *target; // ivar: _target


-(void)performActionWihSender:(id)arg0 ;


@end


#endif