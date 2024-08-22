// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKDAYVIEWCONTENTGEOMETRYDELEGATE_H
#define EKDAYVIEWCONTENTGEOMETRYDELEGATE_H

@class NSString;
@protocol CUIKSingleDayTimelineGeometryDelegate, EKDayOccurrenceViewDelegate;

#import <Foundation/Foundation.h>

#import "EKDayViewContent.h"

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate, EKDayOccurrenceViewDelegate>



@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (weak, nonatomic) EKDayViewContent *dayViewContent; // ivar: _dayViewContent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect displayedRect;
@property (nonatomic) CGRect frame; // ivar: _frame
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat hourHeight;
@property (readonly, nonatomic) BOOL originIsUpperLeft;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeWidth;
@property (readonly, nonatomic) CGFloat topPadding;


-(BOOL)shouldReverseLayoutDirection;
-(CGFloat)dateForPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )pointForDate:(CGFloat)arg0 ;


@end


#endif