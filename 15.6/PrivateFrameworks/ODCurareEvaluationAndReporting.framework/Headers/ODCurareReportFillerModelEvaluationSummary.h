// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODCURAREREPORTFILLERMODELEVALUATIONSUMMARY_H
#define ODCURAREREPORTFILLERMODELEVALUATIONSUMMARY_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ODCurareReportFillerDataSet.h"

@interface ODCurareReportFillerModelEvaluationSummary : PBCodable <NSCopying>



@property (retain, nonatomic) ODCurareReportFillerDataSet *dataUsedToEvaluateModel; // ivar: _dataUsedToEvaluateModel
@property (retain, nonatomic) NSString *evaluationDate; // ivar: _evaluationDate
@property (readonly, nonatomic) BOOL hasDataUsedToEvaluateModel;
@property (retain, nonatomic) NSMutableArray *modelEvaluationResults; // ivar: _modelEvaluationResults
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)modelEvaluationResultsAtIndex:(NSUInteger)arg0 ;
-(void)addModelEvaluationResults:(id)arg0 ;
-(void)clearModelEvaluationResults;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif