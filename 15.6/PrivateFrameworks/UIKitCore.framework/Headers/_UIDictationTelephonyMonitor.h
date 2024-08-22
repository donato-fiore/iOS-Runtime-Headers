// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDICTATIONTELEPHONYMONITOR_H
#define _UIDICTATIONTELEPHONYMONITOR_H

@class CXCallObserver, NSString;
@protocol CXCallObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIDictationTelephonyMonitor : NSObject <CXCallObserverDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CXCallObserver *_callObserver;
}


@property (copy) id *activityChanged; // ivar: _activityChanged
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL telephonyActivity; // ivar: _telephonyActivity


-(id)init;
-(void)_backgroundInit;
-(void)_backgroundReset;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)start;


@end


#endif