// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPROUTEPREDICTION_H
#define ARPROUTEPREDICTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ARPRoutePrediction : NSObject

@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy, nonatomic) NSString *outputDeviceID; // ivar: _outputDeviceID


-(id)description;
-(id)initWithOutputDeviceID:(id)arg0 confidence:(CGFloat)arg1 ;


@end


#endif