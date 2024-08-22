// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCALLOBSERVER_H
#define HMDCALLOBSERVER_H

@class HMFObject, NSString, CXCallObserver;
@protocol CXCallObserverDelegate;



@interface HMDCallObserver : HMFObject <CXCallObserverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasActiveCalls;
@property (readonly) NSUInteger hash;
@property (readonly) CXCallObserver *observer; // ivar: _observer
@property (readonly) Class superclass;


+(BOOL)isActiveCall:(id)arg0 ;
+(id)sharedObserver;
-(id)init;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)start;


@end


#endif