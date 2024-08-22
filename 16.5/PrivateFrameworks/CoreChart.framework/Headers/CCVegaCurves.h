// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCVEGACURVES_H
#define CCVEGACURVES_H


#import <Foundation/Foundation.h>


@interface CCVegaCurves : NSObject



+(struct CGPath *)newPathForAreaWithPoints:(struct ? *)arg0 count:(NSUInteger)arg1 interpolate:(id)arg2 orient:(id)arg3 tension:(CGFloat)arg4 ;
+(struct CGPath *)newPathForLineWithPoints:(struct ? *)arg0 count:(NSUInteger)arg1 interpolate:(id)arg2 orient:(id)arg3 tension:(CGFloat)arg4 ;


@end


#endif