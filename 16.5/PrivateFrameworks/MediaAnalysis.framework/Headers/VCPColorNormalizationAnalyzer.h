// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCOLORNORMALIZATIONANALYZER_H
#define VCPCOLORNORMALIZATIONANALYZER_H


#import <Foundation/Foundation.h>

#import "VCPObjectPool.h"

@interface VCPColorNormalizationAnalyzer : NSObject {
    VCPObjectPool *_sessionPool;
}




-(id)init;
-(int)analyzeCGImage:(struct CGImage *)arg0 results:(*id)arg1 ;


@end


#endif