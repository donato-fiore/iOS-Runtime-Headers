// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NETSCHEMANETESTABLISHMENTRESOLUTION_H
#define NETSCHEMANETESTABLISHMENTRESOLUTION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "NETSchemaNETEndpoint.h"

@interface NETSchemaNETEstablishmentResolution : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger duration; // ivar: _duration
@property (nonatomic) unsigned int endpointCount; // ivar: _endpointCount
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasEndpointCount;
@property (nonatomic) BOOL hasPreferredEndpoint; // ivar: _hasPreferredEndpoint
@property (nonatomic) BOOL hasResolutionSource;
@property (nonatomic) BOOL hasSuccessfulEndpoint; // ivar: _hasSuccessfulEndpoint
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) NETSchemaNETEndpoint *preferredEndpoint; // ivar: _preferredEndpoint
@property (nonatomic) unsigned int resolutionSource; // ivar: _resolutionSource
@property (retain, nonatomic) NETSchemaNETEndpoint *successfulEndpoint; // ivar: _successfulEndpoint


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif