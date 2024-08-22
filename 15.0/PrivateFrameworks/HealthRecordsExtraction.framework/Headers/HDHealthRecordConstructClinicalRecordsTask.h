// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEALTHRECORDCONSTRUCTCLINICALRECORDSTASK_H
#define HDHEALTHRECORDCONSTRUCTCLINICALRECORDSTASK_H

@class NSString;
@protocol HDHealthRecordPipelineTask;

#import <Foundation/Foundation.h>

#import "HDHealthRecordProcessingContext.h"

@interface HDHealthRecordConstructClinicalRecordsTask : NSObject <HDHealthRecordPipelineTask>

 {
    HDHealthRecordProcessingContext *_processingContext;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_applyReferenceRulesToClinicalItem:(id)arg0 ruleset:(id)arg1 error:(*id)arg2 ;
-(BOOL)_isEligibleClinicalItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)processWithError:(*id)arg0 ;
-(id)_clinicalRecordWithClinicalItem:(id)arg0 resourceObject:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithProcessingContext:(id)arg0 ;


@end


#endif