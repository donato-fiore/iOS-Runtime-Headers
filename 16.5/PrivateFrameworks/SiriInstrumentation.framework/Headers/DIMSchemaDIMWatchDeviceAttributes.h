// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIMSCHEMADIMWATCHDEVICEATTRIBUTES_H
#define DIMSCHEMADIMWATCHDEVICEATTRIBUTES_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface DIMSchemaDIMWatchDeviceAttributes : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsSatellitePaired;
@property (nonatomic) BOOL hasWatchArmOrientation;
@property (nonatomic) BOOL isSatellitePaired; // ivar: _isSatellitePaired
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int watchArmOrientation; // ivar: _watchArmOrientation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsSatellitePaired;
-(void)deleteWatchArmOrientation;
-(void)writeTo:(id)arg0 ;


@end


#endif