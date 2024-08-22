// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMCALLMONITOR_H
#define IMCALLMONITOR_H

@class CXCallObserver, NSDate, NSString;
@protocol CXCallObserverDelegate;

#import <Foundation/Foundation.h>


@interface IMCallMonitor : NSObject <CXCallObserverDelegate>

 {
    CXCallObserver *_callCenter;
    BOOL _wasOnCall;
}


@property (readonly, retain, nonatomic) NSDate *dateLastCallEnded; // ivar: _lastCallDate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOnCall;
@property (readonly, nonatomic) BOOL isOnTelephonyCall;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;


@end


#endif