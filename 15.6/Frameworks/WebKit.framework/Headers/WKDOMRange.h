// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKDOMRANGE_H
#define WKDOMRANGE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "WKDOMNode.h"

@interface WKDOMRange : NSObject {
    RefPtr<WebCore::Range, WTF::RawPtrTraits<WebCore::Range>, WTF::DefaultRefDerefTraits<WebCore::Range>> _impl;
}


@property (readonly, retain) WKDOMNode *endContainer;
@property (readonly) NSInteger endOffset;
@property (readonly) BOOL isCollapsed;
@property (readonly, retain) WKDOMNode *startContainer;
@property (readonly) NSInteger startOffset;
@property (readonly, copy) NSString *text;
@property (readonly) NSArray *textRects;


-(id)_initWithImpl:(*void)arg0 ;
-(id)initWithDocument:(id)arg0 ;
-(id)rangeByExpandingToWordBoundaryByCharacters:(NSUInteger)arg0 inDirection:(NSInteger)arg1 ;
-(struct OpaqueWKBundleRangeHandle *)_copyBundleRangeHandleRef;
-(void)collapse:(BOOL)arg0 ;
-(void)dealloc;
-(void)selectNode:(id)arg0 ;
-(void)selectNodeContents:(id)arg0 ;
-(void)setEnd:(id)arg0 offset:(int)arg1 ;
-(void)setStart:(id)arg0 offset:(int)arg1 ;


@end


#endif