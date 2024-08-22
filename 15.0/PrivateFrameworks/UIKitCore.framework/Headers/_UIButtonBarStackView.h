// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBUTTONBARSTACKVIEW_H
#define _UIBUTTONBARSTACKVIEW_H

@class NSString;
@protocol UIPointerInteractionDelegate;


#import "UIStackView.h"
#import "_UIButtonBar.h"

@interface _UIButtonBarStackView : UIStackView <UIPointerInteractionDelegate>

 {
    _UIButtonBar *_buttonBar;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(Class)layerClass;
-(BOOL)__isKindOfUIButtonBarStackView;
-(id)init;
-(id)initWithButtonBar:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_prepareForWindowDealloc;
-(void)layoutSubviews;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif