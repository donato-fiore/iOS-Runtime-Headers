// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNCANCELLER_H
#define VNCANCELLER_H


#import <Foundation/Foundation.h>


@interface VNCanceller : NSObject {
    id *_signallingBlock;
    os_unfair_lock_s _lock;
    BOOL _signalled;
}




// -(BOOL)tryToPerformBlock:(id)arg0 usingSignallingBlock:(unk)arg1  ;
-(BOOL)wasSignalled;
-(id)init;
-(void)_releaseSignallingBlock;
-(void)reset;
-(void)signalCancellation;


@end


#endif