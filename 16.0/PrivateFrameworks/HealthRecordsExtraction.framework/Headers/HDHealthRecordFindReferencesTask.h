// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHRECORDFINDREFERENCESTASK_H
#define HDHEALTHRECORDFINDREFERENCESTASK_H


#import <Foundation/Foundation.h>

#import "HDHealthRecordRuleset.h"

@interface HDHealthRecordFindReferencesTask : NSObject {
    HDHealthRecordRuleset *_ruleset;
}




-(BOOL)_canProcessResource:(id)arg0 ;
-(BOOL)_isIrretrievableReference:(id)arg0 serverBaseURL:(id)arg1 ;
-(BOOL)_resourceReference:(id)arg0 containedInResource:(id)arg1 ;
-(BOOL)processContainedResourcesInProcessingContext:(id)arg0 error:(*id)arg1 ;
-(id)_filterResources:(id)arg0 ;
-(id)_processedContainReferencesResourceWithResource:(id)arg0 processingContext:(id)arg1 rule:(id)arg2 allResources:(id)arg3 ;
-(id)_processedRetrieveReferencesResourceWithResource:(id)arg0 processingContext:(id)arg1 rule:(id)arg2 allResources:(id)arg3 ;
-(id)_resourceForReference:(id)arg0 containedInResource:(id)arg1 error:(*id)arg2 ;
-(id)_resourceReference:(id)arg0 presentInResources:(id)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)initWithRuleset:(id)arg0 ;
-(id)processResourcesForReferenceExtractionRequest:(id)arg0 error:(*id)arg1 ;


@end


#endif