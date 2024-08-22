// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMHOMEKITCLIENTBASE_H
#define BMHOMEKITCLIENTBASE_H

@class NSString, NSDateInterval;
@protocol BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMHomeKitClientBase : NSObject <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSString *eventCorrelationIdentifier; // ivar: _eventCorrelationIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int homeOccupancy; // ivar: _homeOccupancy
@property (readonly, copy, nonatomic) NSString *homeUniqueIdentifier; // ivar: _homeUniqueIdentifier
@property (readonly, copy, nonatomic) NSString *source; // ivar: _source
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithDateInterval:(id)arg0 homeUniqueIdentifier:(id)arg1 homeOccupancy:(int)arg2 source:(id)arg3 clientName:(id)arg4 eventCorrelationIdentifier:(id)arg5 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif