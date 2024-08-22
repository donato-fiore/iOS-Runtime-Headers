// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMINIXMLPARSER_H
#define PXMINIXMLPARSER_H

@class NSScanner, NSCharacterSet;

#import <Foundation/Foundation.h>


@interface PXMiniXMLParser : NSObject

@property (readonly, nonatomic) NSScanner *_scanner; // ivar: __scanner
@property (readonly, nonatomic) NSCharacterSet *_syntaxMarkerCharactersSet; // ivar: __syntaxMarkerCharactersSet
@property (copy, nonatomic) id *parsedCharactersBlock; // ivar: _parsedCharactersBlock
@property (copy, nonatomic) id *parsedEntityBlock; // ivar: _parsedEntityBlock
@property (copy, nonatomic) id *parsedErrorBlock; // ivar: _parsedErrorBlock
@property (copy, nonatomic) id *parsedTagBlock; // ivar: _parsedTagBlock


-(BOOL)_isAtEnd;
-(BOOL)_parseCharacters;
-(BOOL)_parseEntity;
-(BOOL)_parseTag;
-(BOOL)_tryScanningUsingBlock:(id)arg0 ;
-(id)init;
-(id)initWithString:(id)arg0 ;
-(void)parse;


@end


#endif