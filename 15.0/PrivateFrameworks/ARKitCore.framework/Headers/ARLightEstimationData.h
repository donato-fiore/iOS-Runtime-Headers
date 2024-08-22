// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARLIGHTESTIMATIONDATA_H
#define ARLIGHTESTIMATIONDATA_H

@class NSString;
@protocol ARResultData;

#import <Foundation/Foundation.h>

#import "ARLightEstimate.h"

@interface ARLightEstimationData : NSObject <ARResultData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ARLightEstimate *lightEstimate; // ivar: _lightEstimate
@property (readonly) Class superclass;


-(CGFloat)timestamp;


@end


#endif