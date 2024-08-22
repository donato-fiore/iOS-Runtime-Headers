// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSTIMEZONECONTROLLER_H
#define PSTIMEZONECONTROLLER_H

@class UITableViewController, NSArray, NSString, UISearchController;
@protocol UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate;


#import "PSListController.h"
#import "PSSpecifier.h"

@interface PSTimeZoneController : UITableViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate>

 {
    NSArray *_cities;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *parentController; // ivar: _parentController
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (retain, nonatomic) PSSpecifier *specifier; // ivar: _specifier
@property (readonly) Class superclass;


+(void)setTimeZone:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)currentTimeZoneCityName;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif