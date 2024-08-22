// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDBACKLIKEITORNOTCOMBOUIVIEWCONTROLLER_H
#define PXFEEDBACKLIKEITORNOTCOMBOUIVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView;
@protocol PXFeedbackFormDelegate;



@interface PXFeedbackLikeItOrNotComboUIViewController : UIViewController

@property (readonly, nonatomic) UIActivityIndicatorView *_activityIndicatorView; // ivar: __activityIndicatorView
@property (nonatomic) BOOL _showsActivityIndicator; // ivar: __showsActivityIndicator
@property (retain, nonatomic) NSObject<PXFeedbackFormDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)_dislikedIt:(id)arg0 ;
-(void)_doFileRadar:(id)arg0 ;
-(void)_fileRadar:(id)arg0 ;
-(void)_likedIt:(id)arg0 ;
-(void)_provideFeedback:(id)arg0 ;
-(void)cancelFeedback:(id)arg0 ;
-(void)finishWithSuccess:(BOOL)arg0 ;
-(void)setShowsActivityIndicator:(BOOL)arg0 ;
-(void)showMoreFeedbackForm;
-(void)viewDidLoad;


@end


#endif