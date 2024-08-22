// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTFRONTENDSIMPLE_H
#define MTFRONTENDSIMPLE_H

@class NSEnumerator;



@interface MTFrontendSimple : NSEnumerator

@property *MTFEBuilder builder; // ivar: _builder
@property *SLDictLookup fDictLookup; // ivar: _fDictLookup
@property *SLLexer fLexer; // ivar: _fLexer
@property *SLPronouncer fPronouncer; // ivar: _fPronouncer
@property *SLCFStringTextSource fTextSource; // ivar: _fTextSource


-(id)initWithString:(id)arg0 ;
-(id)initWithStringAndLocale:(id)arg0 locale:(id)arg1 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif