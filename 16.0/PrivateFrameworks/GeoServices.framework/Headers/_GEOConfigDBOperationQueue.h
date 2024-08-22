// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOCONFIGDBOPERATIONQUEUE_H
#define _GEOCONFIGDBOPERATIONQUEUE_H

@class geo_isolater, NSMutableArray;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "GEOSQLiteDB.h"

@interface _GEOConfigDBOperationQueue : NSObject {
    GEOSQLiteDB *_db;
    geo_isolater *_isolator;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_source> *_timer;
}




-(id)init:(id)arg0 ;
-(void)cancelTimer;
-(void)dealloc;
-(void)enqueueOperation:(id)arg0 ;
-(void)flush;
-(void)flushOnDBQueue;
-(void)scheduleTimer;


@end


#endif