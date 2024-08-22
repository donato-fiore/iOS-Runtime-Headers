// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISMUTABLESTOREINDEX_H
#define ISMUTABLESTOREINDEX_H

@protocol OS_dispatch_queue;


#import "ISStoreIndex.h"

@interface ISMutableStoreIndex : ISStoreIndex

@property (readonly) NSUInteger initialCapacity; // ivar: _initialCapacity
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


-(BOOL)addValue:(struct ? *)arg0 ;
-(BOOL)removeValueForUUID:(unsigned char)arg0 passingTest:(id)arg1 ;
-(BOOL)removeValuePassingTest:(id)arg0 ;
-(id)data;
-(id)initWithStoreFileURL:(id)arg0 capacity:(NSUInteger)arg1 ;
-(void)_extend;
-(void)_extendData;
-(void)performBlock:(id)arg0 ;
-(void)removeAll;


@end


#endif