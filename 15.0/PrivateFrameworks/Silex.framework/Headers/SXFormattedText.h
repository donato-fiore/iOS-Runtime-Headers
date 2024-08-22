// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXFORMATTEDTEXT_H
#define SXFORMATTEDTEXT_H

@class NSString;


#import "SXJSONObject.h"
#import "SXJSONArray.h"

@interface SXFormattedText : SXJSONObject

@property (readonly, nonatomic) SXJSONArray *additions;
@property (readonly, nonatomic) SXJSONArray *inlineTextStyles;
@property (nonatomic) BOOL shouldWrapText; // ivar: shouldWrapText
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *textStyle;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(id)description;
-(id)initWithText:(id)arg0 ;
-(id)textWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif