// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCMARKUPACTIVITY_H
#define DCMARKUPACTIVITY_H

@class UIActivity, UIView, UIViewController;


#import "ICDocCamDocumentInfo.h"
#import "ICDocCamImageCache.h"

@interface DCMarkupActivity : UIActivity

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) ICDocCamDocumentInfo *documentInfo; // ivar: _documentInfo
@property (copy, nonatomic) id *frameBlock; // ivar: _frameBlock
@property (weak, nonatomic) UIView *fromView; // ivar: _fromView
@property (retain, nonatomic) ICDocCamImageCache *imageCache; // ivar: _imageCache
@property (nonatomic) NSUInteger inkStyle; // ivar: _inkStyle
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
// -(id)initFromView:(id)arg0 presentingViewController:(id)arg1 frameBlock:(id)arg2 completionBlock:(unk)arg3  ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif