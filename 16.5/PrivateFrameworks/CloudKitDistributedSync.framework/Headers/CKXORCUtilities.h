// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKXORCUTILITIES_H
#define CKXORCUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKXORCUtilities : NSObject



+(void)enumerateColumn:(*void)arg0 includingRoot:(BOOL)arg1 shallow:(BOOL)arg2 withBlock:(id)arg3 ;
+(void)setDefaultValuesForStruct:(NSUInteger)arg0 withRootColumn:(*void)arg1 atOffset:(NSUInteger)arg2 withSchema:(id)arg3 orcHelpers:(id)arg4 ;


@end


#endif