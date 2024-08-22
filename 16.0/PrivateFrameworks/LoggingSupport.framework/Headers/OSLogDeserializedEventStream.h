// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSLOGDESERIALIZEDEVENTSTREAM_H
#define OSLOGDESERIALIZEDEVENTSTREAM_H

@class NSArray, NSEnumerator, NSDate;
@protocol OSLogEventDeserializerDataSourceDelegate;


#import "OSLogEventStreamBase.h"
#import "_OSLogEventSerializationMetadata.h"

@interface OSLogDeserializedEventStream : OSLogEventStreamBase

@property (readonly, nonatomic) NSArray *curEventArray; // ivar: _curEventArray
@property (readonly, nonatomic) NSObject<OSLogEventDeserializerDataSourceDelegate> *dataSourceDelegate; // ivar: _dataSourceDelegate
@property (readonly, nonatomic) NSEnumerator *eventDictionaryEnumerator; // ivar: _eventDictionaryEnumerator
@property (readonly, nonatomic) NSDate *firstDate;
@property (nonatomic) BOOL hasActivated; // ivar: _hasActivated
@property (readonly, nonatomic) NSDate *lastDate;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // ivar: _metadata


-(id)_eventArrayFromData:(id)arg0 ;
-(id)_nextEventDictionary;
-(id)initWithDataSourceDelegate:(id)arg0 ;
-(void)_iterateThroughEventsWithProxy:(id)arg0 filter:(id)arg1 startingDate:(id)arg2 ;
-(void)_updateEventArray;
-(void)activate;
-(void)activateStreamFromDate:(id)arg0 ;


@end


#endif