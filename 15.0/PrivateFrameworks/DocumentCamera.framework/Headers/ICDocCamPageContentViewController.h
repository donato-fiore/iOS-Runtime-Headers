// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMPAGECONTENTVIEWCONTROLLER_H
#define ICDOCCAMPAGECONTENTVIEWCONTROLLER_H

@class UIViewController, UIImage, UIImageView;
@protocol ICDocCamPageContentViewTapDelegate;



@interface ICDocCamPageContentViewController : UIViewController

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (weak, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (weak, nonatomic) NSObject<ICDocCamPageContentViewTapDelegate> *tapDelegate; // ivar: _tapDelegate


+(CGFloat)leadingTrailingOffset:(NSInteger)arg0 ;
-(BOOL)_canShowWhileLocked;
-(void)didReceiveMemoryWarning;
-(void)handleSingleTap:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif