// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATERANGEQUERYSERVER_H
#define HDDATERANGEQUERYSERVER_H

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol HDDataObserver, HDDatabaseProtectedDataObserver;


#import "HDQueryServer.h"

@interface HDDateRangeQueryServer : HDQueryServer <HDDataObserver, HDDatabaseProtectedDataObserver>

 {
    BOOL _resultsDirty;
    NSMutableDictionary *_dateIntervalsBySampleType;
    NSMutableSet *_sampleTypesToReFetch;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)queryClass;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_shouldObserveAllSampleTypes;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(void)_queue_start;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;


@end


#endif