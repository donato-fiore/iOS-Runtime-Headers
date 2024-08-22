// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKUTILITIES_H
#define DKUTILITIES_H


#import <Foundation/Foundation.h>


@interface DKUtilities : NSObject



+(Class)diagnosticInputsClassAttribute;
+(id)_fetchItemProviderFromItems:(id)arg0 withError:(*id)arg1 ;
+(id)_sharedParsingFailedError;
+(id)acceptableDecoderClasses;
+(id)extensionAttributes;
+(id)inputsForDiagnostic:(id)arg0 predicates:(id)arg1 specifications:(id)arg2 parameters:(id)arg3 ;
+(id)inputsUsingClass:(Class)arg0 diagnostic:(id)arg1 predicates:(id)arg2 specifications:(id)arg3 parameters:(id)arg4 ;
+(void)moveFilesToSharedContainerInMutableResult:(id)arg0 ;


@end


#endif