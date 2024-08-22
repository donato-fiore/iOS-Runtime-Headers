// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POMMESSCHEMAPOMMESPROFILESLICERESOLUTIONREQUESTSTARTED_H
#define POMMESSCHEMAPOMMESPROFILESLICERESOLUTIONREQUESTSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESProfileSliceResolutionRequestStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasSliceLabel;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int sliceLabel; // ivar: _sliceLabel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteSliceLabel;
-(void)writeTo:(id)arg0 ;


@end


#endif