// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICUTILITIES_H
#define ICUTILITIES_H


#import <Foundation/Foundation.h>


@interface ICUtilities : NSObject



+(BOOL)isInternalInstall;
+(BOOL)isInternetReachable;
+(BOOL)isSeedInstall;
+(struct _NSRange )range:(struct _NSRange )arg0 liesWithinRange:(struct _NSRange )arg1 assert:(BOOL)arg2 ;


@end


#endif