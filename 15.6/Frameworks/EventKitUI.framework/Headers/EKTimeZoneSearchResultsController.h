// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKTIMEZONESEARCHRESULTSCONTROLLER_H
#define EKTIMEZONESEARCHRESULTSCONTROLLER_H

@class NSString;
@protocol UISearchResultsUpdating;


#import "EKTimeZoneViewController.h"

@interface EKTimeZoneSearchResultsController : EKTimeZoneViewController <UISearchResultsUpdating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif