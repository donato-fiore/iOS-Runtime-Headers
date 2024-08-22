// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CADCALSEARCHOPERATION_H
#define CADCALSEARCHOPERATION_H

@class NSOperation, CalSearch, NSArray, NSString, NSMutableArray;
@protocol CalSearchDataSink, OS_dispatch_semaphore, NSObject;


#import "ClientConnection.h"

@interface CADCalSearchOperation : NSOperation <CalSearchDataSink>

 {
    ClientConnection *_connection;
    CalSearch *_currentSearch;
    int _currentDatabaseID;
    NSArray *_calendars;
    NSString *_searchTerm;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
    unsigned int _replyID;
    id<NSObject> *_boostToken;
    os_unfair_lock_s _lock;
    NSMutableArray *_objectIDsForPrivacyAccounting;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)operationWithConnection:(id)arg0 searchTerm:(id)arg1 calendars:(id)arg2 replyID:(unsigned int)arg3 ;
-(BOOL)calSearchShouldStopSearching:(id)arg0 ;
-(id)initWithConnection:(id)arg0 searchTerm:(id)arg1 calendars:(id)arg2 replyID:(unsigned int)arg3 ;
-(unsigned int)replyID;
-(void)_completeOperation;
-(void)calSearch:(id)arg0 foundOccurrences:(struct __CFArray *)arg1 cachedDays:(struct __CFArray *)arg2 cachedDaysIndexes:(struct __CFArray *)arg3 ;
-(void)calSearch:(id)arg0 showResultsStartingOnDate:(CGFloat)arg1 ;
-(void)calSearchComplete:(id)arg0 ;
-(void)cancel;
-(void)configureSearch:(id)arg0 ;
-(void)dealloc;
-(void)main;


@end


#endif