// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMMSAFETYIMPROVEPHOTODETECTIONVIEWCONTROLLER_H
#define CKCOMMSAFETYIMPROVEPHOTODETECTIONVIEWCONTROLLER_H

@class UIViewController, UIImageView;



@interface CKCommSafetyImprovePhotoDetectionViewController : UIViewController

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView


-(id)configureImageFromChatItem:(id)arg0 ;
-(id)initWithChatItem:(id)arg0 ;
-(void)layoutImageView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif