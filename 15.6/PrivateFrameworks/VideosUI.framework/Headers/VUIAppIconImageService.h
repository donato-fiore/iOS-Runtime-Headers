// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIAPPICONIMAGESERVICE_H
#define VUIAPPICONIMAGESERVICE_H


#import <Foundation/Foundation.h>


@interface VUIAppIconImageService : NSObject



+(CGFloat)iconCornerRadiusForSize:(struct CGSize )arg0 ;
+(id)_MD5StringForString:(id)arg0 ;
+(id)_cachePath;
+(id)_cachedImageForKey:(id)arg0 ;
+(id)_imageURLForInstallable:(id)arg0 size:(struct CGSize )arg1 ;
+(id)_keyForInstallable:(id)arg0 size:(struct CGSize )arg1 ;
+(void)_cacheImage:(id)arg0 forKey:(id)arg1 ;
+(void)fetchIconForInstallable:(id)arg0 size:(struct CGSize )arg1 completion:(id)arg2 ;


@end


#endif