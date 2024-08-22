// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUTASKTHREADSTATES_H
#define VMUTASKTHREADSTATES_H


#import <Foundation/Foundation.h>


@interface VMUTaskThreadStates : NSObject {
    *void _threadStates;
    *NSUInteger _stackPointers;
}


@property (readonly, nonatomic) unsigned int threadCount; // ivar: _threadCount
@property (readonly, nonatomic) unsigned int threadStateSize; // ivar: _threadStateSize


-(*void)threadStateForThreadNum:(unsigned int)arg0 ;
-(NSUInteger)stackPointerForThreadNum:(unsigned int)arg0 ;
-(id)initWithPid:(int)arg0 task:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif