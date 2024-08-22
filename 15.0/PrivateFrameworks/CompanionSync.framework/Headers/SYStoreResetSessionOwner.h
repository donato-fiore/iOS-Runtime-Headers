// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SYSTORERESETSESSIONOWNER_H
#define SYSTORERESETSESSIONOWNER_H

@class NSMutableArray;


#import "SYStoreSessionOwner.h"

@interface SYStoreResetSessionOwner : SYStoreSessionOwner {
    NSMutableArray *_buffer;
    unsigned int _bufferedState;
}


@property (copy, nonatomic) id *fetchNextBatch; // ivar: _fetchNextBatch


-(BOOL)isResetSync;
-(id)init;
-(unsigned int)_sendBufferedChanges:(id)arg0 ;
// -(unsigned int)syncSession:(id)arg0 enqueueChanges:(id)arg1 error:(unk)arg2  ;


@end


#endif