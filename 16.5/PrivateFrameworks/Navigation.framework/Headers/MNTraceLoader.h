// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNTRACELOADER_H
#define MNTRACELOADER_H


#import <Foundation/Foundation.h>

#import "MNTrace.h"

@interface MNTraceLoader : NSObject {
    MNTrace *_trace;
}




-(BOOL)_executeQuery:(id)arg0 rowHandler:(id)arg1 ;
-(BOOL)_loadAnnotatedUserBehaviorTable;
-(BOOL)_loadAnnotatedUserEnvironmentTable;
-(BOOL)_loadCompassHeadingDataTable;
-(BOOL)_loadDirectionsTableAllowDeprecatedProtocol:(BOOL)arg0 outError:(*id)arg1 ;
-(BOOL)_loadETAUpdatesTable;
-(BOOL)_loadEVDataTable;
-(BOOL)_loadInfoTable;
-(BOOL)_loadLocationsTable:(BOOL)arg0 ;
-(BOOL)_loadMiscInfo;
-(BOOL)_loadMotionDataTable;
-(BOOL)_loadNavigationEventsTable;
-(BOOL)_loadNavigationUpdatesTable;
-(BOOL)_loadTraceVersion;
-(BOOL)_loadVehicleDataTable;
-(BOOL)_tableExists:(id)arg0 ;
-(BOOL)_updateTraceFromVersion:(NSUInteger)arg0 outError:(*id)arg1 ;
-(BOOL)loadExtraData;
-(id)_errorWithCode:(NSInteger)arg0 errorDescriptionFormat:(id)arg1 ;
-(id)_handleUpdateError;
-(id)loadTraceWithPath:(id)arg0 options:(NSUInteger)arg1 outError:(*id)arg2 ;
-(id)loadTraceWithPath:(id)arg0 outError:(*id)arg1 ;
-(id)trace;


@end


#endif