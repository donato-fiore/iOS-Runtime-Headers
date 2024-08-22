// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLFACEANALYSIS_H
#define CPLFACEANALYSIS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CPLFaceAnalysis : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL completed; // ivar: _completed
@property (retain, nonatomic) NSMutableArray *faceInstances; // ivar: _faceInstances
@property (nonatomic) BOOL hasCompleted;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)faceInstancesAtIndex:(NSUInteger)arg0 ;
-(void)addFaceInstances:(id)arg0 ;
-(void)clearFaceInstances;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif