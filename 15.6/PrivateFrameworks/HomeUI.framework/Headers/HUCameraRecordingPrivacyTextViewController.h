// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCAMERARECORDINGPRIVACYTEXTVIEWCONTROLLER_H
#define HUCAMERARECORDINGPRIVACYTEXTVIEWCONTROLLER_H

@class UIViewController, UITextView, UILabel;



@interface HUCameraRecordingPrivacyTextViewController : UIViewController

@property (retain, nonatomic) UITextView *consentTextView; // ivar: _consentTextView
@property (retain, nonatomic) UILabel *headerLabel; // ivar: _headerLabel


-(void)_addConstraints;
-(void)viewDidLoad;


@end


#endif