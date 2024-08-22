// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NETSCHEMANETBLUETOOTHDEVICE_H
#define NETSCHEMANETBLUETOOTHDEVICE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface NETSchemaNETBluetoothDevice : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) unsigned int index; // ivar: _index
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat rssi; // ivar: _rssi


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIndex;
-(void)deleteRssi;
-(void)writeTo:(id)arg0 ;


@end


#endif