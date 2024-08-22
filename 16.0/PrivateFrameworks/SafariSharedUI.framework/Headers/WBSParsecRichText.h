// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSPARSECRICHTEXT_H
#define WBSPARSECRICHTEXT_H

@class WBSParsecModel, NSString, NSArray, NSNumber;


#import "WBSParsecImageRepresentation.h"

@interface WBSParsecRichText : WBSParsecModel {
    WBSParsecImageRepresentation *_contentAdvisoryImage;
}


@property (readonly, nonatomic) NSString *contentAdvisoryString; // ivar: _contentAdvisoryString
@property (readonly, nonatomic) NSArray *formattedTextList; // ivar: _formattedTextList
@property (readonly, nonatomic) NSNumber *maximumLines; // ivar: _maximumLines
@property (readonly, nonatomic) NSArray *moreGlyphRepresentations; // ivar: _moreGlyphRepresentations
@property (readonly, nonatomic) NSString *text; // ivar: _text


+(id)schema;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentAdvisoryImageWithSession:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)moreGlyphsWithSession:(id)arg0 ;


@end


#endif