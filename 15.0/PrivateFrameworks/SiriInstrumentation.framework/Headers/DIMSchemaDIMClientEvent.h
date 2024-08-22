// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIMSCHEMADIMCLIENTEVENT_H
#define DIMSCHEMADIMCLIENTEVENT_H

@class NSData;


#import "SISchemaTopLevelUnionType.h"
#import "DIMSchemaDIMDeviceFixedContext.h"
#import "DIMSchemaDIMSiriAccountInformation.h"

@interface DIMSchemaDIMClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) DIMSchemaDIMDeviceFixedContext *deviceFixedContext; // ivar: _deviceFixedContext
@property (nonatomic) BOOL hasDeviceFixedContext; // ivar: _hasDeviceFixedContext
@property (nonatomic) BOOL hasSiriAccountInformation; // ivar: _hasSiriAccountInformation
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) DIMSchemaDIMSiriAccountInformation *siriAccountInformation; // ivar: _siriAccountInformation
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)qualifiedMessageName;
-(int)getAnyEventType;
-(void)writeTo:(id)arg0 ;


@end


#endif