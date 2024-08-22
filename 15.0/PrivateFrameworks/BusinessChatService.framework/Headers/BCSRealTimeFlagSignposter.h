// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSREALTIMEFLAGSIGNPOSTER_H
#define BCSREALTIMEFLAGSIGNPOSTER_H

@class NSString;
@protocol BCSRealTimeFlagMeasurementHandler;


#import "BCSRealTimeShardSignposter.h"

@interface BCSRealTimeFlagSignposter : BCSRealTimeShardSignposter <BCSRealTimeFlagMeasurementHandler>

 {
    NSInteger _signposterType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)flagMeasurementDidChange:(BOOL)arg0 forMeasurement:(id)arg1 ;


@end


#endif