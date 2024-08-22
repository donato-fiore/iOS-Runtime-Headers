// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLBIOMESTREAM_H
#define APODMLBIOMESTREAM_H

@class BMStoreConfig, NSDate, NSNumber, BMStoreStream, NSString;

#import <Foundation/Foundation.h>


@interface APOdmlBiomeStream : NSObject

@property (retain, nonatomic) BMStoreConfig *config; // ivar: _config
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSNumber *maxEvents; // ivar: _maxEvents
@property (nonatomic) BOOL reverse; // ivar: _reverse
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) BMStoreStream *stream; // ivar: _stream
@property (retain, nonatomic) NSString *streamName; // ivar: _streamName


-(id)_applicationSupportDirectory;
-(id)initWithName:(id)arg0 ;
-(id)publisher;
-(void)enumerateEvents:(id)arg0 ;
-(void)enumerateEvents:(id)arg0 result:(id)arg1 ;
-(void)enumerateEventsWithDictionary:(id)arg0 ;
// -(void)filterEvents:(id)arg0 result:(unk)arg1  ;
// -(void)filterEventsWithDictionary:(id)arg0 result:(unk)arg1  ;
-(void)removeAllEvents;
-(void)removeEvents:(id)arg0 ;
-(void)removeEventsWithDictionary:(id)arg0 ;
-(void)writeEvent:(id)arg0 ;


@end


#endif