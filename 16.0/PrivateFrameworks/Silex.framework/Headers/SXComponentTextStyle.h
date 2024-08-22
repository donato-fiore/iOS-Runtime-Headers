// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTTEXTSTYLE_H
#define SXCOMPONENTTEXTSTYLE_H

@class UIColor, NSString;
@protocol SXComponentTextStyle, SXTextStyleFontAttributes;


#import "SXTextStyle.h"
#import "SXDropCapStyle.h"
#import "SXJSONArray.h"
#import "SXTextDecoration.h"
#import "SXTextStroke.h"
#import "SXTextShadow.h"

@interface SXComponentTextStyle : SXTextStyle <SXComponentTextStyle>



@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXDropCapStyle *dropCapStyle;
@property (readonly, nonatomic) NSInteger exactLineHeight;
@property (readonly, nonatomic) NSInteger firstLineIndent;
@property (readonly, nonatomic) NSObject<SXTextStyleFontAttributes> *fontAttributes;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) BOOL fontScaling;
@property (readonly, nonatomic) NSInteger fontSize;
@property (readonly, nonatomic) BOOL hangingPunctuation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger hyphenation;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL lineBalancing;
@property (readonly, nonatomic) NSInteger lineHeight;
@property (readonly, nonatomic) SXTextStyle *linkStyle;
@property (readonly, nonatomic) SXJSONArray *listStyle;
@property (readonly, nonatomic) NSInteger paragraphSpacingAfter;
@property (readonly, nonatomic) NSInteger paragraphSpacingBefore;
@property (readonly, nonatomic) CGFloat relativeLineHeight;
@property (readonly, nonatomic) SXTextDecoration *strikethrough;
@property (readonly, nonatomic) SXTextStroke *stroke;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger textAlignment;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) SXTextShadow *textShadow;
@property (readonly, nonatomic) NSInteger textTransform;
@property (readonly, nonatomic) CGFloat tracking;
@property (readonly, nonatomic) SXTextDecoration *underline;
@property (readonly, nonatomic) int verticalAlignment;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(BOOL)fontScalingWithValue:(id)arg0 withType:(int)arg1 ;
-(CGFloat)relativeLineHeightWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)exactLineHeightWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)hyphenationWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)lineHeightWithValue:(id)arg0 withType:(int)arg1 ;
-(NSInteger)textAlignmentWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif