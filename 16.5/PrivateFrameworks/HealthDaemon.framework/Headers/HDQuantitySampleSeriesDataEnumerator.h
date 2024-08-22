// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDQUANTITYSAMPLESERIESDATAENUMERATOR_H
#define HDQUANTITYSAMPLESERIESDATAENUMERATOR_H

@class NSError;

#import <Foundation/Foundation.h>

#import "HDDatabaseTransaction.h"

@interface HDQuantitySampleSeriesDataEnumerator : NSObject {
    HDDatabaseTransaction *_transaction;
    NSUInteger _bufferSize;
    deque<std::tuple<double, double, float>, std::allocator<std::tuple<double, double, float>>> _data;
    BOOL _hasFetchedData;
    BOOL _hasFetchedAllData;
    BOOL _hasDeterminedSeriesVersion;
    BOOL _isVersion1;
    BOOL _hasDuration;
    NSInteger _index;
    CGFloat _previousEndTime;
    NSError *_fatalError;
    unsigned char _UUIDBytes;
    CGFloat _lastFetchedDatumTime;
    CGFloat _lastDatumTime;
    ObjectIdentifier _objectIdentifier;
}


@property (readonly, nonatomic) NSInteger HFDKey; // ivar: _HFDKey
@property (readonly, nonatomic) *unsigned char UUIDBytesPtr;
@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) NSInteger dataTypeCode; // ivar: _dataTypeCode
@property (readonly, nonatomic) BOOL done;
@property (readonly, nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly, nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (readonly, nonatomic) NSInteger sourceID; // ivar: _sourceID
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime


-(BOOL)enumerateDataToTime:(CGFloat)arg0 error:(*id)arg1 handler:(id)arg2 ;
-(BOOL)primeEnumeratorWithError:(*id)arg0 ;
-(CGFloat)nextDatumTime;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithTransaction:(id)arg0 persistentID:(NSInteger)arg1 dataTypeCode:(NSInteger)arg2 UUIDBytes:(unsigned char)arg3 startTime:(CGFloat)arg4 endTime:(CGFloat)arg5 count:(NSInteger)arg6 sourceID:(NSInteger)arg7 HFDKey:(NSInteger)arg8 bufferSize:(NSUInteger)arg9 ;
-(void)_unitTesting_addToBufferTimestamp:(CGFloat)arg0 value:(CGFloat)arg1 duration:(float)arg2 isLastDatum:(BOOL)arg3 ;


@end


#endif