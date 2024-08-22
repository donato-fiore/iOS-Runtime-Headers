// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIHELPERS_H
#define DIHELPERS_H


#import <Foundation/Foundation.h>


@interface DIHelpers : NSObject



+(BOOL)executeWithPath:(id)arg0 arguments:(id)arg1 error:(*id)arg2 ;
+(NSUInteger)numBlocksWithSizeStr:(id)arg0 blockSize:(NSUInteger)arg1 ;
+(id)copyDevicePathWithStatfs:(struct statfs *)arg0 ;
+(id)stringWithImageFormat:(NSInteger)arg0 ;


@end


#endif