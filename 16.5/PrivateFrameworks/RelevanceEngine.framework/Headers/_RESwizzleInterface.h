// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RESWIZZLEINTERFACE_H
#define _RESWIZZLEINTERFACE_H


#import <Foundation/Foundation.h>


@interface _RESwizzleInterface : NSObject



+(id)_configuredObjects;
-(void)_re_runAfterEngineIsLoaded:(id)arg0 ;
-(void)_re_swizzled_availableRelevanceEngines:(id)arg0 ;
-(void)_re_swizzled_fetchAllElementIdentifiersInRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)_re_swizzled_fetchAllElementsInRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)_re_swizzled_gatherDiagnosticLogsForRelevanceEngine:(id)arg0 completion:(id)arg1 ;
-(void)_re_swizzled_relevanceEngine:(id)arg0 createElementFromDescription:(id)arg1 completion:(id)arg2 ;
-(void)_re_swizzled_relevanceEngine:(id)arg0 encodedObjectAtPath:(id)arg1 completion:(id)arg2 ;
-(void)_re_swizzled_relevanceEngine:(id)arg0 performCommand:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)_re_swizzled_relevanceEngine:(id)arg0 runActionOfElementWithDescription1:(id)arg1 completion:(id)arg2 ;


@end


#endif