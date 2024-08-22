// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTSTYLE_H
#define SXTEXTSTYLE_H

@class UIColor, NSString;
@protocol SXTextStyle, SXTextStyleFontAttributes;


#import "SXJSONObject.h"
#import "SXJSONArray.h"
#import "SXTextDecoration.h"
#import "SXTextStroke.h"
#import "SXTextShadow.h"

@interface SXTextStyle : SXJSONObject <SXTextStyle>



@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXTextStyleFontAttributes> *fontAttributes;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) NSInteger fontSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SXJSONArray *listStyle;
@property (readonly, nonatomic) SXTextDecoration *strikethrough;
@property (readonly, nonatomic) SXTextStroke *stroke;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) SXTextShadow *textShadow;
@property (readonly, nonatomic) NSInteger textTransform;
@property (readonly, nonatomic) CGFloat tracking;
@property (readonly, nonatomic) SXTextDecoration *underline;
@property (readonly, nonatomic) int verticalAlignment;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;
+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(NSInteger)fontSizeWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)textTransformWithValue:(id)arg0 withType:(int)arg1 ;
-(int)verticalAlignmentWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif