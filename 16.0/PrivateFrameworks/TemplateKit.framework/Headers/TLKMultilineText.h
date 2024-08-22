// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLKMULTILINETEXT_H
#define TLKMULTILINETEXT_H

@class NSString;


#import "TLKObject.h"

@interface TLKMultilineText : TLKObject

@property (nonatomic) NSUInteger maxLines; // ivar: _maxLines
@property (retain, nonatomic) NSString *text; // ivar: _text


+(id)textWithString:(id)arg0 ;
-(id)description;


@end


#endif