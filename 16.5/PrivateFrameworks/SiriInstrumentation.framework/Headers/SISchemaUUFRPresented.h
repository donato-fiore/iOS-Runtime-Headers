// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCHEMAUUFRPRESENTED_H
#define SISCHEMAUUFRPRESENTED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaViewContainer.h"

@interface SISchemaUUFRPresented : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int errorCode; // ivar: _errorCode
@property (copy, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) BOOL hasErrorDomain; // ivar: _hasErrorDomain
@property (nonatomic) BOOL hasViewContainer; // ivar: _hasViewContainer
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaViewContainer *viewContainer; // ivar: _viewContainer


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteErrorCode;
-(void)deleteErrorDomain;
-(void)deleteViewContainer;
-(void)writeTo:(id)arg0 ;


@end


#endif