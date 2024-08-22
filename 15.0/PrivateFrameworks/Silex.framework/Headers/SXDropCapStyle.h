// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDROPCAPSTYLE_H
#define SXDROPCAPSTYLE_H

@class UIColor, NSString;
@protocol SXTextStyleFontDescribing, SXTextStyleFontAttributes;


#import "SXJSONObject.h"

@interface SXDropCapStyle : SXJSONObject <SXTextStyleFontDescribing>



@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<SXTextStyleFontAttributes> *fontAttributes;
@property (readonly, nonatomic) NSString *fontName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfCharacters;
@property (readonly, nonatomic) NSInteger numberOfLines;
@property (readonly, nonatomic) NSInteger numberOfRaisedLines;
@property (readonly, nonatomic) NSInteger padding;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *textColor;


+(Class)classForProtocolProperty:(id)arg0 withValue:(id)arg1 ;


@end


#endif