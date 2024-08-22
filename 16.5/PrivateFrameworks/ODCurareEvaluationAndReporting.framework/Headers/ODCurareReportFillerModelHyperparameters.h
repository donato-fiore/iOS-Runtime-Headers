// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ODCURAREREPORTFILLERMODELHYPERPARAMETERS_H
#define ODCURAREREPORTFILLERMODELHYPERPARAMETERS_H

@class PBCodable;
@protocol NSCopying;



@interface ODCurareReportFillerModelHyperparameters : PBCodable <NSCopying>

 {
    ? _hyperparameterIndices;
    ? _hyperparameterValues;
}


@property (readonly, nonatomic) *unsigned int hyperparameterIndices;
@property (readonly, nonatomic) NSUInteger hyperparameterIndicesCount;
@property (readonly, nonatomic) *float hyperparameterValues;
@property (readonly, nonatomic) NSUInteger hyperparameterValuesCount;
@property (nonatomic) unsigned int versionNumber; // ivar: _versionNumber


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(float)hyperparameterValuesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)hyperparameterIndicesAtIndex:(NSUInteger)arg0 ;
-(void)addHyperparameterIndices:(unsigned int)arg0 ;
-(void)addHyperparameterValues:(float)arg0 ;
-(void)clearHyperparameterIndices;
-(void)clearHyperparameterValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif