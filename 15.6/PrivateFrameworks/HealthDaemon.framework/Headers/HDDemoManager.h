// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDEMOMANAGER_H
#define HDDEMOMANAGER_H


#import <Foundation/Foundation.h>

#import "_HDDataFaker.h"

@interface HDDemoManager : NSObject {
    _HDDataFaker *_faker;
}




-(BOOL)isProvidingData;
// -(void)generateFakeDataForActivityType:(NSInteger)arg0 minutes:(CGFloat)arg1 objectHandler:(id)arg2 completion:(unk)arg3  ;
-(void)startFakingDataForActivityType:(NSInteger)arg0 speed:(id)arg1 objectHandler:(id)arg2 ;
-(void)stopFakingData;


@end


#endif