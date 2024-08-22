// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESPRESSOPROFILINGNETWORKINFO_H
#define ESPRESSOPROFILINGNETWORKINFO_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "EspressoProfilingANEcompilerAnalytics.h"
#import "EspressoProfilingNetworkANEInfo.h"

@interface EspressoProfilingNetworkInfo : NSObject

@property (retain) EspressoProfilingANEcompilerAnalytics *ane_compiler_analytics; // ivar: _ane_compiler_analytics
@property (retain) EspressoProfilingNetworkANEInfo *ane_performance_info; // ivar: _ane_performance_info
@property (retain) NSMutableArray *layers; // ivar: _layers
@property (retain) NSString *network_at_path; // ivar: _network_at_path




@end


#endif