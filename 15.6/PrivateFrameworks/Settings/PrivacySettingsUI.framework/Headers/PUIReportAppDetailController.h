// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIREPORTAPPDETAILCONTROLLER_H
#define PUIREPORTAPPDETAILCONTROLLER_H

@class PSListController, NSString, PSSpecifier, NSArray;



@interface PUIReportAppDetailController : PSListController

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) PSSpecifier *domainHeader; // ivar: _domainHeader
@property (retain, nonatomic) NSArray *domainRows; // ivar: _domainRows
@property (retain, nonatomic) NSArray *domainRowsAwaitingDisplay; // ivar: _domainRowsAwaitingDisplay
@property (retain, nonatomic) PSSpecifier *otherHeader; // ivar: _otherHeader
@property (retain, nonatomic) NSArray *otherRows; // ivar: _otherRows
@property (retain, nonatomic) NSArray *otherRowsAwaitingDisplay; // ivar: _otherRowsAwaitingDisplay
@property (retain, nonatomic) PSSpecifier *websiteHeader; // ivar: _websiteHeader
@property (retain, nonatomic) NSArray *websiteRows; // ivar: _websiteRows
@property (retain, nonatomic) NSArray *websiteRowsAwaitingDisplay; // ivar: _websiteRowsAwaitingDisplay


-(BOOL)shouldShowOtherContent;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)domainsSpecifiersFromResults:(id)arg0 ;
-(id)init;
-(id)otherSpecifiersFromResults:(id)arg0 ;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg0 ;
-(id)websiteSpecifiersFromResults:(id)arg0 ;
-(void)dataDidChange;
-(void)reloadAsyncSpecifiers;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif