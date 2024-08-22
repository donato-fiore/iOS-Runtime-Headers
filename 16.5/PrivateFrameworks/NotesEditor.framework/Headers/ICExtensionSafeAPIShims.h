// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICEXTENSIONSAFEAPISHIMS_H
#define ICEXTENSIONSAFEAPISHIMS_H


#import <Foundation/Foundation.h>


@interface ICExtensionSafeAPIShims : NSObject



+(BOOL)canOpenURL:(id)arg0 ;
+(NSInteger)applicationState;
+(id)openURLHandler:(SEL)arg0 ;
+(void)openURL:(id)arg0 originatingView:(id)arg1 completionHandler:(id)arg2 ;
+(void)setOpenURLHandler:(id)arg0 ;


@end


#endif