// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _FBDARKBOOTHELPER_H
#define _FBDARKBOOTHELPER_H


#import <Foundation/Foundation.h>


@interface _FBDarkBootHelper : NSObject



-(BOOL)isBootingDark;
-(void)_setDarkBootEnabled:(BOOL)arg0 ;
-(void)clearBootedDark;
-(void)setNextBootDark;


@end


#endif