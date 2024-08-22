// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXSTORYVISUALDIAGNOSTICSTABLECOLUMN_H
#define _PXSTORYVISUALDIAGNOSTICSTABLECOLUMN_H

@class NSString;
@protocol PXStoryVisualDiagnosticsTableColumnConfiguration;

#import <Foundation/Foundation.h>


@interface _PXStoryVisualDiagnosticsTableColumn : NSObject <PXStoryVisualDiagnosticsTableColumnConfiguration>



@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) CGFloat width; // ivar: _width


-(id)init;


@end


#endif