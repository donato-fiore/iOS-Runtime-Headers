// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONGALLERYICONPROVIDER_H
#define PRCOMPLICATIONGALLERYICONPROVIDER_H


#import <Foundation/Foundation.h>


@interface PRComplicationGalleryIconProvider : NSObject



+(void)loadIconImageForApplicationBundleIdentifier:(id)arg0 atWidth:(CGFloat)arg1 completion:(id)arg2 ;
+(void)loadIconImageForExtensionBundleIdentifier:(id)arg0 atWidth:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif