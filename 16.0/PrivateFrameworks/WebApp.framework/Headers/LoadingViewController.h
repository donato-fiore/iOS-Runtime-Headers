// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LOADINGVIEWCONTROLLER_H
#define LOADINGVIEWCONTROLLER_H

@class UIViewController, UIImage, UIImageView, UIView;



@interface LoadingViewController : UIViewController {
    BOOL _imageIsFullScreen;
    UIImage *_image;
    UIImageView *_imageView;
    NSInteger _orientation;
    UIView *_statusBarView;
    NSInteger _preferredStatusBarStyle;
}




-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithWebClip:(id)arg0 orientation:(NSInteger)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;


@end


#endif