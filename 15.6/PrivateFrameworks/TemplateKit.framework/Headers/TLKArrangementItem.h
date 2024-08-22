// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKARRANGEMENTITEM_H
#define TLKARRANGEMENTITEM_H

@class NSString;
@protocol NUIArrangementItem;

#import <Foundation/Foundation.h>


@interface TLKArrangementItem : NSObject <NUIArrangementItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;


-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(CGFloat)effectiveBaselineOffsetFromContentBottom;
-(CGFloat)effectiveFirstBaselineOffsetFromContentTop;
-(float)contentCompressionResistancePriorityForAxis:(NSInteger)arg0 ;
-(float)contentHuggingPriorityForAxis:(NSInteger)arg0 ;


@end


#endif