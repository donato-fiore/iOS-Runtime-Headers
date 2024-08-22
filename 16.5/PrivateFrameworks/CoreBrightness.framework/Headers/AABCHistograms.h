// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AABCHISTOGRAMS_H
#define AABCHISTOGRAMS_H


#import <Foundation/Foundation.h>

#import "CBHistogramBuilder.h"

@interface AABCHistograms : NSObject

@property (readonly) CBHistogramBuilder *E; // ivar: _E
@property (readonly) CBHistogramBuilder *L; // ivar: _L
@property (readonly) CBHistogramBuilder *LDevice; // ivar: _LDevice
@property (readonly) CBHistogramBuilder *LDeviceOff; // ivar: _LDeviceOff
@property (readonly) CBHistogramBuilder *LLPM; // ivar: _LLPM
@property (readonly) CBHistogramBuilder *LOff; // ivar: _LOff


-(id)init;
-(void)dealloc;
-(void)submit;


@end


#endif