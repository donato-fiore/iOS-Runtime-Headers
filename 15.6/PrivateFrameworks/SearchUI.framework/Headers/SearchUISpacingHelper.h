// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISPACINGHELPER_H
#define SEARCHUISPACINGHELPER_H

@class NSString;
@protocol NUIArrangementItem;

#import <Foundation/Foundation.h>


@interface SearchUISpacingHelper : NSObject <NUIArrangementItem>



@property (nonatomic) CGFloat compressionResistance; // ivar: _compressionResistance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)idealHorizontalSpacingBetweenIcons;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(CGFloat)effectiveBaselineOffsetFromContentBottom;
-(CGFloat)effectiveFirstBaselineOffsetFromContentTop;
-(float)contentCompressionResistancePriorityForAxis:(NSInteger)arg0 ;
-(float)contentHuggingPriorityForAxis:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif