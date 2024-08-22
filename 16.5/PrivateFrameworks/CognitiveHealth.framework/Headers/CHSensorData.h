// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSENSORDATA_H
#define CHSENSORDATA_H

@protocol CHSensorDataProtocol;

#import <Foundation/Foundation.h>


@interface CHSensorData : NSObject {
    NSObject<CHSensorDataProtocol> *_xpcClient;
}




-(id)init;
-(void)aggregatedMotionAndAppLaunchDataFromDate:(id)arg0 toDate:(id)arg1 completion:(id)arg2 ;
-(void)embeddingVectorForBundleId:(id)arg0 completion:(id)arg1 ;


@end


#endif