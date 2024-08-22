// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLACTIVESPECIFIERDATASOURCE_H
#define SCLACTIVESPECIFIERDATASOURCE_H

@class NSBundle, SCLScheduleFormatter, NSArray, PSSpecifier, NSString;


#import "SCLSpecifierDataSource.h"

@interface SCLActiveSpecifierDataSource : SCLSpecifierDataSource

@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (retain, nonatomic) SCLScheduleFormatter *formatter; // ivar: _formatter
@property (retain, nonatomic) NSArray *permanentSpecifiers; // ivar: _permanentSpecifiers
@property (retain, nonatomic) PSSpecifier *scheduleSpecifier; // ivar: _scheduleSpecifier
@property (retain, nonatomic) NSString *table; // ivar: _table


-(id)initWithListController:(id)arg0 viewModel:(id)arg1 ;
-(id)initWithListController:(id)arg0 viewModel:(id)arg1 options:(NSUInteger)arg2 ;
-(id)isSchoolTimeActive:(id)arg0 ;
-(id)scheduleSummaryForSpecifier:(id)arg0 ;
-(id)valueForScheduleSpecifier:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeFooterText;
-(void)setSchoolTimeActive:(id)arg0 specifier:(id)arg1 ;
-(void)showEditorForSpecifier:(id)arg0 ;


@end


#endif