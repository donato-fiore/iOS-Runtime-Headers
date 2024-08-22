// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTANNOTATIONDATA_H
#define HKINTERACTIVECHARTANNOTATIONDATA_H

@class NSString;
@protocol HKGraphSeriesChartData;

#import <Foundation/Foundation.h>


@interface HKInteractiveChartAnnotationData : NSObject <HKGraphSeriesChartData>



@property (retain, nonatomic) NSString *annotation; // ivar: _annotation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif