// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGRECTDIAGNOSTICSLAYER_H
#define PXGRECTDIAGNOSTICSLAYER_H

@class CALayer, NSArray;


#import "PXGLayout.h"

@interface PXGRectDiagnosticsLayer : CALayer

@property (retain, nonatomic) PXGLayout *layout; // ivar: _layout
@property (copy, nonatomic) NSArray *rectDiagnosticsProviders; // ivar: _rectDiagnosticsProviders


+(id)defaultRectDiagnosticsProviders;
-(void)update;


@end


#endif