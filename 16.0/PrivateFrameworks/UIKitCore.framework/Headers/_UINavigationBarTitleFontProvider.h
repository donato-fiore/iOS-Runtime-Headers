// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UINAVIGATIONBARTITLEFONTPROVIDER_H
#define _UINAVIGATIONBARTITLEFONTPROVIDER_H


#import <Foundation/Foundation.h>


@interface _UINavigationBarTitleFontProvider : NSObject



+(id)providerForIdiom:(NSInteger)arg0 ;
+(void)registerProviderClass:(Class)arg0 forIdiom:(NSInteger)arg1 ;
-(id)defaultInlineTitleFont;
-(id)defaultLargeTitleFont;
-(id)defaultTitleFont;


@end


#endif