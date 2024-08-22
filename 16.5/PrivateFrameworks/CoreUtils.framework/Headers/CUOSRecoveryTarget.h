// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUOSRECOVERYTARGET_H
#define CUOSRECOVERYTARGET_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUBLEAdvertiser.h"

@interface CUOSRecoveryTarget : NSObject {
    BOOL _activateCalled;
    CUBLEAdvertiser *_bleAdvertiser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler


-(id)init;
-(void)_activate;
-(void)_invalidate;
-(void)_invalidated;
-(void)_reportProgressType:(int)arg0 ;
-(void)activate;
-(void)invalidate;


@end


#endif