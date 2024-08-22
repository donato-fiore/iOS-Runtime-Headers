// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKPLACECOMPLETEHOURSVIEW_H
#define MKPLACECOMPLETEHOURSVIEW_H

@class UIView, GEOLinkedService, NSArray, UIImageView, NSLayoutConstraint, NSString;
@protocol MKPlaceHoursViewDelegate;


#import "_MKUILabel.h"

@interface MKPlaceCompleteHoursView : UIView <MKPlaceHoursViewDelegate>

 {
    GEOLinkedService *_linkedService;
    NSArray *_sortedBusinessHours;
    UIView *_containerViewForHoursAndCategoryName;
    UIImageView *_categoryIconView;
    _MKUILabel *_localizedCategoryNameLabel;
    NSLayoutConstraint *_hoursTopLabelBaselineToCategoryName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *placeHoursViews; // ivar: _placeHoursViews
@property (readonly) Class superclass;


-(id)initWithLinkedService:(id)arg0 showTodaysHoursOnly:(BOOL)arg1 ;
-(void)_contentSizeDidChange;
-(void)_setUpConstraints;
-(void)commonInit;
-(void)hoursViewDidUpdate:(id)arg0 ;


@end


#endif