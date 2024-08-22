// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYSTOREDELTASESSIONOWNER_H
#define SYSTOREDELTASESSIONOWNER_H

@class NSArray;


#import "SYStoreSessionOwner.h"

@interface SYStoreDeltaSessionOwner : SYStoreSessionOwner {
    NSArray *_changes;
    NSUInteger _currentIdx;
}


@property (readonly, nonatomic) NSUInteger changeCount;


-(id)initWithChanges:(id)arg0 ;
// -(unsigned int)syncSession:(id)arg0 enqueueChanges:(id)arg1 error:(unk)arg2  ;


@end


#endif