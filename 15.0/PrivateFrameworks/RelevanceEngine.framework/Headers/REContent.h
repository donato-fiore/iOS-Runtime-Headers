// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RECONTENT_H
#define RECONTENT_H

@class NSMutableDictionary, NSTimeZone, UIImage, NSString, CLKImageProvider, NSNumber, NSAttributedString, CLKTextProvider, NSDictionary, UIColor;
@protocol _REContentLoggingProperties, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REImageContentProvider.h"
#import "RETextContentProvider.h"
#import "REAccessoryDescription.h"
#import "REAccessoryImage.h"
#import "REAccessoryMatchup.h"

@interface REContent : NSObject <_REContentLoggingProperties, NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_contents;
    NSTimeZone *_timeZone;
}


@property (copy, nonatomic) UIImage *bodyImage;
@property (retain, nonatomic) NSString *bodyImageCompositingFilter;
@property (copy, nonatomic) REImageContentProvider *bodyImageContentProvider;
@property (copy, nonatomic) CLKImageProvider *bodyImageProvider;
@property (nonatomic) BOOL bodyImageShouldStretch;
@property (nonatomic) NSUInteger description1FontStyle;
@property (copy, nonatomic) NSNumber *description1Opacity;
@property (copy, nonatomic) NSAttributedString *description1Text;
@property (copy, nonatomic) RETextContentProvider *description1TextContentProvider;
@property (copy, nonatomic) CLKTextProvider *description1TextProvider;
@property (nonatomic) NSUInteger description2FontStyle;
@property (copy, nonatomic) NSAttributedString *description2Text;
@property (copy, nonatomic) RETextContentProvider *description2TextContentProvider;
@property (copy, nonatomic) CLKTextProvider *description2TextProvider;
@property (copy, nonatomic) NSAttributedString *description3Text;
@property (copy, nonatomic) RETextContentProvider *description3TextContentProvider;
@property (copy, nonatomic) CLKTextProvider *description3TextProvider;
@property (copy, nonatomic) REAccessoryDescription *descriptionAccessory;
@property (nonatomic) NSUInteger headerFontStyle;
@property (copy, nonatomic) UIImage *headerImage;
@property (copy, nonatomic) REImageContentProvider *headerImageContentProvider;
@property (nonatomic) unsigned int headerImageEdge;
@property (copy, nonatomic) CLKImageProvider *headerImageProvider;
@property (copy, nonatomic) NSAttributedString *headerText;
@property (copy, nonatomic) RETextContentProvider *headerTextContentProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) REAccessoryImage *imageAccessory;
@property (nonatomic) CGRect imageFocusRect;
@property (readonly, nonatomic) NSDictionary *loggingContentValues;
@property (copy, nonatomic) REAccessoryMatchup *matchupAccessory;
@property (retain, nonatomic) UIImage *overrideBodyImage;
@property (copy, nonatomic) NSString *overrideBodyString;
@property (retain, nonatomic) UIImage *overrideHeaderImage;
@property (nonatomic) NSUInteger punchThrough;
@property (nonatomic) NSUInteger style;
@property (copy, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL tintColorAffectsHeader;
@property (nonatomic) BOOL useMonospaceFont;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif