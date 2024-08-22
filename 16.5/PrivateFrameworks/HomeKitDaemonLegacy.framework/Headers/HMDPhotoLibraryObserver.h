// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPHOTOLIBRARYOBSERVER_H
#define HMDPHOTOLIBRARYOBSERVER_H

@class HMFObject, NSUUID, HMFTimer, NSString, NSDate;
@protocol HMDPhotoLibraryDelegate, HMFTimerDelegate, HMDPhotoLibraryObserverDelegate, OS_dispatch_queue;


#import "HMDPhotoLibrary.h"

@interface HMDPhotoLibraryObserver : HMFObject <HMDPhotoLibraryDelegate, HMFTimerDelegate>



@property (readonly) NSUUID *UUID; // ivar: _UUID
@property (readonly) CGFloat changeDebounceLimit; // ivar: _changeDebounceLimit
@property (readonly) HMFTimer *changeDebounceTimer; // ivar: _changeDebounceTimer
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDPhotoLibraryObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSDate *initiallyDebouncedChangeDate; // ivar: _initiallyDebouncedChangeDate
@property (readonly) HMFTimer *majorUpdateTimer; // ivar: _majorUpdateTimer
@property (readonly) HMFTimer *minorUpdateTimer; // ivar: _minorUpdateTimer
@property (readonly) HMDPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 photoLibrary:(id)arg2 ;
-(id)initWithUUID:(id)arg0 workQueue:(id)arg1 photoLibrary:(id)arg2 minorUpdateTimer:(id)arg3 majorUpdateTimer:(id)arg4 changeDebounceTimer:(id)arg5 changeDebounceLimit:(CGFloat)arg6 ;
-(id)logIdentifier;
-(void)configure;
-(void)invalidate;
-(void)timerDidFire:(id)arg0 ;


@end


#endif