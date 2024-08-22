// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFICONGENERATOR_H
#define SFICONGENERATOR_H


#import <Foundation/Foundation.h>


@interface SFIconGenerator : NSObject



+(id)appIconForBundleIdentifier:(id)arg0 imageSize:(struct CGSize )arg1 ;
+(void)getAppIconForBundleIdentifier:(id)arg0 imageDescriptor:(id)arg1 resultHandler:(id)arg2 ;


@end


#endif