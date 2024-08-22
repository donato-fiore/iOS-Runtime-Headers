// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCLINICALSETTINGSOPTINSECTION_H
#define WDCLINICALSETTINGSOPTINSECTION_H



#import "HRWDTableViewSection.h"

@interface WDClinicalSettingsOptInSection : HRWDTableViewSection

@property (readonly, nonatomic) BOOL optIn; // ivar: _optIn


-(NSUInteger)numberOfRows;
-(id)_optInCellForTableView:(id)arg0 ;
-(id)_viewDataCellForTableView:(id)arg0 ;
-(id)cellForRow:(NSUInteger)arg0 table:(id)arg1 ;
-(id)titleForHeader;
-(void)_fetchOptInStatus;
-(void)_handleOptInSwitchChanged:(id)arg0 ;
-(void)applicationWillEnterForeground;
-(void)didSelectRow:(NSUInteger)arg0 representedByCell:(id)arg1 withCompletion:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif