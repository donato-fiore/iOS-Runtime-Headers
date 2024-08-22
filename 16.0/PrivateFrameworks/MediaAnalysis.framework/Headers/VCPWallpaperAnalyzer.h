// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPWALLPAPERANALYZER_H
#define VCPWALLPAPERANALYZER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "VCPLoaned.h"

@interface VCPWallpaperAnalyzer : NSObject {
    VCPLoaned *_modelEspresso;
    *float _inputsData;
    NSString *_resConfig;
}




+(id)sharedModelPool;
-(id)init;
-(int)analyzeWithSceneprint:(id)arg0 results:(*id)arg1 cancel:(id)arg2 ;
-(int)createModel;


@end


#endif