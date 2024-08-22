// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPFOOTNOTEHEIGHTMEASURER_H
#define TPFOOTNOTEHEIGHTMEASURER_H

@class TSDCanvas, TSULRUCache, NSString;
@protocol TSDCanvasDelegate, TSWPFootnoteHeightMeasurer, TPFootnotePageDelegate, TSDCanvasProxyDelegate;

#import <Foundation/Foundation.h>

#import "TPFootnoteContainerLayout.h"
#import "TPDocumentRoot.h"

@interface TPFootnoteHeightMeasurer : NSObject <TSDCanvasDelegate, TSWPFootnoteHeightMeasurer>

 {
    TPFootnoteContainerLayout *_footnoteContainerLayout;
    TPDocumentRoot *_documentRoot;
    TSDCanvas *_canvas;
    TSULRUCache *_footnoteLayoutCache;
    id<TPFootnotePageDelegate> *_pageDelegate;
}


@property (readonly, nonatomic) NSObject<TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canHaveFootnotesFromPreviousTarget:(id)arg0 ;
-(BOOL)footnoteContainerFitsForTarget:(id)arg0 ;
-(BOOL)footnoteContainerIsOnSamePageAsTarget:(id)arg0 ;
-(BOOL)hasFootnotes;
-(BOOL)shouldShowInstructionalTextForLayout:(id)arg0 ;
-(CGFloat)footnoteBlockHeight;
-(CGFloat)footnoteBlockHeightForTarget:(id)arg0 ;
-(id)documentRoot;
-(id)initWithFootnoteMarkProvider:(id)arg0 documentRoot:(id)arg1 pageDelegate:(id)arg2 maxFootnoteLineWidth:(CGFloat)arg3 maxFootnoteBlockHeight:(CGFloat)arg4 vertical:(BOOL)arg5 footnoteSpacing:(CGFloat)arg6 ;
-(void)addFootnoteReferenceStorage:(id)arg0 ;
-(void)p_clearFootnoteLayoutCache;
-(void)removeAllFootnoteReferenceStorages;
-(void)removeFootnoteReferenceStorage:(id)arg0 ;
-(void)setContainerLineWidth:(CGFloat)arg0 ;
-(void)setFootnoteSpacing:(NSInteger)arg0 ;
-(void)tearDown;


@end


#endif