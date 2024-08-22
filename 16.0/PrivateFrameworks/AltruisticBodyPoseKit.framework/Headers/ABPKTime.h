// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABPKTIME_H
#define ABPKTIME_H


#import <Foundation/Foundation.h>


@interface ABPKTime : NSObject



+(CGFloat)CMTimeToSeconds:(struct ? )arg0 ;
+(CGFloat)machAbsoluteTimeToSeconds:(NSUInteger)arg0 ;
+(CGFloat)nowInSeconds;
+(NSUInteger)nowAsMachAbsoluteTime;


@end


#endif