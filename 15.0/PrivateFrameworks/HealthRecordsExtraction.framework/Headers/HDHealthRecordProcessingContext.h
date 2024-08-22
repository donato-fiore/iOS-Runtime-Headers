// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEALTHRECORDPROCESSINGCONTEXT_H
#define HDHEALTHRECORDPROCESSINGCONTEXT_H

@class NSMutableDictionary, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "HDHealthRecordRuleset.h"

@interface HDHealthRecordProcessingContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *clinicalItemsByType; // ivar: _clinicalItemsByType
@property (retain, nonatomic) NSMutableDictionary *clinicalRecordsByResourceIdentifier; // ivar: _clinicalRecordsByResourceIdentifier
@property (readonly, nonatomic) HDHealthRecordRuleset *extractionRuleset; // ivar: _extractionRuleset
@property (retain, nonatomic) NSMutableDictionary *medicalRecordsByResourceIdentifier; // ivar: _medicalRecordsByResourceIdentifier
@property (retain, nonatomic) NSMutableArray *mutableResources; // ivar: _mutableResources
@property (readonly, copy, nonatomic) NSArray *resources;


-(BOOL)addResource:(id)arg0 error:(*id)arg1 ;
-(id)createExtractionResultWithError:(*id)arg0 ;
-(id)extractedClinicalItemsForClinicalType:(NSInteger)arg0 ;
-(id)initWithRuleset:(id)arg0 resources:(id)arg1 ;
-(void)setClinicalRecord:(id)arg0 forResourceIdentifier:(id)arg1 ;
-(void)setExtractedClinicalItems:(id)arg0 forClinicalType:(NSInteger)arg1 ;
-(void)setMedicalRecord:(id)arg0 forResourceIdentifier:(id)arg1 ;


@end


#endif