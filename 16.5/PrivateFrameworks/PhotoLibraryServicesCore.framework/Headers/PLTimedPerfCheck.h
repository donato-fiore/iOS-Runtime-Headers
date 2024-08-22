// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTIMEDPERFCHECK_H
#define PLTIMEDPERFCHECK_H


#import <Foundation/Foundation.h>


@interface PLTimedPerfCheck : NSObject {
    BOOL _isSessionCompleted;
    os_unfair_lock_s _sessionCompletedLock;
    *pc_session _pc_session;
    CGFloat _initialProcessMemoryPeak;
    CGFloat _initialProcessMemoryCurrent;
}




+(id)start;
-(id)endSessionAndReturnPerfCheckExtraInformation;
-(id)init;
-(id)perfCheckLogStringWithPerfCheckInfo:(id)arg0 ;
-(id)stop;
-(struct PLUnitMultiplier )perfUnitsFromPerfCheckInfo:(id)arg0 ;
-(void)dealloc;
-(void)setup;


@end


#endif