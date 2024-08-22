// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKSERVICEHOURSROW_H
#define MKSERVICEHOURSROW_H

@class GEOLinkedService;


#import "MKPlaceSectionRowView.h"
#import "MKPlaceCompleteHoursView.h"

@interface MKServiceHoursRow : MKPlaceSectionRowView

@property (retain, nonatomic) MKPlaceCompleteHoursView *completePlaceHoursView; // ivar: _completePlaceHoursView
@property (retain, nonatomic) GEOLinkedService *linkedService; // ivar: _linkedService


-(id)initWithLinkedService:(id)arg0 frame:(struct CGRect )arg1 showTodaysHoursOnly:(BOOL)arg2 ;
-(void)_setUpConstraints;


@end


#endif