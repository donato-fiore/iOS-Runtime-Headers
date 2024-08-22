// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNCHANGEHISTORYCONTACTREFILLSTRATEGY_H
#define _CNCHANGEHISTORYCONTACTREFILLSTRATEGY_H

@class NSArray;
@protocol CNEnumeratorRefillStrategy;

#import <Foundation/Foundation.h>

#import "CNContactStore.h"

@interface _CNChangeHistoryContactRefillStrategy : NSObject <CNEnumeratorRefillStrategy>

 {
    BOOL _unifyResults;
    NSArray *_keys;
    CNContactStore *_contactStore;
}




-(id)batchesToRepresentObjects:(id)arg0 suggestedBatchSize:(NSUInteger)arg1 ;
-(id)objectsRepresentedByBatch:(id)arg0 ;


@end


#endif