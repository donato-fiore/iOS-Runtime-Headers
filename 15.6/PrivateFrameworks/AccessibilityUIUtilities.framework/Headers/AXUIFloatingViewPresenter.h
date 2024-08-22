// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUIFLOATINGVIEWPRESENTER_H
#define AXUIFLOATINGVIEWPRESENTER_H

@class UIView, NSArray;
@protocol AXUIFloatingViewPresenterDelegate;

#import <Foundation/Foundation.h>


@interface AXUIFloatingViewPresenter : NSObject

@property (nonatomic) NSUInteger alignedEdge; // ivar: _alignedEdge
@property (readonly, nonatomic) UIView *containingView; // ivar: _containingView
@property (weak, nonatomic) NSObject<AXUIFloatingViewPresenterDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *edgeConstraints; // ivar: _edgeConstraints
@property (retain, nonatomic) UIView *floatingView; // ivar: _floatingView
@property (readonly, nonatomic) BOOL withinSafeArea; // ivar: _withinSafeArea


-(id)initWithContainingView:(id)arg0 alignedToEdge:(NSUInteger)arg1 withinSafeArea:(BOOL)arg2 ;
-(void)_hideFloatingView;
-(void)_updateEdgeConstraints;
-(void)dismissFloatingView;
-(void)presentFloatingView:(id)arg0 withDuration:(CGFloat)arg1 ;


@end


#endif