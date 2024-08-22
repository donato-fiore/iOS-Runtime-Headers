// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFCAPSULENAVIGATIONBARLABELLAYOUTINFO_H
#define SFCAPSULENAVIGATIONBARLABELLAYOUTINFO_H

@class NSLayoutConstraint, UIView;

#import <Foundation/Foundation.h>


@interface SFCapsuleNavigationBarLabelLayoutInfo : NSObject

@property (retain, nonatomic) NSLayoutConstraint *constraintForHorizontalAlignment; // ivar: _constraintForHorizontalAlignment
@property (retain, nonatomic) NSLayoutConstraint *constraintToItemAbove; // ivar: _constraintToItemAbove
@property (retain, nonatomic) NSLayoutConstraint *constraintToItemBelow; // ivar: _constraintToItemBelow
@property (readonly, nonatomic) UIView *view; // ivar: _view


-(id)initWithView:(id)arg0 ;


@end


#endif