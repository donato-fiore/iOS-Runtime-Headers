// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLHISTORYDAYSDATASOURCE_H
#define SCLHISTORYDAYSDATASOURCE_H



#import "SCLSpecifierDataSource.h"

@interface SCLHistoryDaysDataSource : SCLSpecifierDataSource



-(id)initWithListController:(id)arg0 viewModel:(id)arg1 ;
-(void)dealloc;
-(void)handleSignificantTimeChange:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateHistoryGroupsWithItems:(id)arg0 ;


@end


#endif