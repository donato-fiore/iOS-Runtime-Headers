// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAPPLICATIONSTATE_H
#define CKAPPLICATIONSTATE_H


#import <Foundation/Foundation.h>


@interface CKApplicationState : NSObject



+(BOOL)_isUIExtension;
+(BOOL)isApplicationActive;
+(BOOL)isBackground;
+(BOOL)isResizing;
+(BOOL)isWindowForegroundActive:(id)arg0 ;
+(void)setActive:(BOOL)arg0 ;


@end


#endif