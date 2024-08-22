// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLTIMEMANAGER_H
#define PLTIMEMANAGER_H

@class NSString, NSDictionary;
@protocol PLTimeReferenceManager;

#import <Foundation/Foundation.h>

#import "PLSQLiteConnection.h"
#import "PLStorageOperator.h"

@interface PLTimeManager : NSObject <PLTimeReferenceManager>



@property (weak) PLSQLiteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSDictionary *notificationsToTimeReferences; // ivar: _notificationsToTimeReferences
@property (weak) PLStorageOperator *storageOperator; // ivar: _storageOperator
@property (readonly) Class superclass;
@property (retain) NSDictionary *timeReferences; // ivar: _timeReferences


+(id)sharedInstance;
-(CGFloat)hourBucketBaseSnapOffsetWithMonotonicTime:(NSInteger)arg0 ;
-(CGFloat)hourBucketBaseSnapOffsetWithMonotonicTimeNow:(NSInteger)arg0 ;
-(CGFloat)timeOffsetForTimeReference:(NSInteger)arg0 ;
-(CGFloat)timeZoneHourBucketShift:(CGFloat)arg0 ;
-(id)bucketNSDate:(id)arg0 withBucketInterval:(int)arg1 ;
-(id)convertTime:(id)arg0 fromTimeReference:(NSInteger)arg1 toTimeReference:(NSInteger)arg2 ;
-(id)currentTimeFromTimeReference:(NSInteger)arg0 toTimeReference:(NSInteger)arg1 ;
-(id)init;
-(id)initialMonotonicTime;
-(id)storageQueue;
-(int)bucketTimeStampForDate:(id)arg0 withTimeReference:(NSInteger)arg1 withBucketInterval:(int)arg2 ;
-(void)getBootSessionUUID;
-(void)initializeTimeOffsets;
-(void)logTimeEntry;
-(void)registerForTimeChangedCallbackWithIdentifier:(id)arg0 forTimeReference:(NSInteger)arg1 usingBlock:(id)arg2 ;
-(void)unregisterForTimeChangedCallbackWithIdentifier:(id)arg0 forTimeReference:(NSInteger)arg1 ;


@end


#endif