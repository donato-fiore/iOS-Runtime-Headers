// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PXVISUALDIAGNOSTICSTABLECOLUMN_H
#define _PXVISUALDIAGNOSTICSTABLECOLUMN_H

@class NSString;
@protocol PXVisualDiagnosticsTableColumnConfiguration;

#import <Foundation/Foundation.h>


@interface _PXVisualDiagnosticsTableColumn : NSObject <PXVisualDiagnosticsTableColumnConfiguration>



@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) CGFloat width; // ivar: _width


-(id)init;


@end


#endif