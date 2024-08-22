// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIAGNOSTICDATACONTROLLER_H
#define DIAGNOSTICDATACONTROLLER_H

@class NSArray, NSString, UISearchController;
@protocol UISearchResultsUpdating;


#import "PSListController.h"

@interface DiagnosticDataController : PSListController <UISearchResultsUpdating>



@property (retain, nonatomic) NSArray *_allSpecifiers; // ivar: __allSpecifiers
@property (nonatomic) NSUInteger _state; // ivar: __state
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (readonly) Class superclass;


-(id)init;
-(id)specifiers;
-(void)_loadDiagnosticsDataWithCompletion:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif