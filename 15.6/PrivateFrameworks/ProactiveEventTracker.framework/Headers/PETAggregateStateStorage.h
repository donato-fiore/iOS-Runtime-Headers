// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PETAGGREGATESTATESTORAGE_H
#define PETAGGREGATESTATESTORAGE_H


#import <Foundation/Foundation.h>


@interface PETAggregateStateStorage : NSObject



+(id)storageInMemory;
+(id)storageOnDisk:(id)arg0 ;
-(BOOL)resetLocked;
-(void)expand:(NSUInteger)arg0 andRunWithLock:(id)arg1 ;
-(void)reset;
-(void)runWithLock:(id)arg0 ;
-(void)saveCorruptState;


@end


#endif