// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIREPORTDOMAINDETAILCONTROLLER_H
#define PUIREPORTDOMAINDETAILCONTROLLER_H

@class PSListController, PSSpecifier, NSArray, NSString;



@interface PUIReportDomainDetailController : PSListController

@property (retain, nonatomic) PSSpecifier *appHeader; // ivar: _appHeader
@property (retain, nonatomic) NSArray *appRows; // ivar: _appRows
@property (retain, nonatomic) NSArray *appRowsAwaitingDisplay; // ivar: _appRowsAwaitingDisplay
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) PSSpecifier *websiteHeader; // ivar: _websiteHeader
@property (retain, nonatomic) NSArray *websiteRows; // ivar: _websiteRows
@property (retain, nonatomic) NSArray *websiteRowsAwaitingDisplay; // ivar: _websiteRowsAwaitingDisplay


-(id)appSpecifiersFromResults:(id)arg0 ;
-(id)iconForContext:(id)arg0 ;
-(id)init;
-(id)nameForAppID:(id)arg0 ;
-(id)specifiers;
-(id)timeStringForDate:(id)arg0 ;
-(id)valueForSpecifier:(id)arg0 ;
-(id)websiteSpecifiersFromResults:(id)arg0 ;
-(void)dataDidChange;
-(void)didTapLearnMore;
-(void)reloadAsyncSpecifiers;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif