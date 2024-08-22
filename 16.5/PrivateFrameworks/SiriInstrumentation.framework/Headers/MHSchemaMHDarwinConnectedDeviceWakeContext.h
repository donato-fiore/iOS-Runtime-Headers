// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MHSCHEMAMHDARWINCONNECTEDDEVICEWAKECONTEXT_H
#define MHSCHEMAMHDARWINCONNECTEDDEVICEWAKECONTEXT_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "MHSchemaMHDarwinConnectedDeviceWakeEnded.h"
#import "MHSchemaMHDarwinConnectedDeviceWakeFailed.h"
#import "MHSchemaMHDarwinConnectedDeviceWakeStarted.h"

@interface MHSchemaMHDarwinConnectedDeviceWakeContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MHSchemaMHDarwinConnectedDeviceWakeEnded *ended; // ivar: _ended
@property (retain, nonatomic) MHSchemaMHDarwinConnectedDeviceWakeFailed *failed; // ivar: _failed
@property (nonatomic) BOOL hasEnded; // ivar: _hasEnded
@property (nonatomic) BOOL hasFailed; // ivar: _hasFailed
@property (nonatomic) BOOL hasStartedOrChanged; // ivar: _hasStartedOrChanged
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) MHSchemaMHDarwinConnectedDeviceWakeStarted *startedOrChanged; // ivar: _startedOrChanged
@property (readonly, nonatomic) NSUInteger whichContextevent; // ivar: _whichContextevent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteEnded;
-(void)deleteFailed;
-(void)deleteStartedOrChanged;
-(void)writeTo:(id)arg0 ;


@end


#endif