// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMESSAGEBODYORIGINALTEXTSUBPARSER_H
#define MFMESSAGEBODYORIGINALTEXTSUBPARSER_H

@class NSMutableArray;
@protocol MFMessageBodyElement_Private;


#import "MFMessageBodySubparser.h"

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser {
    NSMutableArray *_lastTextElements;
    id<MFMessageBodyElement_Private> *_lastNonWhitespaceTextElement;
    id *_foundTextBlock;
    id *_foundWhitespaceBlock;
    BOOL _foundText;
    BOOL _foundForwardSeparator;
}




-(void)_consumeAnyLastTextElementAsAttribution:(BOOL)arg0 ;
-(void)_consumeTextElement:(id)arg0 isAttribution:(BOOL)arg1 ;
-(void)copyBlocks;
-(void)dealloc;
-(void)messageBodyParser:(id)arg0 foundMessageBodyElement:(id)arg1 ;
-(void)messageBodyParserDidFinishParsing:(id)arg0 ;
-(void)setFoundTextBlock:(id)arg0 ;
-(void)setFoundWhitespaceBlock:(id)arg0 ;


@end


#endif