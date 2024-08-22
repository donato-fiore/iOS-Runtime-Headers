// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMOMANAGER_H
#define HDDEMOMANAGER_H


#import <Foundation/Foundation.h>

#import "_HDDataFaker.h"

@interface HDDemoManager : NSObject {
    _HDDataFaker *_faker;
}




-(BOOL)isProvidingData;
// -(void)generateFakeDataForActivityType:(NSInteger)arg0 minutes:(CGFloat)arg1 objectHandler:(id)arg2 completion:(unk)arg3  ;
-(void)startFakingDataForActivityType:(NSInteger)arg0 locationType:(NSInteger)arg1 speed:(id)arg2 objectHandler:(id)arg3 ;
-(void)stopFakingData;


@end


#endif