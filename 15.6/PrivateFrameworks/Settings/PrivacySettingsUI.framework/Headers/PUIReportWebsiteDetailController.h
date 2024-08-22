// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIREPORTWEBSITEDETAILCONTROLLER_H
#define PUIREPORTWEBSITEDETAILCONTROLLER_H

@class PSListController, PSSpecifier, NSArray, NSString;



@interface PUIReportWebsiteDetailController : PSListController

@property (retain, nonatomic) PSSpecifier *appHeader; // ivar: _appHeader
@property (retain, nonatomic) NSArray *appRows; // ivar: _appRows
@property (retain, nonatomic) NSArray *appRowsAwaitingDisplay; // ivar: _appRowsAwaitingDisplay
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) PSSpecifier *domainHeader; // ivar: _domainHeader
@property (retain, nonatomic) NSArray *domainRows; // ivar: _domainRows
@property (retain, nonatomic) NSArray *domainRowsAwaitingDisplay; // ivar: _domainRowsAwaitingDisplay


-(id)appSpecifiersFromResults:(id)arg0 ;
-(id)domainsSpecifiersFromResults:(id)arg0 ;
-(id)iconForContext:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(id)timeStringForDate:(id)arg0 ;
-(id)valueForSpecifier:(id)arg0 ;
-(void)dataDidChange;
-(void)reloadAsyncSpecifiers;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif