// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARSPACERDISPLAYITEM_H
#define _UISTATUSBARSPACERDISPLAYITEM_H

@class UIStatusBarDisplayItem, NSArray;


#import "UILayoutGuide.h"

@interface _UIStatusBarSpacerDisplayItem : UIStatusBarDisplayItem

@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UILayoutGuide *layoutGuide; // ivar: _layoutGuide
@property (nonatomic) CGSize size; // ivar: _size


-(id)initWithIdentifier:(id)arg0 item:(id)arg1 ;
-(void)_applyConstraintsIfNeeded;
-(void)applyUpdate:(id)arg0 ;
-(void)setContainerView:(id)arg0 ;


@end


#endif