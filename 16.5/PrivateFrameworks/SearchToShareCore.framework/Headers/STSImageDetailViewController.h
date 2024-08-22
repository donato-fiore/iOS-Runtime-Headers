// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSIMAGEDETAILVIEWCONTROLLER_H
#define STSIMAGEDETAILVIEWCONTROLLER_H

@class UIImage;


#import "STSResultDetailViewController.h"
#import "STSAnimatedImageInfo.h"

@interface STSImageDetailViewController : STSResultDetailViewController {
    UIImage *_image;
    STSAnimatedImageInfo *_imageInfo;
}




-(void)setContentURL:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif