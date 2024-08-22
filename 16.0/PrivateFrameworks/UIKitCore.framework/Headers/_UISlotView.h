// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISLOTVIEW_H
#define _UISLOTVIEW_H

@class NSString, UISSlotStyle;
@protocol _UISlotViewContentDelegate, UISSlotAnyContent;


#import "UIView.h"

@interface _UISlotView : UIView {
    NSString *_localization;
    id *_slotStyleResolver;
    id *_slotAnyContentProvider;
    id<_UISlotViewContentDelegate> *_contentDelegate;
    UISSlotStyle *_currentSlotStyle;
    CGSize _intrinsicContentSize;
    id<UISSlotAnyContent> *_slotContent;
    NSUInteger _currentGeneration;
}


@property (weak, nonatomic, setter=_setContentDelegate:) NSObject<_UISlotViewContentDelegate> *_contentDelegate;
@property (copy, nonatomic, setter=_setSlotAnyContentProvider:) id *_slotAnyContentProvider;
@property (copy, nonatomic, setter=_setSlotStyleResolver:) id *_slotStyleResolver;


+(BOOL)accessInstanceVariablesDirectly;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)_overlayView:(id)arg0 ;
-(void)_slotStyleDidChange:(id)arg0 ;
-(void)_updateContent;
-(void)dealloc;
-(void)displayLayer:(id)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif