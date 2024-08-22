// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECTRANSFERACTIONREPLAYER_H
#define ECTRANSFERACTIONREPLAYER_H



#import "ECLocalActionReplayer.h"

@interface ECTransferActionReplayer : ECLocalActionReplayer



-(id)_allCopyItemsBySourceRemoteIDsForAction:(id)arg0 failedItems:(*id)arg1 ;
-(id)_appendMessagesInAction:(id)arg0 ;
-(id)_deleteItemsInAction:(id)arg0 ;
-(id)_downLoadSourceMessagesInAction:(id)arg0 ;
-(id)_transferItemsInAction:(id)arg0 isMove:(BOOL)arg1 ;
-(id)failActionWithError:(id)arg0 ;
-(id)replayAction;


@end


#endif