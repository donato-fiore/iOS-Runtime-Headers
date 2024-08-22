// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSRESULTDETAILVIEWCONTROLLER_H
#define STSRESULTDETAILVIEWCONTROLLER_H

@class UIViewController, NSURL, NSString, UIImage;
@protocol STSResultDetailViewDelegate, UIGestureRecognizerDelegate, STSResultDetailViewControllerDelegate;


#import "STSAnimatedImageInfo.h"
#import "STSResultDetailView.h"

@interface STSResultDetailViewController : UIViewController <STSResultDetailViewDelegate, UIGestureRecognizerDelegate>



@property (nonatomic) BOOL allowCustomContentViewInteraction; // ivar: _allowCustomContentViewInteraction
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (retain, nonatomic) NSURL *contentURL; // ivar: _contentURL
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<STSResultDetailViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFullscreen;
@property (retain, nonatomic) UIImage *providerIcon;
@property (nonatomic) CGSize providerIconSize;
@property (copy, nonatomic) NSString *providerName;
@property (retain, nonatomic) NSURL *providerURL; // ivar: _providerURL
@property NSUInteger queryId; // ivar: _queryId
@property (retain, nonatomic) NSString *queryString; // ivar: _queryString
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImage *thumbnail;
@property (readonly, nonatomic) STSAnimatedImageInfo *thumbnailInfo;
@property (nonatomic) BOOL useBackgroundBlur; // ivar: _useBackgroundBlur
@property (retain, nonatomic) STSResultDetailView *view;


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(id)detailView;
-(struct CGRect )contentFrameForBounds:(struct CGRect )arg0 traitCollection:(id)arg1 ;
-(void)_handleTap:(id)arg0 ;
-(void)detailViewDidTapProvider:(id)arg0 ;
-(void)detailViewDidTapSend:(id)arg0 ;
-(void)loadView;
-(void)updateCustomContentWithView:(id)arg0 ;
-(void)updateWithThumbnail:(id)arg0 orThumbnailInfo:(id)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif