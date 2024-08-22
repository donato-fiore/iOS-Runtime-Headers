// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTSUPPORTOBJECTSERIALIZER_H
#define SIGNPOSTSUPPORTOBJECTSERIALIZER_H

@class SignpostSupportObjectExtractor, NSMutableArray;

#import <Foundation/Foundation.h>

#import "SignpostSerializationFilterConfiguration.h"

@interface SignpostSupportObjectSerializer : NSObject

@property (retain, nonatomic) SignpostSupportObjectExtractor *extractor; // ivar: _extractor
@property (retain, nonatomic) SignpostSerializationFilterConfiguration *filterConfiguration; // ivar: _filterConfiguration
@property (nonatomic) NSUInteger maxBatchSize; // ivar: _maxBatchSize
@property (nonatomic) NSUInteger maxBytesSize; // ivar: _maxBytesSize
@property (retain, nonatomic) NSMutableArray *outstandingLogMessage; // ivar: _outstandingLogMessage
@property (retain, nonatomic) NSMutableArray *outstandingSignpostObjects; // ivar: _outstandingSignpostObjects
@property (nonatomic) BOOL redactPrivacySensitiveData; // ivar: _redactPrivacySensitiveData
@property (copy, nonatomic) id *serializedLogMessageBlock; // ivar: _serializedLogMessageBlock
@property (copy, nonatomic) id *serializedSignpostEventBlock; // ivar: _serializedSignpostEventBlock


-(BOOL)_hasProcessingBlocks;
-(BOOL)serializeLogArchiveWithPath:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 errorOut:(*id)arg3 ;
-(BOOL)serializeNotificationsWithIntervalTimeoutInSeconds:(NSUInteger)arg0 errorOut:(*id)arg1 ;
-(id)_dataArrayForSignpostSupportObjectArray:(id)arg0 errorOut:(*id)arg1 ;
-(id)_sanityCheckParameters;
-(id)init;


@end


#endif