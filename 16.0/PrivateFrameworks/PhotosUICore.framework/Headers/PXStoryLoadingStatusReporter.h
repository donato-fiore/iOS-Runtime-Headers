// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYLOADINGSTATUSREPORTER_H
#define PXSTORYLOADINGSTATUSREPORTER_H

@class NSMutableDictionary, NSDate;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PXStoryLoadingStatusReporter : NSObject {
    os_unfair_lock_s _lock;
    NSUInteger _lock_statesCount;
    NSUInteger _lock_statesCapacity;
    *? _lock_states;
    NSMutableDictionary *_lock_stateIndexByClipIdentifier;
    NSDate *_lock_lastUserActivity;
}


@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) NSUInteger logContext; // ivar: _logContext


-(id)init;
-(struct ? *)_lock_stateForClipIdentifier:(NSInteger)arg0 ;
-(void)_lock_updateStatusForLoadingState:(struct ? *)arg0 error:(id)arg1 clipIdentifier:(NSInteger)arg2 ;
-(void)dealloc;
-(void)notifyLoadingStatus:(unsigned char)arg0 error:(id)arg1 forClipIdentifier:(NSInteger)arg2 ;
-(void)notifyPreloadingCompleteForClipIdentifier:(NSInteger)arg0 ;
-(void)notifyPreloadingProgress:(CGFloat)arg0 error:(id)arg1 forClipIdentifier:(NSInteger)arg2 ;
-(void)notifyStartedPreloadingClipIdentifier:(NSInteger)arg0 ;
-(void)notifyUserDidNavigate;
-(void)notifyVisibility:(unsigned char)arg0 forClipIdentifier:(NSInteger)arg1 ;


@end


#endif