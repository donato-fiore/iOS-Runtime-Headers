// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDDOCUMENTLISTDATAPROVIDER_H
#define WDDOCUMENTLISTDATAPROVIDER_H



#import "WDSampleListDataProvider.h"

@interface WDDocumentListDataProvider : WDSampleListDataProvider



-(CGFloat)customCellHeight;
-(CGFloat)customEstimatedCellHeight;
-(NSInteger)cellStyle;
-(id)createQueryForSampleType:(id)arg0 predicate:(id)arg1 limit:(NSInteger)arg2 sortDescriptors:(id)arg3 resultsHandler:(id)arg4 ;
-(id)customCellForObject:(id)arg0 indexPath:(id)arg1 tableView:(id)arg2 ;
-(id)sampleTypes;
-(id)titleForSection:(NSUInteger)arg0 ;
-(void)refineSamplesWithCompletion:(id)arg0 ;


@end


#endif