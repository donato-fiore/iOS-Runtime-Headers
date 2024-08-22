// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXEDITBATCHREVERTACTION_H
#define PXEDITBATCHREVERTACTION_H



#import "PXEditBatchAction.h"

@interface PXEditBatchRevertAction : PXEditBatchAction



-(id)localizedActionName;
-(id)localizedProgressToastOngoingTitle;
-(id)localizedProgressToastRedoTitle;
-(id)localizedProgressToastSuccessTitle;
-(id)localizedProgressToastUndoTitle;
-(void)performAction:(id)arg0 ;


@end


#endif