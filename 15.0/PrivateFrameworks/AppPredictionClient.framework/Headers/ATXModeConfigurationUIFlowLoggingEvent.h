// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXMODECONFIGURATIONUIFLOWLOGGINGEVENT_H
#define ATXMODECONFIGURATIONUIFLOWLOGGINGEVENT_H

@class NSArray, NSString, NSUUID, NSDate;
@protocol BMStoreData, ATXProtoBufWrapper, ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXModeConfigurationUIFlowLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper, ATXJSONSerializableProtocol>



@property (readonly, nonatomic) NSArray *currentEntityIdentifiers; // ivar: _currentEntityIdentifiers
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *dndModeUUID; // ivar: _dndModeUUID
@property (readonly, nonatomic) NSDate *eventDate; // ivar: _eventDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int modeConfigurationEntityType; // ivar: _modeConfigurationEntityType
@property (readonly, nonatomic) int modeConfigurationUI; // ivar: _modeConfigurationUI
@property (readonly, nonatomic) NSArray *previousEntityIdentifiers; // ivar: _previousEntityIdentifiers
@property (readonly, nonatomic) NSArray *suggestedEntityIdentifiers; // ivar: _suggestedEntityIdentifiers
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)encodeAsProto;
-(id)initFromJSON:(id)arg0 ;
-(id)initWithDndModeUUID:(id)arg0 modeConfigurationUI:(int)arg1 modeConfigurationEntityType:(int)arg2 suggestedEntityIdentifiers:(id)arg3 previousEntityIdentifiers:(id)arg4 currentEntityIdentifiers:(id)arg5 eventDate:(id)arg6 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonRawData;
-(id)jsonRepresentation;
-(id)proto;
-(id)serialize;


@end


#endif