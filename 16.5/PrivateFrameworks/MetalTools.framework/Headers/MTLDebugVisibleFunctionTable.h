// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGVISIBLEFUNCTIONTABLE_H
#define MTLDEBUGVISIBLEFUNCTIONTABLE_H

@protocol MTLDebugResourcePurgeable;


#import "MTLToolsVisibleFunctionTable.h"
#import "MTLToolsObject.h"

@interface MTLDebugVisibleFunctionTable : MTLToolsVisibleFunctionTable <MTLDebugResourcePurgeable>

 {
    atomic<int> _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
    MTLToolsObject *_pipelineState;
}


@property (readonly) NSUInteger functionCount; // ivar: _functionCount
@property (readonly) NSUInteger stage; // ivar: _stage


-(BOOL)purgeableStateValidForRendering;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)initWithVisibleFunctionTable:(id)arg0 parent:(id)arg1 descriptor:(id)arg2 pipelineState:(id)arg3 stage:(NSUInteger)arg4 ;
-(id)initWithVisibleFunctionTable:(id)arg0 parent:(id)arg1 descriptor:(id)arg2 stage:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)lockPurgeableState;
-(void)setFunction:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFunctions:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)unlockPurgeableState;


@end


#endif