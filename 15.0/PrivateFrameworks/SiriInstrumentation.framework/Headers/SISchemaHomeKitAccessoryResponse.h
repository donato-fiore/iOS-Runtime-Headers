// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAHOMEKITACCESSORYRESPONSE_H
#define SISCHEMAHOMEKITACCESSORYRESPONSE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaHomeKitAccessoryResponse : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasHomeKitAccessoryType;
@property (nonatomic) BOOL hasNumAccessoriesCompleted;
@property (nonatomic) BOOL hasNumAccessoriesNotCompleted;
@property (nonatomic) int homeKitAccessoryType; // ivar: _homeKitAccessoryType
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int numAccessoriesCompleted; // ivar: _numAccessoriesCompleted
@property (nonatomic) int numAccessoriesNotCompleted; // ivar: _numAccessoriesNotCompleted


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif