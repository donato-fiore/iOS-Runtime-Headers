// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUCOMPOSITIONUTILITIES_H
#define NUCOMPOSITIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface NUCompositionUtilities : NSObject



+(BOOL)canRetainDolbyMetadata:(id)arg0 ;
+(BOOL)dumpComposition:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
+(BOOL)dumpComposition:(id)arg0 withName:(id)arg1 ;
+(BOOL)isHDRComposition:(id)arg0 ;


@end


#endif