// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSENDERBLOCKINGTRIAGEACTION_H
#define MSSENDERBLOCKINGTRIAGEACTION_H



#import "MSTriageAction.h"

@interface MSSenderBlockingTriageAction : MSTriageAction {
    BOOL _blockSender;
}




-(id)_changeAction;
-(id)initWithMessageListSelection:(id)arg0 delegate:(id)arg1 blockSender:(BOOL)arg2 ;


@end


#endif