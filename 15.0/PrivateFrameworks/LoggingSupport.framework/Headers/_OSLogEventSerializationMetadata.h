// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _OSLOGEVENTSERIALIZATIONMETADATA_H
#define _OSLOGEVENTSERIALIZATIONMETADATA_H

@class NSPredicate, NSDate, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _OSLogEventSerializationMetadata : NSObject

@property (retain, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (retain, nonatomic) NSDate *firstDate; // ivar: _firstDate
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (readonly, nonatomic) NSMutableDictionary *indexToStringMapping; // ivar: _indexToStringMapping
@property (retain, nonatomic) NSDate *lastDate; // ivar: _lastDate
@property (nonatomic) NSUInteger maxLogEventBatchSize; // ivar: _maxLogEventBatchSize
@property (nonatomic) NSUInteger serializedEventCount; // ivar: _serializedEventCount
@property (readonly, nonatomic) NSMutableDictionary *stringToIndexMapping; // ivar: _stringToIndexMapping


-(id)dataRepresentation;
-(id)indexForString:(id)arg0 ;
-(id)init;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)stringForIndex:(id)arg0 ;


@end


#endif