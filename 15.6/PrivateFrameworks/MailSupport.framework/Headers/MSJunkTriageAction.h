// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSJUNKTRIAGEACTION_H
#define MSJUNKTRIAGEACTION_H



#import "MSMoveTriageAction.h"

@interface MSJunkTriageAction : MSMoveTriageAction

@property (readonly, nonatomic) BOOL hasNonJunkMessages;


+(BOOL)hasNonJunkMessagesInSelection:(id)arg0 ;
-(id)initWithMessageListSelection:(id)arg0 delegate:(id)arg1 ;


@end


#endif