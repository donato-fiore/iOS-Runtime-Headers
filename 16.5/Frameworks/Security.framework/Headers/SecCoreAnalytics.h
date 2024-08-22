// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECCOREANALYTICS_H
#define SECCOREANALYTICS_H


#import <Foundation/Foundation.h>


@interface SecCoreAnalytics : NSObject



+(id)appNameFromPath:(id)arg0 ;
+(void)sendEvent:(id)arg0 event:(id)arg1 ;
+(void)sendEventLazy:(id)arg0 builder:(id)arg1 ;


@end


#endif