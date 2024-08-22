// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBUTTONBARSPACERLAYOUT_H
#define _UIBUTTONBARSPACERLAYOUT_H

@class UIButtonBarLayout, NSLayoutConstraint;


#import "UIBarButtonItem.h"
#import "UIView.h"

@interface _UIButtonBarSpacerLayout : UIButtonBarLayout {
    UIBarButtonItem *_item;
    UIView *_spacer;
    NSLayoutConstraint *_requestedSize;
    NSLayoutConstraint *_minimumSize;
    NSLayoutConstraint *_equalSize;
    BOOL _flexible;
}


@property (readonly, nonatomic) NSInteger spacerType; // ivar: _spacerType


+(NSInteger)typeOfSpacerBetweenLayout:(id)arg0 andLayout:(id)arg1 ;
+(id)spacerForLayoutMetrics:(id)arg0 betweenLayout:(id)arg1 andLayout:(id)arg2 ;
-(BOOL)isSpaceLayout;
-(BOOL)suppressSpacing;
-(CGFloat)minimumLayoutWidthGivenMinimumSpaceWidth:(CGFloat)arg0 ;
-(id)barButtonItem;
-(id)description;
-(id)initWithLayoutMetrics:(id)arg0 ;
-(id)initWithLayoutMetrics:(id)arg0 barButtonItem:(id)arg1 ;
-(void)_addConstraintsToActivate:(id)arg0 toDeactivate:(id)arg1 ;
-(void)_addLayoutViews:(id)arg0 ;
-(void)_configure;


@end


#endif