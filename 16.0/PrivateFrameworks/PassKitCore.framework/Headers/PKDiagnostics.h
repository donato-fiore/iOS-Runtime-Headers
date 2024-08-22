// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDIAGNOSTICS_H
#define PKDIAGNOSTICS_H


#import <Foundation/Foundation.h>


@interface PKDiagnostics : NSObject



+(id)_allPasses;
+(id)_metadataForCardAtURL:(id)arg0 ;
+(id)_secureElementData;
+(id)generateUbiquityDiagnosticsFile:(BOOL)arg0 ;
+(void)_createDiagnosticJsonWithDictionary:(id)arg0 hasLibrary:(BOOL)arg1 completion:(id)arg2 ;
+(void)generateDiagnosticsPackageWithPassLibrary:(BOOL)arg0 completion:(id)arg1 ;
+(void)generateZippedDiagnosticsPackageWithPassLibrary:(BOOL)arg0 completion:(id)arg1 ;
+(void)saveTransitState:(id)arg0 forPaymentApplication:(id)arg1 ;


@end


#endif