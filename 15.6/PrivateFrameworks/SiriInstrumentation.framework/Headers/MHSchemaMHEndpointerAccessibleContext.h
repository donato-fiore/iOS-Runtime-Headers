// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHENDPOINTERACCESSIBLECONTEXT_H
#define MHSCHEMAMHENDPOINTERACCESSIBLECONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHEndpointerAccessibleContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int accessibleEndpointerLevel; // ivar: _accessibleEndpointerLevel
@property (nonatomic) BOOL hasAccessibleEndpointerLevel;
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAccessibleEndpointerLevel;
-(void)writeTo:(id)arg0 ;


@end


#endif