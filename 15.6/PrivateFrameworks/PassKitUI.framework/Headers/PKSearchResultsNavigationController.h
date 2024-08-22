// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSEARCHRESULTSNAVIGATIONCONTROLLER_H
#define PKSEARCHRESULTSNAVIGATIONCONTROLLER_H



#import "PKNavigationController.h"
#import "PKSearchResultsSearchController.h"

@interface PKSearchResultsNavigationController : PKNavigationController

@property (weak, nonatomic) PKSearchResultsSearchController *searchController; // ivar: _searchController


-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif