// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTILINGCONTROLLERDEBUGINFO_H
#define PXTILINGCONTROLLERDEBUGINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PXTilingControllerDebugInfo : NSObject

@property (retain, nonatomic) NSArray *activeItems; // ivar: _activeItems
@property (nonatomic) CGRect activeRect; // ivar: _activeRect
@property (nonatomic) CGRect cachedRect; // ivar: _cachedRect
@property (nonatomic) CGRect contentBounds; // ivar: _contentBounds
@property (retain, nonatomic) NSArray *pagedItems; // ivar: _pagedItems
@property (nonatomic) CGRect pagedRect; // ivar: _pagedRect
@property (retain, nonatomic) NSArray *preheatRects; // ivar: _preheatRects
@property (retain, nonatomic) NSArray *preheatedItems; // ivar: _preheatedItems
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect


-(id)debugQuickLookObject;
-(void)drawInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;


@end


#endif