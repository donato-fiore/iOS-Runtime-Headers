// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIHORIZONTALLYSCROLLINGDETAILEDROWBUTTONCONTROLLER_H
#define SEARCHUIHORIZONTALLYSCROLLINGDETAILEDROWBUTTONCONTROLLER_H



#import "SearchUIHorizontallyScrollingContainerButtonController.h"
#import "SearchUIDetailedView.h"

@interface SearchUIHorizontallyScrollingDetailedRowButtonController : SearchUIHorizontallyScrollingContainerButtonController

@property (retain, nonatomic) SearchUIDetailedView *detailedView; // ivar: _detailedView


-(CGFloat)spacing;
-(id)setupContentView;
-(void)setCardSectionRowModel:(id)arg0 ;
-(void)setFeedbackDelegate:(id)arg0 ;


@end


#endif