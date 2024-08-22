// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMINIHTMLPARSER_H
#define PXMINIHTMLPARSER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PXMiniHTMLParser : NSObject

@property (readonly, nonatomic) NSString *_string; // ivar: __string
@property (copy, nonatomic) id *parsedCharactersBlock; // ivar: _parsedCharactersBlock
@property (copy, nonatomic) id *parsedErrorBlock; // ivar: _parsedErrorBlock
@property (copy, nonatomic) id *parsedMarkupElementEndBlock; // ivar: _parsedMarkupElementEndBlock
@property (copy, nonatomic) id *parsedMarkupElementStartBlock; // ivar: _parsedMarkupElementStartBlock


+(id)charactersForEntityNames;
+(id)stringByConvertingToHTML:(id)arg0 ;
-(id)init;
-(id)initWithString:(id)arg0 ;
-(void)parse;


@end


#endif