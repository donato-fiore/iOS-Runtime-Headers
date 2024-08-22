// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ESPRESSOPROFILINGLAYERSUPPORTINFO_H
#define ESPRESSOPROFILINGLAYERSUPPORTINFO_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface EspressoProfilingLayerSupportInfo : NSObject

@property (retain) NSArray *error_private; // ivar: _error_private
@property (retain) NSArray *error_public; // ivar: _error_public
@property BOOL exists; // ivar: _exists
@property BOOL has_perf_warning; // ivar: _has_perf_warning
@property BOOL internal_layer; // ivar: _internal_layer
@property BOOL supported; // ivar: _supported
@property (retain) NSString *type; // ivar: _type




@end


#endif