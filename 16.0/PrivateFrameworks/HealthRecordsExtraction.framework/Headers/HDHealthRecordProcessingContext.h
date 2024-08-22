// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHRECORDPROCESSINGCONTEXT_H
#define HDHEALTHRECORDPROCESSINGCONTEXT_H

@class NSMutableDictionary, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "HDHealthRecordRuleset.h"

@interface HDHealthRecordProcessingContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *clinicalItemsByType; // ivar: _clinicalItemsByType
@property (retain, nonatomic) NSMutableDictionary *clinicalRecordsByMedicalRecord; // ivar: _clinicalRecordsByMedicalRecord
@property (readonly, nonatomic) HDHealthRecordRuleset *extractionRuleset; // ivar: _extractionRuleset
@property (retain, nonatomic) NSMutableDictionary *medicalRecordsByOriginalResource; // ivar: _medicalRecordsByOriginalResource
@property (retain, nonatomic) NSMutableArray *mutableResources; // ivar: _mutableResources
@property (retain, nonatomic) NSMutableDictionary *parentResourcesByResource; // ivar: _parentResourcesByResource
@property (readonly, copy, nonatomic) NSArray *resources;


-(BOOL)didProcessClinicalRecord:(id)arg0 forMedicalRecord:(id)arg1 error:(*id)arg2 ;
-(BOOL)didProcessMedicalRecord:(id)arg0 forResource:(id)arg1 error:(*id)arg2 ;
-(BOOL)foundResource:(id)arg0 parentResource:(id)arg1 error:(*id)arg2 ;
-(id)createExtractionResultWithError:(*id)arg0 ;
-(id)extractedClinicalItemsForClinicalType:(NSInteger)arg0 ;
-(id)initWithRuleset:(id)arg0 resources:(id)arg1 ;
-(void)setExtractedClinicalItems:(id)arg0 forClinicalType:(NSInteger)arg1 ;


@end


#endif