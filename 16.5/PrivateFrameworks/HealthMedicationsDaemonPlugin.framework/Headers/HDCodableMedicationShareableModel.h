// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEMEDICATIONSHAREABLEMODEL_H
#define HDCODABLEMEDICATIONSHAREABLEMODEL_H

@class PBCodable, NSString, HDCodableQuantity, NSMutableArray, HDCodableMedicationDoseEvent;
@protocol NSCopying;


#import "HDCodableMedicationChartSeries.h"
#import "HDCodableMedicationSchedule.h"

@interface HDCodableMedicationShareableModel : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL archived; // ivar: _archived
@property (retain, nonatomic) NSString *audienceRawValue; // ivar: _audienceRawValue
@property (retain, nonatomic) NSString *baseUnitStrength; // ivar: _baseUnitStrength
@property (retain, nonatomic) NSString *basicDoseForm; // ivar: _basicDoseForm
@property (retain, nonatomic) NSString *brandName; // ivar: _brandName
@property (retain, nonatomic) HDCodableMedicationChartSeries *chartSeries; // ivar: _chartSeries
@property (retain, nonatomic) NSString *conceptIdentifier; // ivar: _conceptIdentifier
@property (retain, nonatomic) NSString *eduContentString; // ivar: _eduContentString
@property (nonatomic) NSInteger freeTextMedicationForm; // ivar: _freeTextMedicationForm
@property (nonatomic) NSInteger freeTextMedicationLoggingUnit; // ivar: _freeTextMedicationLoggingUnit
@property (retain, nonatomic) NSString *freeTextMedicationName; // ivar: _freeTextMedicationName
@property (retain, nonatomic) HDCodableQuantity *freeTextMedicationStrengthQuantity; // ivar: _freeTextMedicationStrengthQuantity
@property (retain, nonatomic) NSString *genericName; // ivar: _genericName
@property (nonatomic) BOOL hasArchived;
@property (readonly, nonatomic) BOOL hasAudienceRawValue;
@property (readonly, nonatomic) BOOL hasBaseUnitStrength;
@property (readonly, nonatomic) BOOL hasBasicDoseForm;
@property (readonly, nonatomic) BOOL hasBrandName;
@property (readonly, nonatomic) BOOL hasChartSeries;
@property (readonly, nonatomic) BOOL hasConceptIdentifier;
@property (readonly, nonatomic) BOOL hasEduContentString;
@property (nonatomic) BOOL hasFreeTextMedicationForm;
@property (nonatomic) BOOL hasFreeTextMedicationLoggingUnit;
@property (readonly, nonatomic) BOOL hasFreeTextMedicationName;
@property (readonly, nonatomic) BOOL hasFreeTextMedicationStrengthQuantity;
@property (readonly, nonatomic) BOOL hasGenericName;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (readonly, nonatomic) BOOL hasManufacturedDoseForm;
@property (readonly, nonatomic) BOOL hasMedicationVisualizationConfigJSONString;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (readonly, nonatomic) BOOL hasMostRecentDose;
@property (readonly, nonatomic) BOOL hasOntologyLoggingUnitPlural;
@property (readonly, nonatomic) BOOL hasOntologyLoggingUnitSingular;
@property (readonly, nonatomic) BOOL hasPreferredName;
@property (readonly, nonatomic) BOOL hasSchedule;
@property (readonly, nonatomic) BOOL hasSideEffectsContentString;
@property (retain, nonatomic) NSMutableArray *ingredientComponentStrings; // ivar: _ingredientComponentStrings
@property (nonatomic) NSInteger latestSupportedVersion; // ivar: _latestSupportedVersion
@property (retain, nonatomic) NSString *manufacturedDoseForm; // ivar: _manufacturedDoseForm
@property (retain, nonatomic) NSString *medicationVisualizationConfigJSONString; // ivar: _medicationVisualizationConfigJSONString
@property (nonatomic) NSInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (retain, nonatomic) NSMutableArray *monthHighlights; // ivar: _monthHighlights
@property (retain, nonatomic) HDCodableMedicationDoseEvent *mostRecentDose; // ivar: _mostRecentDose
@property (retain, nonatomic) NSString *ontologyLoggingUnitPlural; // ivar: _ontologyLoggingUnitPlural
@property (retain, nonatomic) NSString *ontologyLoggingUnitSingular; // ivar: _ontologyLoggingUnitSingular
@property (retain, nonatomic) NSString *preferredName; // ivar: _preferredName
@property (retain, nonatomic) HDCodableMedicationSchedule *schedule; // ivar: _schedule
@property (retain, nonatomic) NSString *sideEffectsContentString; // ivar: _sideEffectsContentString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)ingredientComponentStringsAtIndex:(NSUInteger)arg0 ;
-(id)monthHighlightsAtIndex:(NSUInteger)arg0 ;
-(void)addIngredientComponentStrings:(id)arg0 ;
-(void)addMonthHighlights:(id)arg0 ;
-(void)clearIngredientComponentStrings;
-(void)clearMonthHighlights;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif