// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVMENUBARSTACKBUTTON_H
#define _TVMENUBARSTACKBUTTON_H

@class UIButton, NSDictionary;



@interface _TVMenuBarStackButton : UIButton

@property (retain, nonatomic) NSDictionary *tabBarItem; // ivar: _tabBarItem


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_configureSubviews;
-(void)_setSelectedOrHighlighted:(BOOL)arg0 ;
-(void)_updateImageEdgeInsets;
-(void)_updateSelectionViewForState:(NSUInteger)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif