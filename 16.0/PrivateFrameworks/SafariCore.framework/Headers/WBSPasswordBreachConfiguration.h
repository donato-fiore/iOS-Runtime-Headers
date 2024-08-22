// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPASSWORDBREACHCONFIGURATION_H
#define WBSPASSWORDBREACHCONFIGURATION_H

@class NSString, NSURL, NSURLSessionConfiguration;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachConfiguration : NSObject <NSCopying>

 {
    BOOL _isInternalBuild;
    BOOL _shouldRefillBagWhenEmpty;
}


@property (readonly, nonatomic) NSUInteger fakePasswordLengthBytes; // ivar: _fakePasswordLengthBytes
@property (readonly, nonatomic) NSString *highFrequencyBucketHashSalt; // ivar: _highFrequencyBucketHashSalt
@property (readonly, nonatomic) NSUInteger highFrequencyBucketHashWorkFactor; // ivar: _highFrequencyBucketHashWorkFactor
@property (readonly, nonatomic) NSUInteger highFrequencyBucketScryptBlockSizeR; // ivar: _highFrequencyBucketScryptBlockSizeR
@property (readonly, nonatomic) NSUInteger highFrequencyBucketScryptParallelismFactorP; // ivar: _highFrequencyBucketScryptParallelismFactorP
@property (readonly, nonatomic) NSURL *highFrequencyBucketURL; // ivar: _highFrequencyBucketURL
@property (readonly, nonatomic) NSUInteger lowFrequencyBucketFetchTimeout; // ivar: _lowFrequencyBucketFetchTimeout
@property (readonly, nonatomic) NSString *lowFrequencyBucketHashSalt; // ivar: _lowFrequencyBucketHashSalt
@property (readonly, nonatomic) NSUInteger lowFrequencyBucketHashWorkFactor; // ivar: _lowFrequencyBucketHashWorkFactor
@property (readonly, nonatomic) NSUInteger lowFrequencyBucketIdentifierBitCount; // ivar: _lowFrequencyBucketIdentifierBitCount
@property (readonly, nonatomic) NSUInteger lowFrequencyBucketScryptBlockSizeR; // ivar: _lowFrequencyBucketScryptBlockSizeR
@property (readonly, nonatomic) NSUInteger lowFrequencyBucketScryptParallelismFactorP; // ivar: _lowFrequencyBucketScryptParallelismFactorP
@property (readonly, nonatomic) NSURL *lowFrequencyBucketURL; // ivar: _lowFrequencyBucketURL
@property (readonly, nonatomic) CGFloat minimumDelayBetweenSessions; // ivar: _minimumDelayBetweenSessions
@property (readonly, nonatomic) NSUInteger numberOfBatchesPerSession; // ivar: _numberOfBatchesPerSession
@property (readonly, nonatomic) NSUInteger passwordCheckBatchSize; // ivar: _passwordCheckBatchSize
@property (readonly, nonatomic) BOOL shouldRefillBagWhenEmpty;
@property (readonly, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration; // ivar: _urlSessionConfiguration
@property (readonly, nonatomic) BOOL verboseSensitiveLoggingEnabled; // ivar: _verboseSensitiveLoggingEnabled


+(id)standardConfiguration;
-(BOOL)isVerboseSensitiveLoggingEnabled;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 protocolClasses:(id)arg1 allowValuesForTesting:(BOOL)arg2 ;


@end


#endif