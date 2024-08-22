// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMCENROLLMENTCONSENTVIEWCONTROLLER_H
#define DMCENROLLMENTCONSENTVIEWCONTROLLER_H

@class NSString, MCProfile;
@protocol DMCEnrollmentConsentViewControllerDelegate;


#import "DMCEnrollmentTemplateTableViewController.h"

@interface DMCEnrollmentConsentViewController : DMCEnrollmentTemplateTableViewController

@property (weak) NSObject<DMCEnrollmentConsentViewControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *orgName; // ivar: _orgName
@property (retain, nonatomic) MCProfile *profile; // ivar: _profile
@property (copy, nonatomic) NSString *username; // ivar: _username


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 username:(id)arg1 profile:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif