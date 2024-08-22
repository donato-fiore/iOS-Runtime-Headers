// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPINSTSCHEMACLPCDMREPLAYTASKSTARTED_H
#define CLPINSTSCHEMACLPCDMREPLAYTASKSTARTED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaAsset.h"

@interface CLPInstSchemaCLPCDMReplayTaskStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *availableSiriAssets; // ivar: _availableSiriAssets
@property (copy, nonatomic) NSArray *habitualUsages; // ivar: _habitualUsages
@property (nonatomic) BOOL hasPluginTaskAsset; // ivar: _hasPluginTaskAsset
@property (nonatomic) BOOL hasReplayType;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaAsset *pluginTaskAsset; // ivar: _pluginTaskAsset
@property (nonatomic) int replayType; // ivar: _replayType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)habitualUsageCount;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)availableSiriAssetsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)habitualUsageAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addAvailableSiriAssets:(id)arg0 ;
-(void)addHabitualUsage:(id)arg0 ;
-(void)clearAvailableSiriAssets;
-(void)clearHabitualUsage;
-(void)deleteAvailableSiriAssets;
-(void)deleteHabitualUsage;
-(void)deletePluginTaskAsset;
-(void)deleteReplayType;
-(void)writeTo:(id)arg0 ;


@end


#endif