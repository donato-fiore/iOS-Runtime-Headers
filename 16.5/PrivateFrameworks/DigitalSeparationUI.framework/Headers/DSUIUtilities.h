// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSUIUTILITIES_H
#define DSUIUTILITIES_H


#import <Foundation/Foundation.h>


@interface DSUIUtilities : NSObject



+(BOOL)isPlaceholderForApp:(id)arg0 ;
+(id)appIconForAppID:(id)arg0 format:(int)arg1 ;
+(id)setUpBoldButtonForController:(id)arg0 title:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
+(id)setUpLearnMoreButtonForController:(id)arg0 selector:(SEL)arg1 ;
+(id)setUpLinkButtonForController:(id)arg0 title:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;


@end


#endif