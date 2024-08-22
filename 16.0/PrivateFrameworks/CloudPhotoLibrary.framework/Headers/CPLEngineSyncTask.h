// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINESYNCTASK_H
#define CPLENGINESYNCTASK_H

@class NSDate, NSString, NSArray;
@protocol CPLEngineSyncTaskDelegate, CPLEngineStoreUserIdentifier;

#import <Foundation/Foundation.h>

#import "CPLEngineLibrary.h"
#import "CPLSyncSession.h"

@interface CPLEngineSyncTask : NSObject {
    os_unfair_lock_s _phaseDescriptionLock;
    NSDate *_lastChangeDateForPhaseDescription;
}


@property (getter=isCancelled, setter=_setCancelled:) BOOL cancelled; // ivar: _cancelled
@property (retain) NSObject<CPLEngineSyncTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CPLEngineLibrary *engineLibrary; // ivar: _engineLibrary
@property (nonatomic) BOOL forceSync; // ivar: _forceSync
@property (nonatomic) BOOL foreground; // ivar: _foreground
@property (copy) NSString *phaseDescription; // ivar: _phaseDescription
@property (readonly, nonatomic) NSArray *scopesForTask;
@property (readonly, nonatomic) CPLSyncSession *session; // ivar: _session
@property (readonly, nonatomic) NSString *taskIdentifier;
@property (retain, nonatomic) NSObject<CPLEngineStoreUserIdentifier> *transportUserIdentifier; // ivar: _transportUserIdentifier


+(id)taskWithEngineLibrary:(id)arg0 session:(id)arg1 ;
-(NSUInteger)diskPressureState;
-(id)description;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 ;
-(id)phaseDescriptionLastChangeDate:(*id)arg0 ;
-(void)cancel;
-(void)launch;
-(void)launchTransportTask:(id)arg0 withTransportGroup:(id)arg1 ;
-(void)taskDidFinishWithError:(id)arg0 ;
-(void)taskDidProgress:(float)arg0 userInfo:(id)arg1 ;


@end


#endif