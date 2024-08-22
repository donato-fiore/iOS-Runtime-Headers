// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIMAGECOMPARE_H
#define PKIMAGECOMPARE_H


#import <Foundation/Foundation.h>


@interface PKImageCompare : NSObject



+(BOOL)saveImage:(struct CGImage *)arg0 toPath:(id)arg1 ;
+(id)filterImage:(struct CGImage *)arg0 ;
+(id)stringFromSize:(struct CGSize )arg0 ;
+(struct ? )compareImage:(struct CGImage *)arg0 toMasterImage:(struct CGImage *)arg1 filename:(id)arg2 differenceImageOutputPath:(id)arg3 diffWhite:(BOOL)arg4 stdDevThreshhold:(CGFloat)arg5 ;


@end


#endif