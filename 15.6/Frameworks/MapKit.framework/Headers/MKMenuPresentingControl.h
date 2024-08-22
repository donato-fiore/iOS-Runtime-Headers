// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKMENUPRESENTINGCONTROL_H
#define MKMENUPRESENTINGCONTROL_H

@class UIControl, NSString, UIMenu;
@protocol UIContextMenuInteractionDelegate;



@interface MKMenuPresentingControl : UIControl <UIContextMenuInteractionDelegate>

 {
    BOOL _selected;
    BOOL _highlighted;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIMenu *menu; // ivar: _menu
@property (readonly) Class superclass;


-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithMenu:(id)arg0 ;
-(void)_updateBackgroundColor:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif