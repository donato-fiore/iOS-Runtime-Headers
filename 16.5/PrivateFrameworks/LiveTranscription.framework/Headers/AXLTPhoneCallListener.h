// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXLTPHONECALLLISTENER_H
#define AXLTPHONECALLLISTENER_H

@class TUCallCenter, CXCallObserver, NSString;
@protocol CXCallObserverDelegate, AXLTPhoneCallListenerDelegate;

#import <Foundation/Foundation.h>


@interface AXLTPhoneCallListener : NSObject <CXCallObserverDelegate>



@property (retain, nonatomic) TUCallCenter *callCenter; // ivar: _callCenter
@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXLTPhoneCallListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCallActive;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger utilityType; // ivar: _utilityType


+(id)sharedInstance;
-(id)init;
-(void)_startObserving;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)callStatusChanged:(id)arg0 ;


@end


#endif