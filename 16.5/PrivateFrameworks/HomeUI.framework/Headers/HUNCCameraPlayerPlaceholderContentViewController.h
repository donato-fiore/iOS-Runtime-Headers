// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNCCAMERAPLAYERPLACEHOLDERCONTENTVIEWCONTROLLER_H
#define HUNCCAMERAPLAYERPLACEHOLDERCONTENTVIEWCONTROLLER_H

@class UIViewController, NSURL, UIImage, UIImageView;



@interface HUNCCameraPlayerPlaceholderContentViewController : UIViewController

@property (retain, nonatomic) NSURL *imageURL; // ivar: _imageURL
@property (retain, nonatomic) UIImage *notificationImage; // ivar: _notificationImage
@property (retain, nonatomic) UIImageView *placeholderImageView; // ivar: _placeholderImageView
@property (nonatomic) BOOL shouldShowPlaceholderContent; // ivar: _shouldShowPlaceholderContent


-(id)initWithImageURL:(id)arg0 ;
-(void)updatePlaceholderImage:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif