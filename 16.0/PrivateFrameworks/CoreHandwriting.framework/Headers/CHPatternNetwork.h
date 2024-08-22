// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHPATTERNNETWORK_H
#define CHPATTERNNETWORK_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CHPatternNetwork : NSObject {
    *void _network;
    NSDictionary *_symbols;
    NSDictionary *_startNodes;
    NSDictionary *_startCursorForContentTypes;
}




+(BOOL)isString:(id)arg0 fullPattern:(NSInteger)arg1 inNetwork:(id)arg2 ;
+(id)contentTypesToPatternsMapping;
+(id)newCursorByAdvancingWithString:(id)arg0 fromCursor:(id)arg1 inNetwork:(id)arg2 ;
+(id)newCursorByAdvancingWithSymbol:(NSUInteger)arg0 fromCursor:(id)arg1 inNetwork:(id)arg2 ;
+(id)patternToSymbolMap;
+(id)rootCursorForContentType:(int)arg0 inNetwork:(id)arg1 forFirstSegmentGroup:(BOOL)arg2 ;
+(id)rootCursorForPatternType:(NSInteger)arg0 inNetwork:(id)arg1 forFirstSegmentGroup:(BOOL)arg2 ;
-(NSUInteger)stateTypeForNodeIndex:(NSUInteger)arg0 ;
-(id)initWithFile:(id)arg0 ;
-(id)newCursorByAdvancingCursor:(id)arg0 withSymbol:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif