// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKICON_H
#define AKICON_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface AKIcon : NSObject {
    CGFloat _scale;
    CGSize _size;
    NSString *_name;
    NSString *_bundleID;
    NSData *_data;
    NSUInteger _maskingStyle;
}




+(CGFloat)_screenScale;
+(CGFloat)defaultScale;
+(id)iconWithBundleID:(id)arg0 size:(struct CGSize )arg1 ;
+(id)iconWithData:(id)arg0 scale:(CGFloat)arg1 ;
+(id)iconWithIconContext:(id)arg0 ;
+(id)iconWithName:(id)arg0 size:(struct CGSize )arg1 ;
+(id)iconWithPresentationContext:(id)arg0 ;
-(BOOL)_hasInstalledApplicationWithBundleID:(id)arg0 ;
-(BOOL)_shouldMaskImage;
-(NSUInteger)iconType;
-(id)_applicationProxyForBundleID:(id)arg0 ;
-(id)_catalogueImageWithName:(id)arg0 ;
-(id)_dataForImage:(id)arg0 ;
-(id)_iconWithImage:(id)arg0 ;
-(id)_imageWithBundleID:(id)arg0 size:(struct CGSize )arg1 masked:(BOOL)arg2 ;
-(id)_imageWithData:(id)arg0 scale:(CGFloat)arg1 masked:(BOOL)arg2 ;
-(id)_imageWithIcon:(id)arg0 size:(struct CGSize )arg1 masked:(BOOL)arg2 ;
-(id)_imageWithName:(id)arg0 size:(struct CGSize )arg1 masked:(BOOL)arg2 ;
-(id)automaskedImage;
-(id)automaskedImageData;
-(id)initWithBundleID:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithData:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithIconContext:(id)arg0 ;
-(id)initWithName:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithPresentationContext:(id)arg0 ;
-(id)maskedImage;
-(id)maskedImageData;
-(id)unmaskedImage;
-(id)unmaskedImageData;
-(struct CGImage *)_CGImageForImage:(id)arg0 ;


@end


#endif