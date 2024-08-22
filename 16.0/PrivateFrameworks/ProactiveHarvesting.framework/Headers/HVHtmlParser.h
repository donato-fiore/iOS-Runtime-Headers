// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HVHTMLPARSER_H
#define HVHTMLPARSER_H

@class NSMutableArray, NSArray, NSString, NSMutableData, NSMutableIndexSet, NSHashTable, NSSet, NSIndexSet;

#import <Foundation/Foundation.h>


@interface HVHtmlParser : NSObject {
    char * _chunkStart;
    NSUInteger _chunkLength;
    NSMutableArray *_mutablePlainTextLines;
    NSArray *_plainTextLines;
    _opaque_pthread_mutex_t _plainTextContentLock;
    NSString *_plainTextContent;
    NSUInteger _plainTextLinesTotalLength;
    BOOL _currentLineIsCollapsed;
    NSMutableData *_currentLineData;
    *_xmlParserCtxt _parserContext;
    BOOL _renderingSuspended;
    BOOL _preBlockDepth;
    NSMutableIndexSet *_quotedRegions;
    NSMutableIndexSet *_tabularRegions;
    NSMutableIndexSet *_sigHtmlBlockRegions;
    NSUInteger _bytesConsumedInPreviousPasses;
    NSUInteger _depth;
    NSMutableIndexSet *_depthsWithActiveRegions;
    NSHashTable *_activeRegions;
    NSMutableArray *_activeRegionStartPositionStack;
    NSMutableArray *_activeRegionIndexSetStack;
    NSUInteger _quoteToEndFromPosition;
    NSMutableIndexSet *_hyperlinkDepths;
    NSMutableArray *_partialHyperlinks;
    NSMutableArray *_hyperlinkURLs;
    NSMutableArray *_hyperlinkRanges;
}


@property (readonly, nonatomic) NSSet *appleAnchorHrefs; // ivar: _appleAnchorHrefs
@property (readonly, nonatomic) NSArray *hyperlinks; // ivar: _hyperlinks
@property (readonly, nonatomic) NSIndexSet *quotedRegions;
@property (readonly, nonatomic) NSIndexSet *signatureRegions;
@property (readonly, nonatomic) NSIndexSet *tabularRegions;
@property (readonly, nonatomic) NSString *textContent;
@property (readonly, nonatomic) NSArray *textLines;


-(id)init;
-(id)initWithData:(id)arg0 encoding:(NSUInteger)arg1 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithUTF8DataEnumerator:(id)arg0 ;
-(void)dealloc;


@end


#endif