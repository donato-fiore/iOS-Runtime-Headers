// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKSTANDALONEFIRSTUNLOCKCOORDINATOR_H
#define NPKSTANDALONEFIRSTUNLOCKCOORDINATOR_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKStandaloneFirstUnlockCoordinator : NSObject

@property (retain, nonatomic) NSMutableArray *blocksToPerformAfterFirstDeviceUnlock; // ivar: _blocksToPerformAfterFirstDeviceUnlock
@property (nonatomic) int firstDeviceUnlockRegistrationToken; // ivar: _firstDeviceUnlockRegistrationToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithQueue:(id)arg0 ;
-(void)_performFirstUnlockWork;
-(void)dealloc;
-(void)performSubjectToFirstUnlock:(id)arg0 ;


@end


#endif