// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIINTERFACEACTIONBLENDINGSEPARATORVIEW_H
#define _UIINTERFACEACTIONBLENDINGSEPARATORVIEW_H

@class UIBlendingHighlightView, NSString;
@protocol UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying;


#import "_UIInterfaceActionSeparatorConstraintController.h"

@interface _UIInterfaceActionBlendingSeparatorView : UIBlendingHighlightView <UIInterfaceActionVisualSeparatorDisplaying, UIInterfaceActionVisualSectionSeparatorDisplaying>



@property (nonatomic) CGFloat constantAxisDimension;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalLineLeadingInset; // ivar: _horizontalLineLeadingInset
@property (readonly, retain, nonatomic) _UIInterfaceActionSeparatorConstraintController *separatorViewConstraints; // ivar: _separatorViewConstraints
@property (readonly) Class superclass;


-(NSInteger)constantSizedAxis;
-(id)init;
-(id)initWithTopLevelFilters:(id)arg0 compositingColors:(id)arg1 compositingFilterModes:(id)arg2 ;
-(void)_updateContentDirectionalInsets;
-(void)setConstantSizedAxis:(NSInteger)arg0 ;
-(void)updateConstraints;


@end


#endif