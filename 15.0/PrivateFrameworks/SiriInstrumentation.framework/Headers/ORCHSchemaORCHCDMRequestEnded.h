// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ORCHSCHEMAORCHCDMREQUESTENDED_H
#define ORCHSCHEMAORCHCDMREQUESTENDED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHCDMRequestEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL delegatedUserDialogAct; // ivar: _delegatedUserDialogAct
@property (nonatomic) BOOL hasDelegatedUserDialogAct;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int status; // ivar: _status


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif