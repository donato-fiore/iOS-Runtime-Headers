// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXVISUALDIAGNOSTICSFACTORY_H
#define PXVISUALDIAGNOSTICSFACTORY_H


#import <Foundation/Foundation.h>


@interface PXVisualDiagnosticsFactory : NSObject



+(id)debugQuickLookObjectWithRootProvider:(id)arg0 ;
+(void)_dismissProgressIndicator:(id)arg0 completionHandler:(id)arg1 ;
+(void)_presentProgressIndicatorFromViewController:(id)arg0 completionHandler:(id)arg1 ;
+(void)requestVisualDiagnosticsPDFDocumentURLWithConfiguration:(id)arg0 resultHandler:(id)arg1 ;
+(void)requestVisualDiagnosticsPDFDocumentWithConfiguration:(id)arg0 resultHandler:(id)arg1 ;
+(void)showVisualDiagnosticsWithConfiguration:(id)arg0 fromViewController:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif