// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKSELECTABLEBARBUTTONITEM_H
#define VKSELECTABLEBARBUTTONITEM_H

@class UIBarButtonItem;


#import "VKSelectableBarButtonContainerView.h"

@interface VKSelectableBarButtonItem : UIBarButtonItem

@property (nonatomic) CGFloat alpha;
@property (nonatomic) CGFloat compactPadding;
@property (nonatomic) CGFloat cornerRadiusRatio;
@property (nonatomic) CGFloat padding;
@property (nonatomic) BOOL showsMenuAsPrimaryAction;
@property (retain, nonatomic) VKSelectableBarButtonContainerView *toggleView; // ivar: _toggleView
@property (nonatomic) CGFloat width;


+(id)keyPathsForValuesAffectingAlpha;
-(id)image;
-(id)init;
-(id)menu;
-(void)setAction:(SEL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setMenu:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setTarget:(id)arg0 ;


@end


#endif