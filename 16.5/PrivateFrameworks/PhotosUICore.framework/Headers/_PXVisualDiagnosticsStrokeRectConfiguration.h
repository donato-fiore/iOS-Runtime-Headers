// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXVISUALDIAGNOSTICSSTROKERECTCONFIGURATION_H
#define _PXVISUALDIAGNOSTICSSTROKERECTCONFIGURATION_H

@class UIColor;
@protocol PXVisualDiagnosticsStrokeRectConfiguration;

#import <Foundation/Foundation.h>


@interface _PXVisualDiagnosticsStrokeRectConfiguration : NSObject <PXVisualDiagnosticsStrokeRectConfiguration>



@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (copy, nonatomic) UIColor *strokeColor; // ivar: _strokeColor


-(id)init;


@end


#endif