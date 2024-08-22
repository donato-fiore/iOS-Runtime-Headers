// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGANCHOR_H
#define PXGANCHOR_H

@class NSArray, NSDate, NSString;
@protocol PXGSpriteIndexReferencing, PXGDiagnosticsProvider, PXGAnchorDelegate;

#import <Foundation/Foundation.h>

#import "PXGLayout.h"

@interface PXGAnchor : NSObject <PXGSpriteIndexReferencing, PXGDiagnosticsProvider>

 {
    ? _delegateRespondsTo;
}


@property (readonly, nonatomic) NSUInteger anchoredContentEdges;
@property (readonly, nonatomic, getter=isAutoInvalidated) BOOL autoInvalidated; // ivar: _autoInvalidated
@property (readonly, nonatomic) BOOL canBeReused;
@property (copy, nonatomic) NSArray *constraints; // ivar: _constraints
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) id *context; // ivar: _context
@property (copy, nonatomic) id *customOffset; // ivar: _customOffset
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGAnchorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (nonatomic) NSUInteger edges; // ivar: _edges
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isScrollingAnimationAnchor;
@property (readonly, weak, nonatomic) PXGLayout *layout; // ivar: _layout
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (nonatomic) CGPoint normalizedAnchorPoint; // ivar: _normalizedAnchorPoint
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (nonatomic) NSUInteger referencingOptions; // ivar: _referencingOptions
@property (nonatomic) NSUInteger scrollPosition; // ivar: _scrollPosition
@property (readonly, nonatomic) BOOL shouldFaultInContentAtAnchoredContentEdges;
@property (copy, nonatomic) NSArray *spriteRects; // ivar: _spriteRects
@property (copy, nonatomic) NSArray *spriteReferences; // ivar: _spriteReferences
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) CGPoint visibleLocation; // ivar: _visibleLocation
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect


-(id)copyWithLayout:(id)arg0 ;
-(id)init;
-(id)initWithLayout:(id)arg0 ;
-(struct CGRect )adjustVisibleRect:(struct CGRect )arg0 ;
-(unsigned int)anchoredSpriteIndexInLayout:(id)arg0 ;
-(void)_enumerateSpriteConstraintsUsingBlock:(id)arg0 ;
-(void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg0 appliedToLayout:(id)arg1 ;
-(void)enumerateAllSpriteReferencesUsingBlock:(id)arg0 ;
-(void)enumerateSpritesWithEnumerationOptions:(NSUInteger)arg0 referencingOptions:(NSUInteger)arg1 usingBlock:(id)arg2 ;


@end


#endif