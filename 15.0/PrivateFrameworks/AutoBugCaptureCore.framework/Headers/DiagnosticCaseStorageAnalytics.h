// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIAGNOSTICCASESTORAGEANALYTICS_H
#define DIAGNOSTICCASESTORAGEANALYTICS_H



#import "ObjectAnalytics.h"

@interface DiagnosticCaseStorageAnalytics : ObjectAnalytics



-(NSInteger)removeAllDiagnosticCaseStorages;
-(id)allDiagnosticCasesStorage;
-(id)allDiagnosticCasesStorageDictionariesWithProperties:(id)arg0 ;
-(id)diagnosticCaseDictionaryKeys;
-(id)diagnosticCaseStorageDictionaryForIdentifier:(id)arg0 properties:(id)arg1 ;
-(id)diagnosticCaseStorageWithId:(id)arg0 ;
-(id)diagnosticCaseStorageWithIdentifier:(id)arg0 ;
-(id)historicalDiagnosticCaseStorageDictionaryFromIdentifier:(id)arg0 withEvents:(BOOL)arg1 count:(NSUInteger)arg2 ;
-(id)historicalDiagnosticCaseStorageFromIdentifier:(id)arg0 count:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithWorkspace:(id)arg0 withCache:(BOOL)arg1 ;


@end


#endif