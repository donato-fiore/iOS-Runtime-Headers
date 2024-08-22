// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCOREDUETLOGEVENTOBSERVER_H
#define HMDCOREDUETLOGEVENTOBSERVER_H

@class HMFObject, NSString;
@protocol HMMLogEventObserver;


#import "HMDDuetEventManager.h"

@interface HMDCoreDuetLogEventObserver : HMFObject <HMMLogEventObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDuetEventManager *duetEventManager; // ivar: _duetEventManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)mapHMDSourceToDKHomeKitSource:(NSUInteger)arg0 ;
-(id)initWithDuetEventManager:(id)arg0 ;
-(void)didReceiveEventFromDispatcher:(id)arg0 ;


@end


#endif