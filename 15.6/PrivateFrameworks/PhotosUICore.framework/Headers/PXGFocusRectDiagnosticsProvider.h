// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGFOCUSRECTDIAGNOSTICSPROVIDER_H
#define PXGFOCUSRECTDIAGNOSTICSPROVIDER_H

@protocol PXGRectDiagnosticsProvider;

#import <Foundation/Foundation.h>


@interface PXGFocusRectDiagnosticsProvider : NSObject <PXGRectDiagnosticsProvider>





-(void)enumerateRectDiagnosticsForLayout:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif