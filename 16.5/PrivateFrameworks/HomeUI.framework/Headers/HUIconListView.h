// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUICONLISTVIEW_H
#define HUICONLISTVIEW_H

@class UIView, NSArray, NSMutableArray;



@interface HUIconListView : UIView

@property (retain, nonatomic) NSArray *iconDescriptors; // ivar: _iconDescriptors
@property (retain, nonatomic) NSMutableArray *iconViews; // ivar: _iconViews


-(id)init;
-(void)_addIconNamed:(id)arg0 ;
-(void)_addIconWithDescriptor:(id)arg0 ;
-(void)_layoutLeftToRight;
-(void)_layoutRightToLeft;
-(void)_prepareIconArray;
-(void)_setUpIcons;
-(void)layoutSubviews;


@end


#endif