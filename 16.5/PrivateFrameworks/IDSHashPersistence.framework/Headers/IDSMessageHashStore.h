// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSMESSAGEHASHSTORE_H
#define IDSMESSAGEHASHSTORE_H

@class NSMutableArray;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSMessageHashStore : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *databaseCloseTimer; // ivar: _databaseCloseTimer
@property (nonatomic) CGFloat databaseLastUpdateTime; // ivar: _databaseLastUpdateTime
@property (nonatomic) NSUInteger initialProcessTime; // ivar: _initialProcessTime
@property (nonatomic) NSUInteger initialServerTime; // ivar: _initialServerTime
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // ivar: _ivarQueue
@property (retain, nonatomic) NSMutableArray *recentlySeenHashes; // ivar: _recentlySeenHashes


+(id)sharedInstance;
-(BOOL)containsMessageHash:(id)arg0 ;
-(NSUInteger)_currentLocalTime;
-(id)init;
-(void)_performInitialHousekeeping;
-(void)_runCleanup;
-(void)_startCleanupTimer;
-(void)addMessageHash:(id)arg0 ;
-(void)closeDatabase;
-(void)updateCreationDateForHash:(id)arg0 ;


@end


#endif