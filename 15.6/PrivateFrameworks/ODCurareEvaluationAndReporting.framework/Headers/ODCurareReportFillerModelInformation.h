// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODCURAREREPORTFILLERMODELINFORMATION_H
#define ODCURAREREPORTFILLERMODELINFORMATION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ODCurareReportFillerDataSet.h"
#import "ODCurareReportFillerModelHyperparameters.h"

@interface ODCurareReportFillerModelInformation : PBCodable <NSCopying>



@property (retain, nonatomic) ODCurareReportFillerDataSet *dataUsedToPersonalizeModel; // ivar: _dataUsedToPersonalizeModel
@property (readonly, nonatomic) BOOL hasDataUsedToPersonalizeModel;
@property (readonly, nonatomic) BOOL hasModelCreationDate;
@property (readonly, nonatomic) BOOL hasModelHyperparameters;
@property (nonatomic) BOOL isDefaultModel; // ivar: _isDefaultModel
@property (retain, nonatomic) NSString *modelCreationDate; // ivar: _modelCreationDate
@property (retain, nonatomic) ODCurareReportFillerModelHyperparameters *modelHyperparameters; // ivar: _modelHyperparameters
@property (retain, nonatomic) NSString *modelName; // ivar: _modelName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif