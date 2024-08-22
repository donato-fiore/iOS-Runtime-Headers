// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKXORCREADEROPTIONS_H
#define CKXORCREADEROPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKXORCReaderOptions : NSObject

@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (retain, nonatomic) NSString *testExceptionDuringLoadBatch; // ivar: _testExceptionDuringLoadBatch
@property (nonatomic) NSUInteger testExceptionDuringLoadBatchLoadsToSkip; // ivar: _testExceptionDuringLoadBatchLoadsToSkip


-(id)init;
-(id)initWithBatchSize:(NSUInteger)arg0 ;


@end


#endif