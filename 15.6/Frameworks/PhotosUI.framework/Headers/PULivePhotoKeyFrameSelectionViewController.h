// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PULIVEPHOTOKEYFRAMESELECTIONVIEWCONTROLLER_H
#define PULIVEPHOTOKEYFRAMESELECTIONVIEWCONTROLLER_H

@class UIViewController, UIButton, NSString;
@protocol PULivePhotoKeyFrameSelectionViewControllerDelegate;



@interface PULivePhotoKeyFrameSelectionViewController : UIViewController

@property (weak, nonatomic) NSObject<PULivePhotoKeyFrameSelectionViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *makeKeyPhotoBtn; // ivar: _makeKeyPhotoBtn
@property (copy, nonatomic) NSString *selectionTitle; // ivar: _selectionTitle


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_updateButtonTitle;
-(void)tapMakeKeyPhoto:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif