// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEDITMENUINTERACTION_H
#define _UIEDITMENUINTERACTION_H



#import "UIEditMenuInteraction.h"

@interface _UIEditMenuInteraction : UIEditMenuInteraction {
    ? _delegateImplementsSPI;
}


@property (nonatomic) BOOL presentsContextMenuOnSecondaryAction;


-(id)_menuForSuggestedActions:(id)arg0 configuration:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGRect )_targetRectForConfiguration:(id)arg0 ;
-(void)_willDismissMenuForConfiguration:(id)arg0 animator:(id)arg1 ;
-(void)_willPresentMenuForConfiguration:(id)arg0 animator:(id)arg1 ;
-(void)dismissEditMenuAnimated:(BOOL)arg0 ;
-(void)presentEditMenuWithConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateVisibleMenu;


@end


#endif