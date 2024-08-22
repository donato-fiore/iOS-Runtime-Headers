// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDRESEARCHSTUDYSOURCESLISTTABLEVIEWSECTION_H
#define WDRESEARCHSTUDYSOURCESLISTTABLEVIEWSECTION_H

@class NSArray;


#import "WDSourcesListTableViewSection.h"

@interface WDResearchStudySourcesListTableViewSection : WDSourcesListTableViewSection

@property (copy, nonatomic) NSArray *researchSources; // ivar: _researchSources


-(NSUInteger)numberOfRows;
-(id)_sourceCellForRow:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)cellForRow:(NSUInteger)arg0 table:(id)arg1 ;
-(id)noneString;
-(id)titleForFooter;
-(id)titleForHeader;
-(void)dataSourceDidUpdate;
-(void)didSelectRow:(NSUInteger)arg0 representedByCell:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif