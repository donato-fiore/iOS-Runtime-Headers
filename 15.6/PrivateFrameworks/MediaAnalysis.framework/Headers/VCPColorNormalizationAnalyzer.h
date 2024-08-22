// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCOLORNORMALIZATIONANALYZER_H
#define VCPCOLORNORMALIZATIONANALYZER_H


#import <Foundation/Foundation.h>

#import "VCPObjectPool.h"

@interface VCPColorNormalizationAnalyzer : NSObject {
    VCPObjectPool *_sessionPool;
}




-(id)init;
-(int)analyzeCGImage:(struct CGImage *)arg0 results:(*id)arg1 ;
-(void)_configureRequest:(id)arg0 withRevision:(NSUInteger)arg1 ;


@end


#endif