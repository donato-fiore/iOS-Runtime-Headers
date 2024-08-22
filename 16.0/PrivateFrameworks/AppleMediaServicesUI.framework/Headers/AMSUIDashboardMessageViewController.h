// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIDASHBOARDMESSAGEVIEWCONTROLLER_H
#define AMSUIDASHBOARDMESSAGEVIEWCONTROLLER_H

@class UIViewController, NSString, AMSBinaryPromise, UIImage, AMSDialogRequest;
@protocol AMSUIMessageViewController, AMSUIMessageViewControllerDelegate;


#import "AMSUIDashboardMessageAppearance.h"

@interface AMSUIDashboardMessageViewController : UIViewController <AMSUIMessageViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIMessageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didEnqueueMetrics; // ivar: _didEnqueueMetrics
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLoadingImage; // ivar: _isLoadingImage
@property (retain, nonatomic) AMSBinaryPromise *loadPromise; // ivar: _loadPromise
@property (retain, nonatomic) UIImage *loadedImage; // ivar: _loadedImage
@property (retain, nonatomic) AMSUIDashboardMessageAppearance *preferredAppearance; // ivar: _preferredAppearance
@property (retain, nonatomic) AMSDialogRequest *request; // ivar: _request
@property (retain, nonatomic) AMSUIDashboardMessageAppearance *requestAppearance; // ivar: _requestAppearance
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics; // ivar: _shouldAutomaticallyReportMetrics
@property (readonly) Class superclass;


-(NSInteger)_primaryImageRenderingMode;
-(id)_messageLabelAttributes;
-(id)_titleLabelAttributes;
-(id)initWithRequest:(id)arg0 ;
-(id)messageView;
-(void)_commitAppearance;
-(void)_didTapActionButton:(id)arg0 ;
-(void)_notifyMetricsFields:(id)arg0 ;
-(void)_preloadImageIfNeeded;
-(void)_setDialogRequest:(id)arg0 ;
-(void)_setImageWithURL:(id)arg0 ;
-(void)_updateTextWithAttributes;
-(void)enqueueImpressionMetrics;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif