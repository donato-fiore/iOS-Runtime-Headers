// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAUSRICHTEXT_H
#define SAUSRICHTEXT_H

@class NSString, NSArray, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SAUSRichText : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSString *contentAdvisory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *formattedTextDelimiter;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *markupList;
@property (copy, nonatomic) NSArray *moreGlyphs;
@property (copy, nonatomic) NSNumber *starRating;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *textMaxlines;


+(id)richText;
+(id)richTextWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif