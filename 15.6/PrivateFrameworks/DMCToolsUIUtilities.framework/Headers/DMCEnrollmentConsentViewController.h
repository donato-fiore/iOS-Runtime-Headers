// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCENROLLMENTCONSENTVIEWCONTROLLER_H
#define DMCENROLLMENTCONSENTVIEWCONTROLLER_H

@class NSString, MCProfile, NSNumber;
@protocol DMCEnrollmentConsentViewControllerDelegate;


#import "DMCEnrollmentTemplateTableViewController.h"

@interface DMCEnrollmentConsentViewController : DMCEnrollmentTemplateTableViewController

@property (weak) NSObject<DMCEnrollmentConsentViewControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *orgName; // ivar: _orgName
@property (retain, nonatomic) MCProfile *profile; // ivar: _profile
@property (retain, nonatomic) NSNumber *requiredAppID; // ivar: _requiredAppID
@property (copy, nonatomic) NSString *username; // ivar: _username


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 username:(id)arg1 profile:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif