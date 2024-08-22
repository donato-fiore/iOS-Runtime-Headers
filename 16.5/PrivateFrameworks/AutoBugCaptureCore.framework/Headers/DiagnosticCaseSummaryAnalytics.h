// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIAGNOSTICCASESUMMARYANALYTICS_H
#define DIAGNOSTICCASESUMMARYANALYTICS_H



#import "ObjectAnalytics.h"

@interface DiagnosticCaseSummaryAnalytics : ObjectAnalytics



+(id)listCaseSummaryProperties;
+(id)listSummaryItemFromCaseSummaryDictionary:(id)arg0 ;
+(id)pbRequestForCases:(id)arg0 ;
+(id)stringRepresentationOfAttachmentsWithSize:(id)arg0 ;
+(void)extractPbAttachmentsFromString:(id)arg0 completion:(id)arg1 ;
-(NSInteger)removeAllDiagnosticCaseSummaries;
-(NSInteger)removeDiagnosticCaseSummariesWithState:(short)arg0 olderThan:(NSUInteger)arg1 ;
-(id)diagnosticCaseSummaryDictionaryForIdentifier:(id)arg0 properties:(id)arg1 ;
-(id)fetchCaseSummariesOfType:(id)arg0 fromIdentifier:(id)arg1 count:(NSUInteger)arg2 ;
-(id)fetchCaseSummariesWithIdentifiers:(id)arg0 ;
-(id)init;
-(id)initWithWorkspace:(id)arg0 withCache:(BOOL)arg1 ;
-(void)insertEntityForDiagnosticCase:(id)arg0 ;
-(void)updateSubmittedCases:(id)arg0 ;


@end


#endif