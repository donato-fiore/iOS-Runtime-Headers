// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWINFERENCEREQUIREMENT_H
#define BWINFERENCEREQUIREMENT_H

@protocol BWInferenceProvider;

#import <Foundation/Foundation.h>

#import "BWInferenceConfiguration.h"

@interface BWInferenceRequirement : NSObject

@property (readonly, nonatomic) BWInferenceConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSObject<BWInferenceProvider> *provider; // ivar: _provider


-(id)initWithProvider:(id)arg0 configuration:(id)arg1 ;
-(void)dealloc;


@end


#endif