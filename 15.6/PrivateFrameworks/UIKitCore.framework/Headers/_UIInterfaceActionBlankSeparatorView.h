// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIINTERFACEACTIONBLANKSEPARATORVIEW_H
#define _UIINTERFACEACTIONBLANKSEPARATORVIEW_H

@class NSString;
@protocol UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying;


#import "UIView.h"
#import "_UIInterfaceActionSeparatorConstraintController.h"

@interface _UIInterfaceActionBlankSeparatorView : UIView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying>



@property (nonatomic) CGFloat constantAxisDimension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalLineLeadingInset; // ivar: _horizontalLineLeadingInset
@property (readonly, retain, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints; // ivar: _separatorViewConstraints
@property (readonly) Class superclass;


-(id)init;
-(void)setConstantSizedAxis:(NSInteger)arg0 ;
-(void)updateConstraints;


@end


#endif