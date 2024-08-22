// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIIMAGEFACTORY_H
#define VUIIMAGEFACTORY_H


#import <Foundation/Foundation.h>


@interface VUIImageFactory : NSObject



+(id)URLFromSource:(id)arg0 extension:(id)arg1 cropCode:(id)arg2 imageSize:(struct CGSize )arg3 centerGrowth:(BOOL)arg4 focusSizeIncrease:(CGFloat)arg5 ;
+(id)_getResourceImageFromDescriptor:(id)arg0 ;
+(id)_imageProxyWithURL:(id)arg0 ;
+(id)_makeImageViewWithDescriptor:(id)arg0 proxy:(id)arg1 existingView:(id)arg2 ;
+(id)makeImageProxyWithDescriptor:(id)arg0 ;
+(id)makeImageViewWithDescriptor:(id)arg0 existingView:(id)arg1 ;
+(id)makeImageViewWithResourceDescriptor:(id)arg0 existingView:(id)arg1 ;


@end


#endif