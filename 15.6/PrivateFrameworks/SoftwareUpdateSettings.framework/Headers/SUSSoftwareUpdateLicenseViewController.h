// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUSSOFTWAREUPDATELICENSEVIEWCONTROLLER_H
#define SUSSOFTWAREUPDATELICENSEVIEWCONTROLLER_H

@class PSViewController, NSString, UITextView;



@interface SUSSoftwareUpdateLicenseViewController : PSViewController

@property (retain, nonatomic) NSString *licenseTextInfo; // ivar: _licenseTextInfo
@property (retain, nonatomic) UITextView *licenseTextView; // ivar: _licenseTextView


-(id)initWithLicense:(id)arg0 ;
-(void)setLicenseText:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif