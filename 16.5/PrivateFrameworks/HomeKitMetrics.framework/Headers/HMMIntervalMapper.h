// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMINTERVALMAPPER_H
#define HMMINTERVALMAPPER_H


#import <Foundation/Foundation.h>


@interface HMMIntervalMapper : NSObject



+(id)unsignedClosedOpenFixedIntervalMapper:(id)arg0 ;
+(id)unsignedOpenClosedFixedIntervalMapper:(id)arg0 ;
-(id)intervalForValue:(NSUInteger)arg0 ;
-(id)intervalIndexForValue:(NSUInteger)arg0 ;


@end


#endif