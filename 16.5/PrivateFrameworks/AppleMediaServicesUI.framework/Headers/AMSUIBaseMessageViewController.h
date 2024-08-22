// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIBASEMESSAGEVIEWCONTROLLER_H
#define AMSUIBASEMESSAGEVIEWCONTROLLER_H

@class UIViewController, UIImageSymbolConfiguration, UIImage, NSDictionary, ACAccount, NSString, AMSDialogRequest, AMSBinaryPromise;
@protocol AMSUIMessageViewDelegate, AMSUIMessageViewController, AMSBagProtocol, AMSUIMessageViewControllerDelegate;


#import "AMSUIMessageView.h"

@interface AMSUIBaseMessageViewController : UIViewController <AMSUIMessageViewDelegate, AMSUIMessageViewController>



@property (readonly, nonatomic) UIImageSymbolConfiguration *_effectiveImageSymbolConfiguration;
@property (nonatomic) BOOL _isLoadingImage; // ivar: __isLoadingImage
@property (retain, nonatomic) UIImage *_loadedImage; // ivar: __loadedImage
@property (readonly, nonatomic) NSDictionary *_messageLabelAttributes; // ivar: __messageLabelAttributes
@property (readonly, nonatomic) NSUInteger _messageStyle;
@property (readonly, nonatomic) AMSUIMessageView *_messageView;
@property (readonly, nonatomic) NSInteger _primaryImageRenderingMode;
@property (readonly, nonatomic) NSDictionary *_titleLabelAttributes; // ivar: __titleLabelAttributes
@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIMessageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AMSDialogRequest *dialogRequest; // ivar: _dialogRequest
@property (nonatomic) BOOL didEnqueueMetrics; // ivar: _didEnqueueMetrics
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger impressionsReportingFrequency; // ivar: _impressionsReportingFrequency
@property (nonatomic) BOOL isImageSymbolImage; // ivar: _isImageSymbolImage
@property (retain, nonatomic) AMSBinaryPromise *loadPromise; // ivar: _loadPromise
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics; // ivar: _shouldAutomaticallyReportMetrics
@property (readonly) Class superclass;


-(id)_messageLabelAttributesCompatibleWith:(id)arg0 ;
-(id)_titleLabelAttributesCompatibleWith:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 account:(id)arg2 ;
-(void)_commitAppearance;
-(void)_didTapActionButton:(id)arg0 ;
-(void)_notifyMetricsFields:(id)arg0 ;
-(void)_preloadImageIfNeeded;
-(void)_setImageWithURL:(id)arg0 ;
-(void)_updateTextWithAttributes;
-(void)_updateTextWithAttributes:(id)arg0 ;
-(void)ams_messageViewDidUpdateOverrideTraitCollection:(id)arg0 ;
-(void)enqueueImpressionEngagementMetrics;
-(void)enqueueImpressionMetrics;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif