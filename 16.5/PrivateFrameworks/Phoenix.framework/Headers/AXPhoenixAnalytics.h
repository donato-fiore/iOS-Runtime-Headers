// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXPHOENIXANALYTICS_H
#define AXPHOENIXANALYTICS_H

@class NSDateFormatter, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXPhoenixConfiguration.h"

@interface AXPhoenixAnalytics : NSObject {
    AXPhoenixConfiguration *_configuration;
    NSDateFormatter *_dateFormatter;
    NSString *_modelVersion;
    NSUInteger _assetVersion;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)_descriptionForEventType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithConfiguration:(id)arg0 modelVersion:(id)arg1 assetVersion:(NSUInteger)arg2 ;
-(void)_sendEvent:(id)arg0 completion:(id)arg1 ;
-(void)logEventWithType:(NSInteger)arg0 machAbsoluteTime:(NSUInteger)arg1 context:(id)arg2 completion:(id)arg3 ;


@end


#endif