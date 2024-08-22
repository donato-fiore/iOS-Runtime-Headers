// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLTPHONECALLLISTENER_H
#define AXLTPHONECALLLISTENER_H

@class NSArray, CXCallObserver, NSString;
@protocol CXCallObserverDelegate, AXLTPhoneCallListenerDelegate;

#import <Foundation/Foundation.h>


@interface AXLTPhoneCallListener : NSObject <CXCallObserverDelegate>



@property (readonly, nonatomic) NSArray *activeCallIDs;
@property (retain, nonatomic) CXCallObserver *callObserver; // ivar: _callObserver
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXLTPhoneCallListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isCallActive; // ivar: _isCallActive
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_startObserving;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;


@end


#endif