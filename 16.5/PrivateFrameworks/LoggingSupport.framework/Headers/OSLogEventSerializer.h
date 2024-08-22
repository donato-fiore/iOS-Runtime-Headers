// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSLOGEVENTSERIALIZER_H
#define OSLOGEVENTSERIALIZER_H

@class NSMutableArray, NSPredicate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_OSLogEventSerializationMetadata.h"
#import "OSLogEventSource.h"
#import "OSLogEventStream.h"

@interface OSLogEventSerializer : NSObject

@property (copy, nonatomic) id *argumentRedactionBlock; // ivar: _argumentRedactionBlock
@property (readonly, nonatomic) NSMutableArray *curBatchDictionaries; // ivar: _curBatchDictionaries
@property (nonatomic) NSUInteger curBatchSize; // ivar: _curBatchSize
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (nonatomic) NSUInteger flags;
@property (nonatomic) NSUInteger maxLogEventBatchSize; // ivar: _maxLogEventBatchSize
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSUInteger serializedEventCount; // ivar: _serializedEventCount
@property (readonly, nonatomic) OSLogEventSource *source;
@property (readonly, nonatomic) OSLogEventStream *stream; // ivar: _stream
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *target;


-(BOOL)_isBatchCompleted;
-(id)_arrayForDecomposedMessage:(id)arg0 indicesToRedact:(id)arg1 ;
-(id)_dictForArg:(id)arg0 shouldRedactValue:(BOOL)arg1 ;
-(id)_dictForDecomposedMessage:(id)arg0 index:(NSUInteger)arg1 shouldRedact:(BOOL)arg2 ;
-(id)_dictForDecomposedMessage:(id)arg0 indicesToRedact:(id)arg1 ;
-(id)_dictForPlaceholder:(id)arg0 ;
-(id)_dictionaryForProxy:(id)arg0 ;
// -(id)initWithSource:(id)arg0 dataProcessingBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(void)_completeBatch:(id)arg0 ;
-(void)_serializeEvent:(id)arg0 ;
-(void)invalidate;
-(void)serializeFromDate:(id)arg0 ;
-(void)serializeFromDate:(id)arg0 toDate:(id)arg1 ;
-(void)serializeFromLastBoot;
-(void)serializeFromPosition:(id)arg0 ;


@end


#endif