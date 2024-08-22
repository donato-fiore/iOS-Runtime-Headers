// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RFSCHEMARFCOMPONENTSHOWN_H
#define RFSCHEMARFCOMPONENTSHOWN_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface RFSchemaRFComponentShown : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int component; // ivar: _component
@property (copy, nonatomic) NSString *componentIndex; // ivar: _componentIndex
@property (copy, nonatomic) NSString *componentName; // ivar: _componentName
@property (nonatomic) BOOL hasComponent;
@property (nonatomic) BOOL hasComponentIndex; // ivar: _hasComponentIndex
@property (nonatomic) BOOL hasComponentName; // ivar: _hasComponentName
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteComponent;
-(void)deleteComponentIndex;
-(void)deleteComponentName;
-(void)writeTo:(id)arg0 ;


@end


#endif