// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWINFERENCEDATADEPENDENCY_H
#define BWINFERENCEDATADEPENDENCY_H


#import <Foundation/Foundation.h>

#import "BWInferenceDataRequirement.h"
#import "BWInferenceRequirement.h"

@interface BWInferenceDataDependency : NSObject

@property (readonly, nonatomic) BWInferenceDataRequirement *dataRequirement; // ivar: _dataRequirement
@property (readonly, nonatomic) BWInferenceRequirement *inferenceRequirement; // ivar: _inferenceRequirement


-(id)initWithInferenceRequirement:(id)arg0 dependentOnDataRequirement:(id)arg1 ;
-(void)dealloc;


@end


#endif