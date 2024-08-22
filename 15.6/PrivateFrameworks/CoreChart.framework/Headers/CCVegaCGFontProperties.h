// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCVEGACGFONTPROPERTIES_H
#define CCVEGACGFONTPROPERTIES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CCVegaCGFontProperties : NSObject

@property (retain, nonatomic) NSString *fontFamily; // ivar: fontFamily
@property (retain, nonatomic) NSString *fontSize; // ivar: fontSize
@property (retain, nonatomic) NSString *fontStyle; // ivar: fontStyle
@property (retain, nonatomic) NSString *fontVariant; // ivar: fontVariant
@property (retain, nonatomic) NSString *fontWeight; // ivar: fontWeight
@property (retain, nonatomic) NSString *lineHeight; // ivar: lineHeight


-(id)initWithCSSFontString:(id)arg0 ;


@end


#endif