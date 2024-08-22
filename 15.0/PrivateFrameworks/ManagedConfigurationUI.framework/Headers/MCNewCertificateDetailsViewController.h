// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCNEWCERTIFICATEDETAILSVIEWCONTROLLER_H
#define MCNEWCERTIFICATEDETAILSVIEWCONTROLLER_H

@class NSArray;


#import "MCUITableViewController.h"

@interface MCNewCertificateDetailsViewController : MCUITableViewController

@property (retain, nonatomic) id *certificateTrust; // ivar: _certificateTrust
@property (retain, nonatomic) NSArray *keyValueSectionTitles; // ivar: _keyValueSectionTitles
@property (retain, nonatomic) NSArray *keyValueSections; // ivar: _keyValueSections


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 ;
-(id)initWithCertificateProperties:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithTrust:(struct __SecTrust *)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_setup;


@end


#endif