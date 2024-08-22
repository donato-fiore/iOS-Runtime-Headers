// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDRECORDBATCHFETCHER_H
#define IMDRECORDBATCHFETCHER_H

@class NSArray, NSPredicate;
@protocol NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface IMDRecordBatchFetcher : NSObject <NSFastEnumeration>

 {
    *id _fastEnumerationBuffer;
    NSUInteger _fastEnumerationBufferSize;
    NSArray *_fastEnumerationLastBatch;
}


@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSInteger lastRowID; // ivar: _lastRowID
@property (retain, nonatomic) NSPredicate *predicate; // ivar: _predicate


-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)init;
-(id)nextBatch;
-(id)nextBatchWithSize:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif