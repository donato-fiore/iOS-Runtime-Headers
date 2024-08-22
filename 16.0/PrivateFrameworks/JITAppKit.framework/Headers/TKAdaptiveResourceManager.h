// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKADAPTIVERESOURCEMANAGER_H
#define TKADAPTIVERESOURCEMANAGER_H


#import <Foundation/Foundation.h>


@interface TKAdaptiveResourceManager : NSObject



+(id)traitCollection;
+(struct CGSize )readableContentSize;
+(struct CGSize )size;
+(void)adaptiveMetricsDidChange;
+(void)addObject:(id)arg0 ;
+(void)removeObject:(id)arg0 ;
+(void)setOverrideTrackingAdaptiveView:(id)arg0 ;
+(void)setup;
+(void)windowSizeDidChange:(id)arg0 ;


@end


#endif