// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSSOFTWAREUPDATELICENSEVIEWCONTROLLER_H
#define PSSOFTWAREUPDATELICENSEVIEWCONTROLLER_H

@class NSString, UITextView;


#import "PSViewController.h"

@interface PSSoftwareUpdateLicenseViewController : PSViewController

@property (retain, nonatomic) NSString *licenseTextInfo; // ivar: _licenseTextInfo
@property (retain, nonatomic) UITextView *licenseTextView; // ivar: _licenseTextView


-(BOOL)_canShowWhileLocked;
-(id)initWithLicense:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)setLicenseText:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif