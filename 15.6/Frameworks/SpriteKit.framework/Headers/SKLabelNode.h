// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKLABELNODE_H
#define SKLABELNODE_H

@class NSAttributedString, UIColor, NSString;


#import "SKNode.h"

@interface SKLabelNode : SKNode {
    *void _skcLabelNode;
}


@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSInteger blendMode;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) CGFloat colorBlendFactor;
@property (retain, nonatomic) UIColor *fontColor;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) CGFloat fontSize;
@property (nonatomic) NSInteger horizontalAlignmentMode;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) CGFloat preferredMaxLayoutWidth;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger verticalAlignmentMode;


+(BOOL)supportsSecureCoding;
+(id)_labelNodeWithFontNamed:(id)arg0 ;
+(id)_labelNodeWithFontTexture:(id)arg0 fontDataString:(id)arg1 ;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
+(id)labelNodeWithAttributedText:(id)arg0 ;
+(id)labelNodeWithFontNamed:(id)arg0 ;
+(id)labelNodeWithText:(id)arg0 ;
-(*void)_makeBackingNode;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)_getTextSprites;
-(id)attributedString;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFontNamed:(id)arg0 ;
-(struct CGRect )frame;
-(void)_didMakeBackingNode;
-(void)_initialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setFont:(struct __CTFont *)arg0 ;
-(void)setUIFont:(id)arg0 ;


@end


#endif