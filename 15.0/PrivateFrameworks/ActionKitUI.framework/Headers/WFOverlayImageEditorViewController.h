// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFOVERLAYIMAGEEDITORVIEWCONTROLLER_H
#define WFOVERLAYIMAGEEDITORVIEWCONTROLLER_H

@class UIViewController, WFFileRepresentation, NSArray, NSLayoutConstraint, WFImage, NSMapTable;
@protocol WFOverlayImageEditorOptionsViewDelegate;


#import "WFOverlayImageEditorCanvasView.h"
#import "WFOpacitySliderView.h"
#import "WFOverlayImageEditorOptionsView.h"

@interface WFOverlayImageEditorViewController : UIViewController <WFOverlayImageEditorOptionsViewDelegate>



@property (weak, nonatomic) WFOverlayImageEditorCanvasView *canvasView; // ivar: _canvasView
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) WFFileRepresentation *currentFile; // ivar: _currentFile
@property (copy, nonatomic) NSArray *fileRepresentations; // ivar: _fileRepresentations
@property (nonatomic) BOOL opacitySliderVisible;
@property (weak, nonatomic) WFOpacitySliderView *opacityView; // ivar: _opacityView
@property (retain, nonatomic) NSLayoutConstraint *opacityViewVerticalConstraint; // ivar: _opacityViewVerticalConstraint
@property (weak, nonatomic) WFOverlayImageEditorOptionsView *optionsView; // ivar: _optionsView
@property (retain, nonatomic) WFImage *overlayImage; // ivar: _overlayImage
@property (nonatomic) BOOL rotationEnabled;
@property (retain, nonatomic) NSMapTable *transforms; // ivar: _transforms


-(BOOL)prefersStatusBarHidden;
-(id)editorBackgroundColor;
-(id)initWithFileRepresentations:(id)arg0 overlayImage:(id)arg1 completionHandler:(id)arg2 ;
-(void)cancelEditingImage;
-(void)didChangeOpacity:(id)arg0 ;
-(void)finishEditingImage;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif