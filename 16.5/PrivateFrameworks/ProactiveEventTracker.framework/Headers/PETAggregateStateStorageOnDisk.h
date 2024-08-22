// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PETAGGREGATESTATESTORAGEONDISK_H
#define PETAGGREGATESTATESTORAGEONDISK_H

@class NSString;


#import "PETAggregateStateStorage.h"

@interface PETAggregateStateStorageOnDisk : PETAggregateStateStorage {
    NSString *_path;
    int _fd;
    *void _bytes;
    NSUInteger _mappedLen;
    uint8_t _dead;
    _opaque_pthread_mutex_t _localLock;
}




-(BOOL)resetLocked;
-(NSUInteger)_reserveCapacity:(unsigned int)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(void)_die;
-(void)_remapWithFlock:(BOOL)arg0 ;
-(void)dealloc;
-(void)expand:(NSUInteger)arg0 andRunWithLock:(id)arg1 ;
-(void)reset;
-(void)saveCorruptState;


@end


#endif