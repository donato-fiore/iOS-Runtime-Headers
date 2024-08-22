// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLATTRIBUTEDSTRING_ATTRIBUTES_H
#define TMLATTRIBUTEDSTRING_ATTRIBUTES_H

@class NSString, NSNumber, NSTextAttachment, NSDictionary, UIColor, UIFont, NSParagraphStyle, NSShadow;
@protocol NSCopying, TMLRuntimeObject;

#import <Foundation/Foundation.h>


@interface TMLAttributedString_Attributes : NSObject <NSCopying, TMLRuntimeObject>

 {
    BOOL _created;
}


@property (retain, nonatomic) NSString *accessibilitySpeechIPANotation;
@property (retain, nonatomic) NSString *accessibilitySpeechLanguage;
@property (retain, nonatomic) NSNumber *accessibilitySpeechPitch;
@property (nonatomic) BOOL accessibilitySpeechPunctuation;
@property (retain, nonatomic) NSNumber *accessibilitySpeechQueueAnnouncement;
@property (retain, nonatomic) NSNumber *accessibilityTextHeadingLevel;
@property (retain, nonatomic) NSTextAttachment *attachment;
@property (copy, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) CGFloat baselineOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat expansion;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *kern;
@property (nonatomic) NSInteger ligature;
@property (retain, nonatomic) id *link;
@property (nonatomic) CGFloat obliqueness;
@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) NSInteger strikethroughStyle;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) CGFloat strokeWidth;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger superscript;
@property (retain, nonatomic) NSString *textEffect;
@property (retain, nonatomic) UIColor *underlineColor;
@property (nonatomic) NSInteger underlineStyle;
@property (nonatomic) NSInteger verticalGlyphForm;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setAXAttribute:(id)arg0 value:(id)arg1 ;
-(void)setAttribute:(id)arg0 value:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)tmlObjectCompleted;


@end


#endif