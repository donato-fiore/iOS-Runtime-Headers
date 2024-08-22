// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOABCLIENTCONFIG_H
#define GEOABCLIENTCONFIG_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOABClientConfig : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_assignedAbBranchId;
    NSMutableArray *_configKeyValues;
    NSMutableArray *_debugExperimentBranchs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSString *assignedAbBranchId;
@property (retain, nonatomic) NSMutableArray *configKeyValues;
@property (retain, nonatomic) NSMutableArray *debugExperimentBranchs;
@property (readonly, nonatomic) BOOL hasAssignedAbBranchId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)configKeyValueType;
+(Class)debugExperimentBranchType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)configKeyValueAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugExperimentBranchAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addConfigKeyValue:(id)arg0 ;
-(void)addDebugExperimentBranch:(id)arg0 ;
-(void)clearConfigKeyValues;
-(void)clearDebugExperimentBranchs;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif