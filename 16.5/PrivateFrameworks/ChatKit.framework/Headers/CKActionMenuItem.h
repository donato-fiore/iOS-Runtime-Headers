// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKACTIONMENUITEM_H
#define CKACTIONMENUITEM_H

@class UILabel<CKActionMenuItemView>, UIView<CKActionMenuItemView>;

#import <Foundation/Foundation.h>


@interface CKActionMenuItem : NSObject

@property (nonatomic) SEL action; // ivar: _action
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UILabel<CKActionMenuItemView> *label; // ivar: _label
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (retain, nonatomic) id *target; // ivar: _target
@property (retain, nonatomic) UIView<CKActionMenuItemView> *view; // ivar: _view


+(id)itemWithImageTemplate:(id)arg0 tintColor:(id)arg1 highlightedTintColor:(id)arg2 target:(id)arg3 action:(SEL)arg4 ;
// +(void)animate:(id)arg0 completion:(unk)arg1  ;
-(id)description;
-(id)init;
-(id)initWithView:(id)arg0 label:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)sendAction;
-(void)updateForState:(NSInteger)arg0 touchInside:(BOOL)arg1 ;


@end


#endif