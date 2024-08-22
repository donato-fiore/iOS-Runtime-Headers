// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ODCURAREREPORTFILLERREPORT_H
#define ODCURAREREPORTFILLERREPORT_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface ODCurareReportFillerReport : PBCodable <NSCopying>



@property (nonatomic) BOOL frameworkFailure; // ivar: _frameworkFailure
@property (retain, nonatomic) NSMutableArray *metadataLists; // ivar: _metadataLists
@property (retain, nonatomic) NSMutableArray *modelEvaluationSummaries; // ivar: _modelEvaluationSummaries
@property (retain, nonatomic) NSMutableArray *modelInformationLists; // ivar: _modelInformationLists
@property (retain, nonatomic) NSMutableArray *personalizationEvaluationSummaries; // ivar: _personalizationEvaluationSummaries


+(Class)metadataListType;
+(Class)modelInformationListType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)metadataListAtIndex:(NSUInteger)arg0 ;
-(id)modelEvaluationSummariesAtIndex:(NSUInteger)arg0 ;
-(id)modelInformationListAtIndex:(NSUInteger)arg0 ;
-(id)personalizationEvaluationSummariesAtIndex:(NSUInteger)arg0 ;
-(void)addMetadataList:(id)arg0 ;
-(void)addModelEvaluationSummaries:(id)arg0 ;
-(void)addModelInformationList:(id)arg0 ;
-(void)addPersonalizationEvaluationSummaries:(id)arg0 ;
-(void)clearMetadataLists;
-(void)clearModelEvaluationSummaries;
-(void)clearModelInformationLists;
-(void)clearPersonalizationEvaluationSummaries;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif