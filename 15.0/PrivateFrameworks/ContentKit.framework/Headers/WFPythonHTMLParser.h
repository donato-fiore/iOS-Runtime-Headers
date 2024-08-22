// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPYTHONHTMLPARSER_H
#define WFPYTHONHTMLPARSER_H

@class NSRegularExpression, NSString;
@protocol WFPythonHTMLParserDelegate;

#import <Foundation/Foundation.h>


@interface WFPythonHTMLParser : NSObject

@property (readonly, nonatomic) NSRegularExpression *attributeFindExpression; // ivar: _attributeFindExpression
@property (copy, nonatomic) NSString *cdataElement; // ivar: _cdataElement
@property (readonly, nonatomic) NSRegularExpression *charrefExpression; // ivar: _charrefExpression
@property (readonly, nonatomic) NSRegularExpression *commentCloseExpression; // ivar: _commentCloseExpression
@property (nonatomic) NSInteger currentLineNumber; // ivar: _currentLineNumber
@property (nonatomic) NSInteger currentOffset; // ivar: _currentOffset
@property (weak, nonatomic) NSObject<WFPythonHTMLParserDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSRegularExpression *endEndTagExpression; // ivar: _endEndTagExpression
@property (readonly, nonatomic) NSRegularExpression *endTagFindExpression; // ivar: _endTagFindExpression
@property (readonly, nonatomic) NSRegularExpression *entityrefExpression; // ivar: _entityrefExpression
@property (readonly, nonatomic) NSRegularExpression *incompleteExpression; // ivar: _incompleteExpression
@property (retain, nonatomic) NSRegularExpression *interestingExpression; // ivar: _interestingExpression
@property (readonly, nonatomic) NSRegularExpression *locateStartTagEndExpression; // ivar: _locateStartTagEndExpression
@property (copy, nonatomic) NSString *rawData; // ivar: _rawData
@property (readonly, nonatomic) NSRegularExpression *startTagOpenExpression; // ivar: _startTagOpenExpression
@property (readonly, nonatomic) NSRegularExpression *tagFindExpression; // ivar: _tagFindExpression


-(NSInteger)checkForWholeStartTag:(NSInteger)arg0 ;
-(NSInteger)parseBogusComment:(NSInteger)arg0 ;
-(NSInteger)parseComment:(NSInteger)arg0 ;
-(NSInteger)parseEndTag:(NSInteger)arg0 ;
-(NSInteger)parseHTMLDeclaration:(NSInteger)arg0 ;
-(NSInteger)parseMarkedSection:(NSInteger)arg0 ;
-(NSInteger)parseProcessingInstruction:(NSInteger)arg0 ;
-(NSInteger)parseStartTag:(NSInteger)arg0 ;
-(NSInteger)updatePosition:(NSInteger)arg0 j:(NSInteger)arg1 ;
-(id)init;
-(id)scanName:(NSInteger)arg0 declarationStartPosition:(NSInteger)arg1 location:(*NSInteger)arg2 ;
-(void)close;
-(void)feed:(id)arg0 ;
-(void)handleCharacterRef:(id)arg0 ;
-(void)handleComment:(id)arg0 ;
-(void)handleData:(id)arg0 ;
-(void)handleDoctypeDeclaration:(id)arg0 ;
-(void)handleEndTag:(id)arg0 ;
-(void)handleEntityRef:(id)arg0 ;
-(void)handleProcessingInstruction:(id)arg0 ;
-(void)handleStartEndTag:(id)arg0 attributes:(id)arg1 ;
-(void)handleStartTag:(id)arg0 attributes:(id)arg1 ;
-(void)handleUnknownDeclaration:(id)arg0 ;
-(void)parseDataAndEnd:(BOOL)arg0 ;
-(void)reset;


@end


#endif