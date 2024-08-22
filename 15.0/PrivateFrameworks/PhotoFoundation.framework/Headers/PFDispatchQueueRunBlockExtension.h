// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFDISPATCHQUEUERUNBLOCKEXTENSION_H
#define PFDISPATCHQUEUERUNBLOCKEXTENSION_H



#import "PFDispatchQueueExtension.h"

@interface PFDispatchQueueRunBlockExtension : PFDispatchQueueExtension



+(id)alloc;
+(id)sharedRunBlockExtension;
+(void)initialize;
-(id)init;
-(id)initInternal;
-(id)queue:(id)arg0 willTargetQueue:(id)arg1 ;
-(void)installOnQueue:(id)arg0 ;
-(void)queue:(id)arg0 didDequeue:(id)arg1 skipExecution:(id)arg2 ;
-(void)queue:(id)arg0 didExecute:(id)arg1 ;
-(void)queue:(id)arg0 skippedExecuting:(id)arg1 ;


@end


#endif