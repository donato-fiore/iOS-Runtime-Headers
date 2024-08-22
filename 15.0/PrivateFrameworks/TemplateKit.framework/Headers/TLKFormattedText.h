// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKFORMATTEDTEXT_H
#define TLKFORMATTEDTEXT_H

@class NSString;


#import "TLKFormattedTextItem.h"

@interface TLKFormattedText : TLKFormattedTextItem

@property (nonatomic) NSUInteger maxLines; // ivar: _maxLines
@property (retain, nonatomic) NSString *string; // ivar: _string
@property (nonatomic) NSInteger verticalTextAlignment; // ivar: _verticalTextAlignment


+(id)formattedTextWithString:(id)arg0 ;
-(BOOL)hasContent;
-(id)description;


@end


#endif