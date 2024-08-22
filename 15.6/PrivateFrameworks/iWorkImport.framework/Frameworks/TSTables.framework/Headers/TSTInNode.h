// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTINNODE_H
#define TSTINNODE_H



#import "TSTExpressionNode.h"

@interface TSTInNode : TSTExpressionNode



+(id)inString;
-(id)formulaPlainText;
-(id)string;
-(int)tokenType;
-(struct TSCEFunctionArgSpec *)argumentSpec;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif