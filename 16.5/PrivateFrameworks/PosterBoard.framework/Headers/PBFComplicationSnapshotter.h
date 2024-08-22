// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFCOMPLICATIONSNAPSHOTTER_H
#define PBFCOMPLICATIONSNAPSHOTTER_H

@class NSString, NSHashTable, CHSWidget, CHUISWidgetHostViewController, UIImage, NSError;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "PBFComplicationSnapshotRequest.h"

@interface PBFComplicationSnapshotter : NSObject <BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    NSString *_snapshotterIdentifier;
    CGFloat _lock_startTime;
    CGFloat _lock_endTime;
    BOOL _lock_finished;
    BOOL _lock_started;
    BOOL _lock_cleanedUp;
    BOOL _lock_invalidated;
    NSHashTable *_lock_observers;
    CHSWidget *_widgetWithIntent;
    CHUISWidgetHostViewController *_hostViewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat elapsedTime;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PBFComplicationSnapshotRequest *request; // ivar: _request
@property (readonly, nonatomic) UIImage *snapshot; // ivar: _snapshot
@property (readonly, nonatomic) NSError *snapshotError; // ivar: _snapshotError
@property (readonly) Class superclass;


-(BOOL)_hasStarted;
-(BOOL)_isFinished;
-(BOOL)_main_kickoffHostViewController:(id)arg0 ;
-(BOOL)_wasCleanedUp;
-(BOOL)_wasInvalidated;
-(BOOL)start;
-(id)initWithComplicationSnapshotRequest:(id)arg0 ;
-(void)_finishWithImage:(id)arg0 error:(id)arg1 ;
-(void)_main_cleanup;
-(void)addObserver:(id)arg0 ;
-(void)cancelWithReason:(id)arg0 ;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;


@end


#endif