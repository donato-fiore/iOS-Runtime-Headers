// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHXFONT_H
#define CHXFONT_H


#import <Foundation/Foundation.h>


@interface CHXFont : NSObject



+(?)defaultEdRunCollectionForTitle:(?)arg0 titleElementstate;
+(?)edFontFromXmlTextPropertiesElementstate;
+(?)edRunCollectionFromXmlTextPropertiesElementstate;
+(?)readParagraphPropertiesFromXmlTextPropertiesParentElementstate;
+(id)defaultEdRunCollectionWithState:(id)arg0 ;
+(id)edFontWithFullOadCharacterProperties:(id)arg0 state:(id)arg1 ;
+(id)edFontWithOadCharacterProperties:(id)arg0 state:(id)arg1 ;
+(id)edFontWithOadTextBody:(id)arg0 state:(id)arg1 ;
+(void)mapFontProperties:(id)arg0 to:(id)arg1 ;
+(void)mapFontProperties:(id)arg0 toTextProps:(id)arg1 withEffects:(id)arg2 ;


@end


#endif