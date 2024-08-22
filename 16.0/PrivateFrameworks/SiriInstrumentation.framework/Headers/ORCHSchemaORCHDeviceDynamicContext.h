// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ORCHSCHEMAORCHDEVICEDYNAMICCONTEXT_H
#define ORCHSCHEMAORCHDEVICEDYNAMICCONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface ORCHSchemaORCHDeviceDynamicContext : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasMotionActivity;
@property (nonatomic) BOOL hasThermalState;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int motionActivity; // ivar: _motionActivity
@property (nonatomic) int thermalState; // ivar: _thermalState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteMotionActivity;
-(void)deleteThermalState;
-(void)writeTo:(id)arg0 ;


@end


#endif