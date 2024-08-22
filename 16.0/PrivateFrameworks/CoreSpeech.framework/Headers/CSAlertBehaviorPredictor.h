// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSALERTBEHAVIORPREDICTOR_H
#define CSALERTBEHAVIORPREDICTOR_H


#import <Foundation/Foundation.h>


@interface CSAlertBehaviorPredictor : NSObject



+(NSInteger)predictStartAlertBehaviorFor:(NSInteger)arg0 avSystemController:(id)arg1 hasAOP:(BOOL)arg2 supportVibrator:(BOOL)arg3 isiOS:(BOOL)arg4 isWatchOS:(BOOL)arg5 isHorseman:(BOOL)arg6 isBridgeOS:(BOOL)arg7 recordRoute:(id)arg8 playbackRoute:(id)arg9 ;
+(NSInteger)predictStartAlertBehaviorFor:(NSInteger)arg0 recordRoute:(id)arg1 playbackRoute:(id)arg2 ;


@end


#endif