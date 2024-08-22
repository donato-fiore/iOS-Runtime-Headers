// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OAXTEXTPARAPROPERTYBAG_H
#define OAXTEXTPARAPROPERTYBAG_H


#import <Foundation/Foundation.h>


@interface OAXTextParaPropertyBag : NSObject



+(?)readParagraphProperties:(?)arg0 paragraphPropertiesdrawingState;
+(?)readSpacingdrawingState;
+(?)readTabList:(?)arg0 paragraphPropertiesdrawingState;
+(int)readBulletScheme:(id)arg0 ;
+(void)readAlign:(id)arg0 paragraphProperties:(id)arg1 ;
+(void)readFontAlign:(id)arg0 paragraphProperties:(id)arg1 ;


@end


#endif