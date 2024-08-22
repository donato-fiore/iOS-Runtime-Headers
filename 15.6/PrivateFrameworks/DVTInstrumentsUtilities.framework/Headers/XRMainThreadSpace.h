// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XRMAINTHREADSPACE_H
#define XRMAINTHREADSPACE_H

@class NSMutableSet;


#import "XRSpace.h"

@interface XRMainThreadSpace : XRSpace {
    NSMutableSet *_mainThreadOps;
}




+(id)sharedInstance;
-(BOOL)isSerial;
-(id)_activeRunLoopModes;
-(id)_scheduleOperationFromCurrentQueue:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)spaceName;
-(void)_executeOp:(id)arg0 ;
-(void)_queueOperationToRunOnMainThread:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif