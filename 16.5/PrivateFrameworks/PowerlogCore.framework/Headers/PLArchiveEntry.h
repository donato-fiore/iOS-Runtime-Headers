// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLARCHIVEENTRY_H
#define PLARCHIVEENTRY_H

@class NSString, NSDate;


#import "PLEntry.h"

@interface PLArchiveEntry : PLEntry

@property (readonly, nonatomic) NSString *compressedPath;
@property (readonly, nonatomic) NSString *crPath; // ivar: _crPath
@property (readonly) NSDate *endDate;
@property (readonly) BOOL fullMode;
@property (nonatomic) NSInteger mainDBSizeAtStart;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) NSUInteger numAttempts;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) BOOL removed;
@property (retain, nonatomic) NSDate *removedDate;
@property (nonatomic) NSInteger stage;
@property (readonly) NSDate *startDate;
@property (readonly, nonatomic) BOOL syncedOff;
@property (retain, nonatomic) NSDate *syncedOffDate;
@property (nonatomic) CGFloat systemTimeOffset;
@property (readonly) BOOL systemTimeOffsetModified; // ivar: _systemTimeOffsetModified
@property (readonly) NSString *uuid;


+(id)entryKey;
+(id)storageQueue;
+(void)load;
-(id)initEntryWithRawData:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 andUUID:(id)arg2 ;
-(void)log;


@end


#endif