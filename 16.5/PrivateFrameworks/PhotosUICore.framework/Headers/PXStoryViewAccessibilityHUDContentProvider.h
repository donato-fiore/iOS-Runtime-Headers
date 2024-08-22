// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYVIEWACCESSIBILITYHUDCONTENTPROVIDER_H
#define PXSTORYVIEWACCESSIBILITYHUDCONTENTPROVIDER_H

@protocol PXStoryDiagnosticHUDContentProvider;

#import <Foundation/Foundation.h>


@interface PXStoryViewAccessibilityHUDContentProvider : NSObject <PXStoryDiagnosticHUDContentProvider>





-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)initWithViewModel:(id)arg0 ;
-(void)attachToAccessibilityIfNeeded;


@end


#endif