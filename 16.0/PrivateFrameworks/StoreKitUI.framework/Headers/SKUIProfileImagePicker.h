// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPROFILEIMAGEPICKER_H
#define SKUIPROFILEIMAGEPICKER_H

@class UIViewController, UIView, UILabel, UIImagePickerController, UIScrollView, NSString;
@protocol UIImagePickerControllerDelegate, UINavigationControllerDelegate, SKUIProfileImagePickerDelegate;


#import "SKUIClientContext.h"

@interface SKUIProfileImagePicker : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

 {
    SKUIClientContext *_clientContext;
    UIView *_contentView;
    UILabel *_descriptionLabel;
    BOOL _firstApperance;
    UIImagePickerController *_imagePicker;
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIProfileImagePickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_fixCropRect:(id)arg0 forOriginalImage:(id)arg1 ;
-(id)initWithClientContext:(id)arg0 ;
-(void)_didCancel;
-(void)_presentImagePickerWithSourceType:(NSInteger)arg0 ;
-(void)_showImagePicker;
-(void)_showImageSourcePicker;
-(void)imagePickerController:(id)arg0 didFinishPickingMediaWithInfo:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif