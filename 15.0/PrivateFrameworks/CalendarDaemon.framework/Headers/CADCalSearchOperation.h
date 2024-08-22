// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADCALSEARCHOPERATION_H
#define CADCALSEARCHOPERATION_H

@class NSOperation, CalSearch, NSString;
@protocol CalSearchDataSink, OS_dispatch_semaphore, NSObject;


#import "ClientConnection.h"

@interface CADCalSearchOperation : NSOperation <CalSearchDataSink>

 {
    ClientConnection *_connection;
    CalSearch *_search;
    NSObject<OS_dispatch_semaphore> *_finishedSemaphore;
    unsigned int _replyID;
    NSInteger _lastIndex;
    id<NSObject> *_boostToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)operationWithConnection:(id)arg0 filter:(struct CalFilter *)arg1 replyID:(unsigned int)arg2 ;
-(BOOL)calSearchShouldStopSearching:(id)arg0 ;
-(id)initWithConnection:(id)arg0 filter:(struct CalFilter *)arg1 replyID:(unsigned int)arg2 ;
-(id)search;
-(unsigned int)replyID;
-(void)_completeOperation;
-(void)calSearch:(id)arg0 foundOccurrences:(struct __CFArray *)arg1 cachedDays:(struct __CFArray *)arg2 cachedDaysIndexes:(struct __CFArray *)arg3 ;
-(void)calSearch:(id)arg0 showResultsStartingOnDate:(CGFloat)arg1 ;
-(void)calSearchComplete:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)main;


@end


#endif