// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEALTHRECORDCONSTRUCTMEDICALRECORDSTASK_H
#define HDHEALTHRECORDCONSTRUCTMEDICALRECORDSTASK_H

@class NSString;
@protocol HDHealthRecordPipelineTask;

#import <Foundation/Foundation.h>

#import "HDHealthRecordProcessingContext.h"

@interface HDHealthRecordConstructMedicalRecordsTask : NSObject <HDHealthRecordPipelineTask>

 {
    HDHealthRecordProcessingContext *_processingContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_extractKeyPathsWithClinicalItem:(id)arg0 ruleset:(id)arg1 ;
+(BOOL)_unresolvableReferencesPresentInClinicalItem:(id)arg0 ;
+(BOOL)_unsupportedModifierExtensionsPresentInClinicalItem:(id)arg0 ;
-(BOOL)_collectMedicalRecordPropertiesWithError:(*id)arg0 ;
-(BOOL)processWithError:(*id)arg0 ;
-(id)_medicalRecordWithClinicalItem:(id)arg0 clinicalType:(NSInteger)arg1 ruleset:(id)arg2 error:(*id)arg3 ;
-(id)_unknownMedicalRecordWithClinicalItem:(id)arg0 ruleset:(id)arg1 error:(*id)arg2 ;
-(id)initWithProcessingContext:(id)arg0 ;


@end


#endif