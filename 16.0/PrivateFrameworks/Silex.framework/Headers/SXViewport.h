// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXVIEWPORT_H
#define SXVIEWPORT_H

@class NSHashTable, UIScrollView;

#import <Foundation/Foundation.h>

#import "SXViewport.h"

@interface SXViewport : NSObject

@property (nonatomic) NSUInteger appearState; // ivar: _appearState
@property (retain, nonatomic) NSHashTable *appearStateListeners; // ivar: _appearStateListeners
@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (retain, nonatomic) NSHashTable *boundsListeners; // ivar: _boundsListeners
@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (retain, nonatomic) NSHashTable *contentFrameListeners; // ivar: _contentFrameListeners
@property (nonatomic) CGSize documentSize; // ivar: _documentSize
@property (retain, nonatomic) NSHashTable *documentSizeListeners; // ivar: _documentSizeListeners
@property (nonatomic) CGRect dynamicBounds; // ivar: _dynamicBounds
@property (retain, nonatomic) NSHashTable *dynamicBoundsListeners; // ivar: _dynamicBoundsListeners
@property (nonatomic) BOOL groupChanges; // ivar: _groupChanges
@property (nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (retain, nonatomic) NSHashTable *interfaceOrientationListeners; // ivar: _interfaceOrientationListeners
@property (readonly, nonatomic) BOOL isPopulated;
@property (readonly, weak, nonatomic) UIScrollView *view; // ivar: _view
@property (retain, nonatomic) SXViewport *viewportBeforeUpdates; // ivar: _viewportBeforeUpdates


-(id)debugDescriptionForViewport:(id)arg0 ;
-(id)description;
-(id)initWithView:(id)arg0 ;
-(id)stringForAppearState:(NSUInteger)arg0 ;
-(id)stringFroInterfaceOrientation:(NSInteger)arg0 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromView:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toView:(id)arg1 ;
-(struct CGPoint )convertPointToViewportCoordinateSpace:(struct CGPoint )arg0 fromView:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromView:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toView:(id)arg1 ;
-(struct CGRect )convertRectToViewportCoordinateSpace:(struct CGRect )arg0 fromView:(id)arg1 ;
-(void)addViewportChangeListener:(id)arg0 forOptions:(NSUInteger)arg1 ;
-(void)appearStateChangedFromState:(NSUInteger)arg0 ;
-(void)beginUpdates;
-(void)boundsDidChangeFromBounds:(struct CGRect )arg0 ;
-(void)contentFrameDidChangeFromFrame:(struct CGRect )arg0 ;
-(void)documentSizeDidChangeFromSize:(struct CGSize )arg0 ;
-(void)dynamicBoundsDidChangeFromBounds:(struct CGRect )arg0 ;
-(void)endUpdates;
-(void)interfaceOrientationChangedFromOrientation:(NSInteger)arg0 ;
-(void)removeViewportChangeListener:(id)arg0 forOptions:(NSUInteger)arg1 ;
-(void)reset;


@end


#endif