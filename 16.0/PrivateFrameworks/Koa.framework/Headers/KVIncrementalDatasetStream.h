// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVINCREMENTALDATASETSTREAM_H
#define KVINCREMENTALDATASETSTREAM_H



#import "KVDatasetStream.h"

@interface KVIncrementalDatasetStream : KVDatasetStream



-(BOOL)addOrUpdateItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemWithItemId:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)priorVersion;


@end


#endif