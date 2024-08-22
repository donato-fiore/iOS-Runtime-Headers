// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMDEMERGENCYCALLINFOPUBLISHER_H
#define FMDEMERGENCYCALLINFOPUBLISHER_H


#import <Foundation/Foundation.h>

#import "FMDEmergencyCallInfoPublisherConfiguration.h"

@interface FMDEmergencyCallInfoPublisher : NSObject

@property (retain, nonatomic) FMDEmergencyCallInfoPublisherConfiguration *publisherConfig; // ivar: _publisherConfig


-(id)initWithConfiguration:(id)arg0 ;
-(void)publishInfo:(id)arg0 completion:(id)arg1 ;


@end


#endif