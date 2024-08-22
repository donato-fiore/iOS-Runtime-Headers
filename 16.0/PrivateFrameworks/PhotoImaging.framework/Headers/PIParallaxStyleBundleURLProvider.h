// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXSTYLEBUNDLEURLPROVIDER_H
#define PIPARALLAXSTYLEBUNDLEURLPROVIDER_H

@class NSBundle;
@protocol PIParallaxStyleURLProvider;

#import <Foundation/Foundation.h>


@interface PIParallaxStyleBundleURLProvider : NSObject <PIParallaxStyleURLProvider>

 {
    NSBundle *_bundle;
}




-(id)init;
-(id)urlForIdentifier:(id)arg0 ;


@end


#endif