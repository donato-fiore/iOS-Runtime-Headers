// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPDECODINGLEXICON_H
#define CVNLPDECODINGLEXICON_H


#import <Foundation/Foundation.h>


@interface CVNLPDecodingLexicon : NSObject

@property (readonly, nonatomic) *_LXCursor _rootCursor; // ivar: __rootCursor
@property (readonly, nonatomic) *_LXLexicon lexicon; // ivar: _lexicon
@property (readonly, nonatomic) NSUInteger priority; // ivar: _priority


+(id)decodingLexiconForLocale:(id)arg0 ;
+(id)decodingLexiconForLocale:(id)arg0 priority:(NSUInteger)arg1 ;
+(struct _LXLexicon *)_createLexiconForLocale:(id)arg0 ;
-(id)initWithLexicon:(struct _LXLexicon *)arg0 ;
-(id)initWithLexicon:(struct _LXLexicon *)arg0 priority:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif