// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLASTEVENTSTORECONTROLLER_H
#define HMDLASTEVENTSTORECONTROLLER_H

@class NSString, HMELastEventStore;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMDLastEventStoreController : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMELastEventStore *eventStore; // ivar: _eventStore
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithWithEventStore:(id)arg0 ;
-(void)didRemoveAccessory:(id)arg0 ;
-(void)didRemoveHome:(id)arg0 ;
-(void)didRemoveMediaSystem:(id)arg0 ;


@end


#endif