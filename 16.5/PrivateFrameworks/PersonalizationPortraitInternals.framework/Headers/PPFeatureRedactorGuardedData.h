// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPFEATUREREDACTORGUARDEDDATA_H
#define PPFEATUREREDACTORGUARDEDDATA_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PPFeatureRedactorGuardedData : NSObject {
    NSDictionary *_allowedFeatures;
    BOOL _shouldRedactFeatures;
    BOOL _shouldTranslateAllowedFeatures;
}






@end


#endif