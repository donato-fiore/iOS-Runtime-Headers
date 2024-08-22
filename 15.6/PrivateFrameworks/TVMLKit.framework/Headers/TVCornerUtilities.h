// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVCORNERUTILITIES_H
#define TVCORNERUTILITIES_H


#import <Foundation/Foundation.h>


@interface TVCornerUtilities : NSObject



+(BOOL)radiiIsZero:(struct TVCornerRadii )arg0 ;
+(CGFloat)radiusFromCornerRadii:(struct TVCornerRadii )arg0 ;
+(struct CGPath *)createPathForRadii:(struct TVCornerRadii )arg0 inRect:(struct CGRect )arg1 ;
+(struct CGPath *)createPathForRadii:(struct TVCornerRadii )arg0 inRect:(struct CGRect )arg1 isContinuous:(BOOL)arg2 ;
+(struct TVCornerRadii )flipCGOriginRadii:(struct TVCornerRadii )arg0 ;
+(struct TVCornerRadii )radiiFromRadius:(CGFloat)arg0 ;


@end


#endif