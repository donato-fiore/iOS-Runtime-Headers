// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3STATEMENTACCUMULATOR_H
#define ML3STATEMENTACCUMULATOR_H

@class NSString, NSUUID, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MLMediaLibraryService.h"
#import "ML3DatabaseConnection.h"

@interface ML3StatementAccumulator : NSObject {
    MLMediaLibraryService *_xpcService;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property (readonly, nonatomic) ML3DatabaseConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSString *databasePath; // ivar: _databasePath
@property (retain, nonatomic) NSUUID *existingTransactionIdentifier; // ivar: _existingTransactionIdentifier
@property (nonatomic) NSUInteger priorityLevel; // ivar: _priorityLevel
@property (readonly, nonatomic) NSMutableArray *statementQueue; // ivar: _statementQueue
@property (nonatomic) NSUInteger statementThreshold; // ivar: _statementThreshold


-(BOOL)_onQueueFlushAndWait:(BOOL)arg0 ;
-(BOOL)enqueueStatement:(id)arg0 ;
-(BOOL)flushAndWait:(BOOL)arg0 ;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(void)dealloc;


@end


#endif