// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPOPOVERLAYOUTINFO_H
#define _UIPOPOVERLAYOUTINFO_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIPopoverLayoutInfo : NSObject <NSCopying>

 {
    NSMutableArray *_candidates;
}


@property (readonly, nonatomic) NSUInteger arrowDirection; // ivar: _arrowDirection
@property (nonatomic) CGFloat arrowHeight; // ivar: _arrowHeight
@property (nonatomic) CGFloat arrowOffset; // ivar: _arrowOffset
@property (nonatomic) BOOL canOverlapSourceViewRect; // ivar: _canOverlapSourceViewRect
@property (nonatomic) CGRect containingFrame; // ivar: _containingFrame
@property (nonatomic) UIEdgeInsets containingFrameInsets; // ivar: _containingFrameInsets
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) BOOL isRTL; // ivar: _isRTL
@property (readonly, nonatomic) CGFloat offset; // ivar: _offset
@property (nonatomic) BOOL preferLandscapeOrientations; // ivar: _preferLandscapeOrientations
@property (nonatomic) NSUInteger preferredArrowDirections; // ivar: _preferredArrowDirections
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (nonatomic) NSInteger preferredHorizontalAlignment; // ivar: _preferredHorizontalAlignment
@property (nonatomic) CGRect sourceViewRect; // ivar: _sourceViewRect
@property (nonatomic, getter=_updatesEnabled, setter=_setUpdatesEnabled:) BOOL updatesEnabled; // ivar: _updatesEnabled


+(id)_observationKeys;
-(id)candidates;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(struct CGSize )_popoverViewSizeForContentSize:(struct CGSize )arg0 arrowDirection:(NSUInteger)arg1 ;
-(void)_updateOutputs;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateProperties:(id)arg0 ;


@end


#endif