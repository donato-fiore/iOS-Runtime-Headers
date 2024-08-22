// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESPRESSOPROFILINGLAYERINFO_H
#define ESPRESSOPROFILINGLAYERINFO_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "EspressoProfilingLayerSupportInfo.h"

@interface EspressoProfilingLayerInfo : NSObject

@property CGFloat average_runtime; // ivar: _average_runtime
@property (retain) NSString *debug_name; // ivar: _debug_name
@property (retain) EspressoProfilingLayerSupportInfo *main_engine_support; // ivar: _main_engine_support
@property (retain) NSString *name; // ivar: _name
@property (retain) NSDictionary *per_platform_support; // ivar: _per_platform_support
@property (retain) NSArray *runtimes; // ivar: _runtimes
@property int selected_runtime_engine; // ivar: _selected_runtime_engine




@end


#endif