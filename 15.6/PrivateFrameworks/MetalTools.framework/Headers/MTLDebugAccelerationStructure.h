// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLDEBUGACCELERATIONSTRUCTURE_H
#define MTLDEBUGACCELERATIONSTRUCTURE_H

@protocol MTLDebugResourcePurgeable;


#import "MTLToolsAccelerationStructure.h"
#import "MTLDebugBuffer.h"

@interface MTLDebugAccelerationStructure : MTLToolsAccelerationStructure <MTLDebugResourcePurgeable>

 {
    atomic<int> _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
    MTLDebugBuffer *_debugBuffer;
}




-(BOOL)purgeableStateValidForRendering;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)buffer;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(void)dealloc;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;


@end


#endif