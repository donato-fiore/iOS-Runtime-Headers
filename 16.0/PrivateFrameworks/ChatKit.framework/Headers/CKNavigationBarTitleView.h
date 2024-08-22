// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKNAVIGATIONBARTITLEVIEW_H
#define CKNAVIGATIONBARTITLEVIEW_H

@class UINavigationBarTitleView;



@interface CKNavigationBarTitleView : UINavigationBarTitleView

@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing


-(void)_setTrailingItemsHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateTrailingBarButtonHiddenStateForTitleHeightAnimated:(BOOL)arg0 ;
-(void)contentDidChange;
-(void)updateIfNeeded:(BOOL)arg0 ;


@end


#endif