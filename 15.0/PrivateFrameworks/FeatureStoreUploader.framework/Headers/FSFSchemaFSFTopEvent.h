// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FSFSCHEMAFSFTOPEVENT_H
#define FSFSCHEMAFSFTOPEVENT_H

@class SISchemaTopLevelUnionType, SISchemaUUID, NSData;


#import "FSFSchemaFSFFeature.h"

@interface FSFSchemaFSFTopEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) FSFSchemaFSFFeature *feature; // ivar: _feature
@property (retain, nonatomic) SISchemaUUID *fsfId; // ivar: _fsfId
@property (nonatomic) BOOL hasFeature; // ivar: _hasFeature
@property (nonatomic) BOOL hasFsfId; // ivar: _hasFsfId
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) NSUInteger whichEvent_Type; // ivar: _whichEvent_Type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isProvisional;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)getTypeId;
-(id)getVersion;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(int)getAnyEventType;
-(void)writeTo:(id)arg0 ;


@end


#endif