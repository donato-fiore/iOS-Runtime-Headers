// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SISCHEMAADAPTIVEVOLUMEUSERPREFERENCES_H
#define SISCHEMAADAPTIVEVOLUMEUSERPREFERENCES_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaAdaptiveVolumeUserPreferences : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsPermanentOffsetEnabled;
@property (nonatomic) BOOL hasMostRecentIntent;
@property (nonatomic) BOOL hasPermanentOffsetFactor;
@property (nonatomic) BOOL isPermanentOffsetEnabled; // ivar: _isPermanentOffsetEnabled
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mostRecentIntent; // ivar: _mostRecentIntent
@property (nonatomic) float permanentOffsetFactor; // ivar: _permanentOffsetFactor


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsPermanentOffsetEnabled;
-(void)deleteMostRecentIntent;
-(void)deletePermanentOffsetFactor;
-(void)writeTo:(id)arg0 ;


@end


#endif