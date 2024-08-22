// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKRICHTEXT_H
#define TLKRICHTEXT_H

@class NSArray;


#import "TLKMultilineText.h"

@interface TLKRichText : TLKMultilineText

@property (retain, nonatomic) NSArray *formattedTextItems; // ivar: _formattedTextItems
@property (readonly) BOOL hasContent;
@property (readonly) BOOL hasOnlyImage;


-(id)description;
-(id)filterItemsByType:(NSUInteger)arg0 ;
-(id)icons;
-(id)inlineRoundedText;
-(id)stars;
-(id)text;


@end


#endif