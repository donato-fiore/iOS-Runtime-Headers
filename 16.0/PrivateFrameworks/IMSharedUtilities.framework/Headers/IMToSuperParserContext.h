// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMTOSUPERPARSERCONTEXT_H
#define IMTOSUPERPARSERCONTEXT_H

@class NSMutableArray, NSMutableDictionary, NSMutableAttributedString, NSString, NSAttributedString, NSArray;


#import "IMXMLParserContext.h"

@interface IMToSuperParserContext : IMXMLParserContext {
    NSUInteger _underlineCount;
    NSUInteger _boldCount;
    NSUInteger _italicCount;
    NSUInteger _strikethroughCount;
    NSUInteger _messagePartNumber;
    NSMutableArray *_fontFamilyStack;
    NSMutableArray *_fontSizeStack;
    NSMutableArray *_linkStack;
    NSMutableArray *_backgroundColorStack;
    NSMutableArray *_foregroundColorStack;
    NSMutableDictionary *_currentAttributes;
    BOOL _didAddBodyAttributes;
    NSMutableAttributedString *_body;
}


@property (copy, nonatomic) NSString *backgroundColor; // ivar: _backgroundColor
@property NSInteger baseWritingDirection; // ivar: _baseWritingDirection
@property (readonly, nonatomic) NSAttributedString *body;
@property (retain, nonatomic) NSArray *fileTransferGUIDs; // ivar: _fileTransferGUIDs
@property (copy, nonatomic) NSString *foregroundColor; // ivar: _foregroundColor


-(id)name;
-(id)resultsForLogging;
-(void)_clearIvars;
-(void)_incrementMessagePartNumber;
-(void)_initIvars;
-(void)_popValueFromStack:(id)arg0 attributeName:(id)arg1 ;
-(void)_pushValue:(id)arg0 ontoStack:(id)arg1 attributeName:(id)arg2 ;
-(void)_updateFontFamily;
-(void)_updateFontSize;
-(void)appendBreadcrumbText:(id)arg0 withOptions:(unsigned int)arg1 ;
-(void)appendFileTransferWithGUID:(id)arg0 ;
-(void)appendInlineImageWithGUID:(id)arg0 filename:(id)arg1 width:(NSInteger)arg2 height:(NSInteger)arg3 ;
-(void)appendInlineImageWithGUID:(id)arg0 filename:(id)arg1 width:(NSInteger)arg2 height:(NSInteger)arg3 emoji:(NSInteger)arg4 ;
-(void)appendString:(id)arg0 ;
-(void)dealloc;
-(void)decrementBoldCount;
-(void)decrementItalicCount;
-(void)decrementStrikethroughCount;
-(void)decrementUnderlineCount;
-(void)incrementBoldCount;
-(void)incrementItalicCount;
-(void)incrementStrikethroughCount;
-(void)incrementUnderlineCount;
-(void)popBackgroundColor;
-(void)popFontFamily;
-(void)popFontSize;
-(void)popForegroundColor;
-(void)popLink;
-(void)pushBackgroundColor:(id)arg0 ;
-(void)pushFontFamily:(id)arg0 ;
-(void)pushFontSize:(id)arg0 ;
-(void)pushForegroundColor:(id)arg0 ;
-(void)pushLink:(id)arg0 ;
-(void)reset;


@end


#endif