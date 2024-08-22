// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWCOREANALYTICSREPORTER_H
#define BWCOREANALYTICSREPORTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWCoreAnalyticsReporter : NSObject {
    NSObject<OS_dispatch_queue> *_coreAnalyticsDispatchQueue;
}




+(id)geometricDistortionCorrectionSourceToShortString:(int)arg0 ;
+(id)shallowDepthOfFieldEffectStatusToString:(int)arg0 ;
+(id)sharedInstance;
+(int)clientApplicationIDType:(id)arg0 ;
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)sendEvent:(id)arg0 ;


@end


#endif