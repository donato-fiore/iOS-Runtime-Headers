// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSDICTIONARYRESULTBUILDER_H
#define SSDICTIONARYRESULTBUILDER_H

@class NSArray, NSString, SFRichText;


#import "SSResultBuilder.h"

@interface SSDictionaryResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSArray *definitionTexts; // ivar: _definitionTexts
@property (retain, nonatomic) NSArray *definitions; // ivar: _definitions
@property (retain, nonatomic) NSString *dictionaryName; // ivar: _dictionaryName
@property (retain, nonatomic) NSString *word; // ivar: _word
@property (retain, nonatomic) SFRichText *wordText; // ivar: _wordText


+(id)bundleId;
-(id)buildCompactCardSection;
-(id)buildDescriptions;
-(id)buildInlineCardSection;
-(id)buildTitle;
-(id)initWithResult:(id)arg0 ;


@end


#endif