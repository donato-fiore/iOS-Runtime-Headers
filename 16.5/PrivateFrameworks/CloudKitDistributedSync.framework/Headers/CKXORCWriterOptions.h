// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKXORCWRITEROPTIONS_H
#define CKXORCWRITEROPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKXORCWriterOptions : NSObject

@property (nonatomic) CGFloat batchCommitMarginPercentage; // ivar: _batchCommitMarginPercentage
@property (nonatomic) NSUInteger batchResizeIncrement; // ivar: _batchResizeIncrement
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) NSUInteger compressionBlockSize; // ivar: _compressionBlockSize
@property (nonatomic) NSInteger compressionKind; // ivar: _compressionKind
@property (nonatomic) NSUInteger stripeSize; // ivar: _stripeSize
@property (retain, nonatomic) NSString *testExceptionDuringCommitBatch; // ivar: _testExceptionDuringCommitBatch
@property (nonatomic) NSUInteger testExceptionDuringCommitBatchCommitsToSkip; // ivar: _testExceptionDuringCommitBatchCommitsToSkip
@property (nonatomic) BOOL testRowsInterspersedWithNulls; // ivar: _testRowsInterspersedWithNulls


-(id)init;
-(id)initWithBatchSize:(NSUInteger)arg0 ;


@end


#endif