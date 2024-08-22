// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NTKCFACEDETAILPHOTOCROPVIEWCONTROLLER_H
#define _NTKCFACEDETAILPHOTOCROPVIEWCONTROLLER_H

@class UIViewController, CAShapeLayer, UIView, UIBarButtonItem, NSString;
@protocol UIScrollViewDelegate;


#import "NTKCCenteringScrollView.h"
#import "NTKDigitalTimeLabel.h"
#import "NTKCompanionCustomPhotosEditor.h"
#import "NTKFace.h"
#import "NTKDigitalTimeLabelStyle.h"

@interface _NTKCFaceDetailPhotoCropViewController : UIViewController <UIScrollViewDelegate>

 {
    CAShapeLayer *_reverseMask;
    NTKCCenteringScrollView *_scrollView;
    CGFloat _photoScale;
    CAShapeLayer *_mask;
    UIView *_timeContainer;
    NTKDigitalTimeLabel *_time;
    UIBarButtonItem *_deleteButton;
    UIBarButtonItem *_cancelButton;
    BOOL _cancelConfirmed;
    BOOL _deleteConfirmed;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NTKCompanionCustomPhotosEditor *editor; // ivar: _editor
@property (retain, nonatomic) NTKFace *face; // ivar: _face
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger index; // ivar: _index
@property (readonly) Class superclass;
@property (retain, nonatomic) NTKDigitalTimeLabelStyle *timeStyle; // ivar: _timeStyle


-(id)initWithIndex:(NSUInteger)arg0 inPhotosEditor:(id)arg1 forFace:(id)arg2 timeStyle:(id)arg3 completionHandler:(id)arg4 ;
-(void)_cancelPressed;
-(void)_deletePressed;
-(void)_donePressed;
-(void)dismissWithSaving:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif