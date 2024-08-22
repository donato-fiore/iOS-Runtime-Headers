// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXSTRING_H
#define EXSTRING_H


#import <Foundation/Foundation.h>


@interface EXString : NSObject



+(?)buildEDString:(?)arg0 fromChildrenOfNode:(?)arg1 edFont:(?)arg2 keepWhitespacestate;
+(?)buildEDString:(?)arg0 fromNode:(?)arg1 edFont:(?)arg2 keepWhitespacestate;
+(?)edStringWithRunsFromXmlDivElementstate;
+(?)edStringWithRunsFromXmlStringElementstate;
+(?)edTextFromXmlStringElementstate;
+(id)cleanupWhitespace:(id)arg0 ;
+(id)readStringWithAsciiCodeFromXmlStringElement:(struct _xmlNode *)arg0 ;
+(id)stringInEDString:(id)arg0 forRunIndex:(unsigned int)arg1 ;
+(id)stringInEDString:(id)arg0 start:(NSUInteger)arg1 end:(NSUInteger)arg2 ;
+(void)buildEDString:(id)arg0 fromText:(id)arg1 edFont:(id)arg2 keepWhitespace:(BOOL)arg3 state:(id)arg4 ;
+(void)parseStringWithAsciiCode:(id)arg0 ;
+(void)replaceEscapeAsciiCodes:(id)arg0 ;


@end


#endif