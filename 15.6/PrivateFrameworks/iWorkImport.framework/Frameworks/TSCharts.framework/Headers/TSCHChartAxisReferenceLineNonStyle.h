// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTAXISREFERENCELINENONSTYLE_H
#define TSCHCHARTAXISREFERENCELINENONSTYLE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "TSCHChartAxisID.h"

@interface TSCHChartAxisReferenceLineNonStyle : NSObject

@property (copy, nonatomic) TSCHChartAxisID *axisIdentifier; // ivar: _axisIdentifier
@property (copy, nonatomic) NSArray *referenceLineNonStyleItems; // ivar: _referenceLineNonStyleItems


-(void)didInitFromSOS;


@end


#endif