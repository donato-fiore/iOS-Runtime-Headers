// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDATAMETADATAREPORTACCESSSECTION_H
#define HKDATAMETADATAREPORTACCESSSECTION_H

@class UIViewController;


#import "HKDataMetadataSection.h"

@interface HKDataMetadataReportAccessSection : HKDataMetadataSection

@property (readonly, nonatomic) UIViewController *accessViewController; // ivar: _accessViewController


-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)initWithSample:(id)arg0 healthStore:(id)arg1 delegate:(id)arg2 ;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif