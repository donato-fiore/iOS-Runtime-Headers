// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTTIMERSNAPSHOT_H
#define MTTIMERSNAPSHOT_H

@class NSString;
@protocol MTTimerObserver;


#import "MTSnapshotScheduler.h"
#import "MTTimerStorage.h"

@interface MTTimerSnapshot : MTSnapshotScheduler <MTTimerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MTTimerStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


-(id)initWithStorage:(id)arg0 ;
-(void)nextTimerDidChange:(id)arg0 ;
-(void)source:(id)arg0 didAddTimers:(id)arg1 ;
-(void)source:(id)arg0 didDismissTimer:(id)arg1 ;
-(void)source:(id)arg0 didFireTimer:(id)arg1 ;
-(void)source:(id)arg0 didRemoveTimers:(id)arg1 ;
-(void)source:(id)arg0 didUpdateTimers:(id)arg1 ;


@end


#endif