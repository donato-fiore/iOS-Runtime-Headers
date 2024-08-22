// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTAXISREFERENCELINESTYLE_H
#define TSCHCHARTAXISREFERENCELINESTYLE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "TSCHChartAxisID.h"

@interface TSCHChartAxisReferenceLineStyle : NSObject

@property (copy, nonatomic) TSCHChartAxisID *axisIdentifier; // ivar: _axisIdentifier
@property (copy, nonatomic) NSArray *referenceLineStyles; // ivar: _referenceLineStyles


-(void)didInitFromSOS;


@end


#endif