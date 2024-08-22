// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDATRIALFIBRILLATIONEVENTLISTDATAPROVIDER_H
#define WDATRIALFIBRILLATIONEVENTLISTDATAPROVIDER_H



#import "WDSampleListDataProvider.h"

@interface WDAtrialFibrillationEventListDataProvider : WDSampleListDataProvider



-(CGFloat)customCellHeight;
-(CGFloat)customEstimatedCellHeight;
-(NSInteger)cellStyle;
-(id)customCellForObject:(id)arg0 indexPath:(id)arg1 tableView:(id)arg2 ;
-(id)sampleTypes;
-(id)viewControllerForItemAtIndexPath:(id)arg0 ;


@end


#endif