// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITINGCOLORITEMVIEW_H
#define PREDITINGCOLORITEMVIEW_H

@class UIView, NSString;


#import "PRSelectableEditingItemView.h"
#import "PREditingColorItem.h"

@interface PREditingColorItemView : PRSelectableEditingItemView

@property (retain, nonatomic) PREditingColorItem *colorItem; // ivar: _colorItem
@property (retain, nonatomic) UIView *itemView; // ivar: _itemView
@property (readonly, copy, nonatomic) NSString *localizedName;


-(id)initWithColorItem:(id)arg0 ;
-(void)updateForChangedColor;


@end


#endif