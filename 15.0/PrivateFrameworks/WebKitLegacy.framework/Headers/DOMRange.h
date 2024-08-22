// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOMRANGE_H
#define DOMRANGE_H

@class NSString;


#import "DOMObject.h"
#import "DOMNode.h"
#import "WebArchive.h"

@interface DOMRange : DOMObject

@property (readonly) BOOL collapsed;
@property (readonly) DOMNode *commonAncestorContainer;
@property (readonly) DOMNode *endContainer;
@property (readonly) int endOffset;
@property (readonly, copy, nonatomic) NSString *markupString;
@property (readonly) DOMNode *startContainer;
@property (readonly) int startOffset;
@property (readonly, copy) NSString *text;
@property (readonly, nonatomic) WebArchive *webArchive;


+(id)rangeForFirstPosition:(id)arg0 second:(id)arg1 ;
-(BOOL)intersectsNode:(id)arg0 ;
-(BOOL)isPointInRange:(id)arg0 offset:(int)arg1 ;
-(id)cloneContents;
-(id)cloneRange;
-(id)createContextualFragment:(id)arg0 ;
-(id)description;
-(id)enclosingWordRange;
-(id)endPosition;
-(id)extractContents;
-(id)firstNode;
-(id)lineBoxRects;
-(id)startPosition;
-(id)toString;
-(short)compareBoundaryPoints:(unsigned short)arg0 ;
-(short)compareBoundaryPoints:(unsigned short)arg0 sourceRange:(id)arg1 ;
-(short)compareNode:(id)arg0 ;
-(short)comparePoint:(id)arg0 offset:(int)arg1 ;
-(struct CGImage *)renderedImageForcingBlackText:(BOOL)arg0 ;
-(struct CGRect )boundingBox;
-(void)collapse:(BOOL)arg0 ;
-(void)dealloc;
-(void)deleteContents;
-(void)detach;
-(void)expand:(id)arg0 ;
-(void)extend:(unsigned int)arg0 inDirection:(int)arg1 ;
-(void)insertNode:(id)arg0 ;
-(void)move:(unsigned int)arg0 inDirection:(int)arg1 ;
-(void)selectNode:(id)arg0 ;
-(void)selectNodeContents:(id)arg0 ;
-(void)setEnd:(id)arg0 ;
-(void)setEnd:(id)arg0 offset:(int)arg1 ;
-(void)setEndAfter:(id)arg0 ;
-(void)setEndBefore:(id)arg0 ;
-(void)setStart:(id)arg0 ;
-(void)setStart:(id)arg0 offset:(int)arg1 ;
-(void)setStartAfter:(id)arg0 ;
-(void)setStartBefore:(id)arg0 ;
-(void)surroundContents:(id)arg0 ;


@end


#endif