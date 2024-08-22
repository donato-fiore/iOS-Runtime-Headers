// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MWTSCHEMAMWTVMCPUSTATSREPORTED_H
#define MWTSCHEMAMWTVMCPUSTATSREPORTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MWTSchemaMWTVMCPUStatsReported : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) NSUInteger compressions; // ivar: _compressions
@property (nonatomic) NSUInteger cpuTicksIdle; // ivar: _cpuTicksIdle
@property (nonatomic) NSUInteger cpuTicksNice; // ivar: _cpuTicksNice
@property (nonatomic) NSUInteger cpuTicksSystem; // ivar: _cpuTicksSystem
@property (nonatomic) NSUInteger cpuTicksUser; // ivar: _cpuTicksUser
@property (nonatomic) NSUInteger decompressions; // ivar: _decompressions
@property (nonatomic) NSUInteger faults; // ivar: _faults
@property (nonatomic) BOOL hasCompressions;
@property (nonatomic) BOOL hasCpuTicksIdle;
@property (nonatomic) BOOL hasCpuTicksNice;
@property (nonatomic) BOOL hasCpuTicksSystem;
@property (nonatomic) BOOL hasCpuTicksUser;
@property (nonatomic) BOOL hasDecompressions;
@property (nonatomic) BOOL hasFaults;
@property (nonatomic) BOOL hasPageins;
@property (nonatomic) BOOL hasSnapshotStage;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSUInteger pageins; // ivar: _pageins
@property (nonatomic) int snapshotStage; // ivar: _snapshotStage


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCompressions;
-(void)deleteCpuTicksIdle;
-(void)deleteCpuTicksNice;
-(void)deleteCpuTicksSystem;
-(void)deleteCpuTicksUser;
-(void)deleteFaults;
-(void)deletePageins;
-(void)deleteSnapshotStage;
-(void)writeTo:(id)arg0 ;


@end


#endif