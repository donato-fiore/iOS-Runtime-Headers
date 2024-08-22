// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTICONIMAGEPROVIDER_H
#define AVTICONIMAGEPROVIDER_H


#import <Foundation/Foundation.h>


@interface AVTIconImageProvider : NSObject



+(void)iconImageForBundleIdentifier:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 completionBlock:(id)arg3 ;
+(void)prewarmIconImageForBundleIdentifier:(id)arg0 size:(struct CGSize )arg1 scale:(CGFloat)arg2 ;


@end


#endif