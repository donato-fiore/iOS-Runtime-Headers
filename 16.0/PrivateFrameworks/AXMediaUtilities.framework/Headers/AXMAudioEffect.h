// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMAUDIOEFFECT_H
#define AXMAUDIOEFFECT_H


#import <Foundation/Foundation.h>

#import "AXMAudioDataSource.h"

@interface AXMAudioEffect : NSObject

@property (weak, nonatomic) AXMAudioDataSource *inputSource; // ivar: _inputSource


-(void)processSamples:(NSUInteger)arg0 ;


@end


#endif