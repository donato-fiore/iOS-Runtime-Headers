// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYDIAGNOSTICOPERATION_H
#define HDONTOLOGYDIAGNOSTICOPERATION_H



#import "HDDiagnosticOperation.h"

@interface HDOntologyDiagnosticOperation : HDDiagnosticOperation



+(void)_appendEntry:(id)arg0 tableFormatter:(id)arg1 ;
-(id)_countOfElementsPerSlotInDatabase:(id)arg0 ;
-(id)_entriesForSlots:(id)arg0 database:(id)arg1 ;
-(id)_expandResultsToIndividualSlots:(id)arg0 ;
-(id)reportFilename;
-(void)_logAndAndAppendFormat:(id)arg0 ;
-(void)_reportBasicChecksForDatabase:(id)arg0 ;
-(void)_reportDomain:(id)arg0 keyValues:(id)arg1 ;
-(void)_reportElementCountsBySlot:(id)arg0 entriesBySlot:(id)arg1 ;
-(void)_reportElementCountsBySlotForDatabase:(id)arg0 ;
-(void)_reportForOntologyDatabase;
-(void)_reportForOntologyDatabase:(id)arg0 ;
-(void)_reportForOntologyFeaturesWithOntologyStore:(id)arg0 ;
-(void)_reportForOntologyKeyValueDomains;
-(void)_reportForOntologyKeyValueDomainsWithDatabase:(id)arg0 ;
-(void)_reportForShardRequirementStatuses:(id)arg0 ;
-(void)_reportLocaleAndRegion;
-(void)_reportOntologyHostURLWithOntologyStore:(id)arg0 ;
-(void)_reportOntologyMetadataForDatabase:(id)arg0 ;
-(void)_reportShardRegistryForDatabase:(id)arg0 ;
-(void)run;


@end


#endif