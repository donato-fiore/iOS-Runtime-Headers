// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMODELMIGRATIONACTIONPROCESSOR_H
#define PLMODELMIGRATIONACTIONPROCESSOR_H

@class NSString, PLPhotoLibraryPathManager, PLCoreAnalyticsEventManager, PLTimedPerfCheck, NSProgress;
@protocol NSProgressReporting;

#import <Foundation/Foundation.h>

#import "PLModelMigratorLog.h"

@interface PLModelMigrationActionProcessor : NSObject <NSProgressReporting>

 {
    NSString *_uuid;
    NSString *_uuidTruncated;
    PLPhotoLibraryPathManager *_pathManager;
    NSInteger _type;
    PLCoreAnalyticsEventManager *_analyticsEventManager;
    BOOL _loggerCloseRequired;
    unsigned short _tag;
    CGFloat _token;
    CGFloat _lifetimeToken;
    PLTimedPerfCheck *_lifetimePerfCheck;
    int _pid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreProgressUpdates; // ivar: _ignoreProgressUpdates
@property (retain) PLModelMigratorLog *logger; // ivar: _logger
@property (retain) NSProgress *progress; // ivar: _progress
@property (nonatomic, getter=isSuccess) BOOL success; // ivar: _success
@property (readonly) Class superclass;


-(id)_generateActionMarker;
-(id)_generateActionMarkerBase;
-(id)_generateActionTagMarker;
-(id)_startLogEntryWithName:(id)arg0 ;
-(id)initWithUUID:(id)arg0 pathManager:(id)arg1 migrationActionType:(NSInteger)arg2 analyticsEventManager:(id)arg3 logger:(id)arg4 progressUnitCount:(NSUInteger)arg5 ;
-(void)_initialLog;
-(void)_performActionWithName:(id)arg0 ifRequired:(struct ? )arg1 recordTimedCoreAnalyticsEvent:(id)arg2 coreAnalyticsEventKey:(id)arg3 block:(id)arg4 ;
-(void)_stopLogEntryWithPerfCheck:(id)arg0 ;
-(void)dealloc;
-(void)performActionWithName:(id)arg0 ifRequired:(struct ? )arg1 block:(id)arg2 ;
-(void)performActionWithName:(id)arg0 ifRequired:(struct ? )arg1 recordTimedCoreAnalyticsEvent:(id)arg2 coreAnalyticsEventKey:(id)arg3 block:(id)arg4 ;


@end


#endif