// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXTHEME_H
#define OAXTHEME_H


#import <Foundation/Foundation.h>


@interface OAXTheme : NSObject



+(?)childNamed:(?)arg0 inParent:(?)arg1 fallbackParentdrawingState;
+(?)readDefaultProperties:(?)arg0 fallback:(?)arg1 defaultPropertiesdrawingState;
+(?)readObjectDefaults:(?)arg0 themedrawingState;
+(?)readObjectDefaultsFromParent:(?)arg0 defaultsName:(?)arg1 toObjectDefaultsdrawingState;
+(void)readFromPackagePart:(id)arg0 toTheme:(id)arg1 state:(id)arg2 ;
+(void)readFromThemeData:(char *)arg0 themeDataSize:(unsigned int)arg1 toTheme:(id)arg2 xmlDrawingState:(id)arg3 ;


@end


#endif