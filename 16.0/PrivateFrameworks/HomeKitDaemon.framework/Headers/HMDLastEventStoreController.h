// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLASTEVENTSTORECONTROLLER_H
#define HMDLASTEVENTSTORECONTROLLER_H

@class HMELastEventStore;

#import <Foundation/Foundation.h>


@interface HMDLastEventStoreController : NSObject

@property (readonly, nonatomic) HMELastEventStore *eventStore; // ivar: _eventStore


-(id)initWithWithEventStore:(id)arg0 ;
-(void)didRemoveAccessory:(id)arg0 ;
-(void)didRemoveHome:(id)arg0 ;
-(void)didRemoveMediaSystem:(id)arg0 ;


@end


#endif