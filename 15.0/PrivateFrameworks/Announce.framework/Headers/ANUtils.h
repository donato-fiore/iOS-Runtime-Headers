// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ANUTILS_H
#define ANUTILS_H


#import <Foundation/Foundation.h>


@interface ANUtils : NSObject



+(BOOL)isInternalBuild;
+(CGFloat)machTimeToSeconds:(NSUInteger)arg0 ;
+(NSUInteger)secondsToMachTime:(CGFloat)arg0 ;
+(id)an_dateFormatterForFilename;


@end


#endif