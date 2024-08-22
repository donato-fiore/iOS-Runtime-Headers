// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMERINTENTDONOR_H
#define MTTIMERINTENTDONOR_H

@class NSString, NSMutableSet;
@protocol MTTimerObserver, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTTimerStorage.h"

@interface MTTimerIntentDonor : NSObject <MTTimerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableSet *donatedTimerIDs; // ivar: _donatedTimerIDs
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly, nonatomic) MTTimerStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


-(id)initWithStorage:(id)arg0 ;
-(void)_queue_donateCreateTimerIntent:(id)arg0 source:(id)arg1 ;
-(void)nextTimerDidChange:(id)arg0 ;
-(void)source:(id)arg0 didAddTimers:(id)arg1 ;
-(void)source:(id)arg0 didDismissTimer:(id)arg1 ;
-(void)source:(id)arg0 didFireTimer:(id)arg1 ;
-(void)source:(id)arg0 didRemoveTimers:(id)arg1 ;
-(void)source:(id)arg0 didUpdateTimers:(id)arg1 ;


@end


#endif