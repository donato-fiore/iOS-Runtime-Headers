// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PFBATCHHISTORYFAULTINGARRAY_H
#define _PFBATCHHISTORYFAULTINGARRAY_H

@class PFBatchFaultingArray;


#import "NSPersistentHistoryTransaction.h"

@interface _PFBatchHistoryFaultingArray : PFBatchFaultingArray {
    NSPersistentHistoryTransaction *_transaction;
}




+(Class)classForKeyedUnarchiver;
-(Class)classForCoder;
-(id)initWithPFBatchFaultingArray:(id)arg0 ;
-(id)transaction;
-(void)_setTransaction:(id)arg0 ;


@end


#endif