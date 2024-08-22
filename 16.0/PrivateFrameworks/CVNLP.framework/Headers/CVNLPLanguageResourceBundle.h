// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVNLPLANGUAGERESOURCEBUNDLE_H
#define CVNLPLANGUAGERESOURCEBUNDLE_H


#import <Foundation/Foundation.h>

#import "CVNLPDecodingLanguageModel.h"
#import "CVNLPDecodingLexicons.h"

@interface CVNLPLanguageResourceBundle : NSObject

@property (readonly, nonatomic) CVNLPDecodingLanguageModel *characterLanguageModel; // ivar: _characterLanguageModel
@property (readonly, nonatomic) CVNLPDecodingLexicons *lexicons; // ivar: _lexicons
@property (readonly, nonatomic) CVNLPDecodingLanguageModel *wordLanguageModel; // ivar: _wordLanguageModel


-(id)initWithLexicons:(id)arg0 characterLanguageModel:(id)arg1 wordLanguageModel:(id)arg2 ;
-(id)packagedLexiconCursorsUsingContext:(id)arg0 ;
-(id)packagedLexiconRootCursors;


@end


#endif