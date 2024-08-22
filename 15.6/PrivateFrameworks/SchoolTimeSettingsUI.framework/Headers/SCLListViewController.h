// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLLISTVIEWCONTROLLER_H
#define SCLLISTVIEWCONTROLLER_H

@class PSListController, NSArray;


#import "SCLSpecifierDataSource.h"

@interface SCLListViewController : PSListController

@property (copy, nonatomic) NSArray *pendingUpdateEndSpecifiers; // ivar: _pendingUpdateEndSpecifiers
@property (copy, nonatomic) NSArray *pendingUpdateStartSpecifiers; // ivar: _pendingUpdateStartSpecifiers
@property (retain, nonatomic) SCLSpecifierDataSource *specifierSource; // ivar: _specifierSource
@property (nonatomic) NSInteger updateCount; // ivar: _updateCount
@property (nonatomic) BOOL wantsEditingMode; // ivar: _wantsEditingMode


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)beginUpdates;
-(void)dealloc;
-(void)endUpdates;
-(void)loadSpecifierSource;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reevaluateEditingMode;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif