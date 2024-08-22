// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSTORYVISUALDIAGNOSTICSFACTORY_H
#define PXSTORYVISUALDIAGNOSTICSFACTORY_H


#import <Foundation/Foundation.h>


@interface PXStoryVisualDiagnosticsFactory : NSObject



+(id)debugQuickLookObjectWithRootProvider:(id)arg0 ;
+(void)_dismissProgressIndicator:(id)arg0 completionHandler:(id)arg1 ;
+(void)_presentProgressIndicatorFromViewController:(id)arg0 completionHandler:(id)arg1 ;
+(void)requestVisualDiagnosticsPDFDocumentURLWithConfiguration:(id)arg0 resultHandler:(id)arg1 ;
+(void)requestVisualDiagnosticsPDFDocumentWithConfiguration:(id)arg0 resultHandler:(id)arg1 ;
+(void)showVisualDiagnosticsWithConfiguration:(id)arg0 fromViewController:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif