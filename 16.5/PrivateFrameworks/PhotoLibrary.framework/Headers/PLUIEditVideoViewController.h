// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLUIEDITVIDEOVIEWCONTROLLER_H
#define PLUIEDITVIDEOVIEWCONTROLLER_H

@class NSDictionary, UIImagePickerController, UINavigationItem, NSString;
@protocol UIImagePickerControllerDelegate, UINavigationControllerDelegate;


#import "PLUIImageViewController.h"

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

 {
    NSDictionary *_options;
    UIImagePickerController *_imagePicker;
    UINavigationItem *_navItem;
    id *_delegate;
    Class _viewClass;
    unsigned int _canCreateMetadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL parentInPopoverException; // ivar: _parentInPopoverException
@property (readonly) Class superclass;


-(BOOL)_displaysFullScreen;
-(BOOL)_editingForThirdParty;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)videoViewCanCreateMetadata:(id)arg0 ;
-(CGFloat)videoViewScrubberYOrigin:(id)arg0 forOrientation:(NSInteger)arg1 ;
-(Class)_viewClass;
-(id)_trimMessage;
-(id)delegate;
-(id)initWithPhoto:(id)arg0 trimTitle:(id)arg1 ;
-(id)initWithProperties:(id)arg0 ;
-(id)initWithVideoURL:(id)arg0 trimTitle:(id)arg1 ;
-(id)navigationItem;
-(id)uiipc_imagePickerController;
-(id)uiipc_imagePickerOptions;
-(int)cropOverlayMode;
-(struct CGRect )previewFrame;
-(void)_cancelTrim:(id)arg0 ;
-(void)_setupNavigationItemAndTrimTitle:(id)arg0 ;
-(void)_trimVideo:(id)arg0 ;
-(void)dealloc;
-(void)didChooseVideoAtURL:(id)arg0 options:(id)arg1 ;
-(void)loadView;
-(void)setDelegate:(id)arg0 ;
-(void)setImagePickerOptions:(id)arg0 ;
-(void)setViewClass:(Class)arg0 ;
-(void)videoRemakerDidEndRemaking:(id)arg0 temporaryPath:(id)arg1 ;
-(void)videoViewPlaybackDidFail:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif