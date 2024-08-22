// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STWEBFILTERITEMDETAILCONTROLLER_H
#define STWEBFILTERITEMDETAILCONTROLLER_H

@class PSListController, NSString;
@protocol STContentPrivacyViewModelCoordinator;


#import "STWebFilterDetailController.h"
#import "STRestrictionItem.h"

@interface STWebFilterItemDetailController : PSListController

@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (nonatomic) BOOL isNamedSite; // ivar: _isNamedSite
@property (copy, nonatomic) NSString *pageTitle; // ivar: _pageTitle
@property (copy, nonatomic) NSString *pageURL; // ivar: _pageURL
@property (weak) STWebFilterDetailController *parentWebFilterController; // ivar: _parentWebFilterController
@property (retain, nonatomic) STRestrictionItem *restriction; // ivar: _restriction


-(BOOL)shouldSelectResponderOnAppearance;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)saveFilterItem;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willResignActive;


@end


#endif