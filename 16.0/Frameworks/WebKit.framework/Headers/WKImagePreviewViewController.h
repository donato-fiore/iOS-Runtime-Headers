// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKIMAGEPREVIEWVIEWCONTROLLER_H
#define WKIMAGEPREVIEWVIEWCONTROLLER_H

@class UIViewController;



@interface WKImagePreviewViewController : UIViewController {
    RetainPtr<NSArray> _imageActions;
    RetainPtr<_WKActivatedElementInfo> _activatedElementInfo;
    RetainPtr<CGImage *> _image;
    RetainPtr<UIImageView> _imageView;
}




-(id)initWithCGImage:(struct RetainPtr<CGImage *> )arg0 defaultActions:(struct RetainPtr<NSArray> )arg1 elementInfo:(struct RetainPtr<_WKActivatedElementInfo> )arg2 ;
-(id)previewActionItems;
-(void)loadView;
-(void)viewDidLayoutSubviews;


@end


#endif