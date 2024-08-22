// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDAUDIOEXPOSUREEVENTLISTDATAPROVIDER_H
#define WDAUDIOEXPOSUREEVENTLISTDATAPROVIDER_H



#import "WDSampleListDataProvider.h"

@interface WDAudioExposureEventListDataProvider : WDSampleListDataProvider



-(CGFloat)customCellHeight;
-(CGFloat)customEstimatedCellHeight;
-(NSInteger)cellStyle;
-(id)customCellForObject:(id)arg0 indexPath:(id)arg1 tableView:(id)arg2 ;
-(id)sampleTypes;
-(id)titleForSection:(NSUInteger)arg0 ;


@end


#endif