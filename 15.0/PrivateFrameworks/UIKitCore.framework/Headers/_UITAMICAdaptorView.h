// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITAMICADAPTORVIEW_H
#define _UITAMICADAPTORVIEW_H

@class NSLayoutConstraint, NSString;
@protocol _UIGeometryChangeObserver;


#import "UIView.h"
#import "UILayoutGuide.h"

@interface _UITAMICAdaptorView : UIView <_UIGeometryChangeObserver>

 {
    NSLayoutConstraint *_width;
    NSLayoutConstraint *_height;
    CGSize _layoutSize;
    BOOL _inLayout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILayoutGuide *sizingLayoutGuide; // ivar: _sizingLayoutGuide
@property (nonatomic) float sizingPriority; // ivar: _sizingPriority
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view; // ivar: _view


+(BOOL)shouldWrapView:(id)arg0 ;
-(id)initWithView:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_geometryChanged:(struct ? *)arg0 forAncestor:(id)arg1 ;
-(void)didMoveToWindow;
-(void)updateForAvailableSize;


@end


#endif