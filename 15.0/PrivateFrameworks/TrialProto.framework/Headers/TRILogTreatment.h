// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRILOGTREATMENT_H
#define TRILOGTREATMENT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface TRILogTreatment : PBCodable <NSCopying>

 {
    ? _namespaceIds;
    ? _has;
}


@property (nonatomic) unsigned int deploymentId; // ivar: _deploymentId
@property (retain, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) BOOL hasDeploymentId;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (readonly, nonatomic) *unsigned int namespaceIds;
@property (readonly, nonatomic) NSUInteger namespaceIdsCount;
@property (retain, nonatomic) NSMutableArray *namespaceNames; // ivar: _namespaceNames
@property (retain, nonatomic) NSMutableArray *namespaces; // ivar: _namespaces
@property (retain, nonatomic) NSString *treatmentId; // ivar: _treatmentId


+(Class)namespaceNameType;
+(Class)namespaceType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)namespaceAtIndex:(NSUInteger)arg0 ;
-(id)namespaceNameAtIndex:(NSUInteger)arg0 ;
-(unsigned int)namespaceIdAtIndex:(NSUInteger)arg0 ;
-(void)addNamespace:(id)arg0 ;
-(void)addNamespaceId:(unsigned int)arg0 ;
-(void)addNamespaceName:(id)arg0 ;
-(void)clearNamespaceIds;
-(void)clearNamespaceNames;
-(void)clearNamespaces;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif