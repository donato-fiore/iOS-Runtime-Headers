// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSPECIFIERDATASOURCE_H
#define SCLSPECIFIERDATASOURCE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SCLListViewController.h"
#import "SCLSettingsViewModel.h"

@interface SCLSpecifierDataSource : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, nonatomic) NSArray *allSpecifiers;
@property (copy, nonatomic) NSArray *childDataSources; // ivar: _childDataSources
@property (weak, nonatomic) SCLListViewController *listController; // ivar: _listController
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly, nonatomic) SCLSettingsViewModel *viewModel; // ivar: _viewModel


+(id)keyPathsForValuesAffectingAllSpecifiers;
-(id)initWithListController:(id)arg0 viewModel:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 specifier:(id)arg2 ;


@end


#endif