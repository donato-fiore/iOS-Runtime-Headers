// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAPRESENTATIONMODIFIERGROUP_H
#define CAPRESENTATIONMODIFIERGROUP_H


#import <Foundation/Foundation.h>


@interface CAPresentationModifierGroup : NSObject {
    *void _shmem;
    NSUInteger _capacity;
    NSUInteger _count;
    NSUInteger _totalSize;
    unsigned int _localId;
}


@property (readonly) NSUInteger capacity;
@property (readonly) NSUInteger count;
@property (nonatomic) BOOL updatesAsynchronously;


+(id)groupWithCapacity:(NSUInteger)arg0 ;
-(*void)_renderShmem;
-(*void)shmem;
-(NSUInteger)nextSlotWithPayloadSize:(NSUInteger)arg0 ;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)_setLocalContextId:(unsigned int)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)flushLocally;
-(void)flushWithTransaction;
-(void)markWritten:(NSUInteger)arg0 ;
-(void)resetBitMask;


@end


#endif