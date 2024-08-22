// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIINTERFACEACTIONSEPARATORCONSTRAINTCONTROLLER_H
#define _UIINTERFACEACTIONSEPARATORCONSTRAINTCONTROLLER_H

@class NSLayoutConstraint, UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying>;

#import <Foundation/Foundation.h>


@interface _UIInterfaceActionSeparatorConstraintController : NSObject

@property (nonatomic) CGFloat constantAxisDimension; // ivar: _constantAxisDimension
@property (nonatomic) NSInteger constantSizedAxis; // ivar: _constantSizedAxis
@property (readonly, nonatomic) NSLayoutConstraint *fixedHeightConstraint; // ivar: _fixedHeightConstraint
@property (readonly, nonatomic) NSLayoutConstraint *fixedWidthConstraint; // ivar: _fixedWidthConstraint
@property (readonly, weak, nonatomic) UIView<UIInterfaceActionVisualSeparatorDisplaying><UIInterfaceActionVisualSectionSeparatorDisplaying> *separatorView; // ivar: _separatorView


-(BOOL)_isFixedWidth;
-(id)initWithSeparatorView:(id)arg0 ;
-(void)_updateConstantSizedConstraints;


@end


#endif