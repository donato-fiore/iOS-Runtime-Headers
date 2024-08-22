// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECMESSAGEBODYORIGINALTEXTSUBPARSER_H
#define ECMESSAGEBODYORIGINALTEXTSUBPARSER_H

@class NSMutableArray;
@protocol ECMessageBodyElement_Private;


#import "ECMessageBodySubparser.h"

@interface ECMessageBodyOriginalTextSubparser : ECMessageBodySubparser {
    NSMutableArray *_lastTextElements;
    id<ECMessageBodyElement_Private> *_lastNonWhitespaceTextElement;
    id *_foundTextBlock;
    id *_foundWhitespaceBlock;
    BOOL _foundText;
    BOOL _foundForwardSeparator;
}




-(void)_consumeAnyLastTextElementAsAttribution:(BOOL)arg0 ;
-(void)_consumeTextElement:(id)arg0 isAttribution:(BOOL)arg1 ;
-(void)dealloc;
-(void)messageBodyParser:(id)arg0 foundMessageBodyElement:(id)arg1 ;
-(void)messageBodyParserDidFinishParsing:(id)arg0 ;
-(void)setFoundTextBlock:(id)arg0 ;
-(void)setFoundWhitespaceBlock:(id)arg0 ;


@end


#endif