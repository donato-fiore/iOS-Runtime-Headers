// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLSTATISTICS_H
#define WLSTATISTICS_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface WLStatistics : NSObject

@property (readonly, nonatomic) NSString *contentType; // ivar: _contentType
@property (nonatomic) NSUInteger downloadByteCount; // ivar: _downloadByteCount
@property (nonatomic) NSUInteger downloadDuration; // ivar: _downloadDuration
@property (nonatomic) NSUInteger importEndBytesFree; // ivar: _importEndBytesFree
@property (retain, nonatomic) NSDate *importEndDate; // ivar: _importEndDate
@property (nonatomic) NSUInteger importFailedRecordCount; // ivar: _importFailedRecordCount
@property (nonatomic) NSUInteger importRecordCount; // ivar: _importRecordCount
@property (nonatomic) NSUInteger importStartBytesFree; // ivar: _importStartBytesFree
@property (retain, nonatomic) NSDate *importStartDate; // ivar: _importStartDate
@property (nonatomic) BOOL selectedForMigration; // ivar: _selectedForMigration


+(id)_statisticsWithContentType:(id)arg0 ;
+(id)aggregateContentType;
+(id)fetchContentType;
-(NSInteger)importBytesUsed;
-(NSUInteger)downloadBytesPerSecond;
-(NSUInteger)importDuration;
-(id)description;
-(id)fetchLogString;
-(void)addToFetchByteCount:(NSUInteger)arg0 ;
-(void)incrementFetchFailedRequestCount;
-(void)incrementFetchRequestCount;
-(void)setFetchDuration:(NSUInteger)arg0 ;
-(void)setFetchEndBytesFree:(NSUInteger)arg0 ;
-(void)setFetchStartBytesFree:(NSUInteger)arg0 ;


@end


#endif