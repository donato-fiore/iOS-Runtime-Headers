// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIINLINEDIALOGVIEWCONTROLLER_H
#define AMSUIINLINEDIALOGVIEWCONTROLLER_H

@class UIViewController, ACAccount, UIViewController<AMSUIMessageViewController>, NSDictionary, NSString, AMSDialogRequest, AMSEngagement, AMSBinaryPromise;
@protocol AMSUIMessageViewControllerDelegate, AMSEngagementObserver, AMSUIMessageViewController, AMSBagProtocol;


#import "AMSUIAppearance.h"

@interface AMSUIInlineDialogViewController : UIViewController <AMSUIMessageViewControllerDelegate, AMSEngagementObserver, AMSUIMessageViewController>



@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property CGPoint anchorPoint; // ivar: _anchorPoint
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (retain, nonatomic) UIViewController<AMSUIMessageViewController> *childContentController; // ivar: _childContentController
@property (retain, nonatomic) NSDictionary *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AMSUIMessageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AMSDialogRequest *dialogRequest; // ivar: _dialogRequest
@property (retain, nonatomic) AMSEngagement *engagement; // ivar: _engagement
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger impressionsReportingFrequency; // ivar: _impressionsReportingFrequency
@property (retain, nonatomic) AMSBinaryPromise *loadPromise; // ivar: _loadPromise
@property (retain, nonatomic) NSString *placement; // ivar: _placement
@property (retain, nonatomic) AMSUIAppearance *preferredAppearance;
@property (retain, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics; // ivar: _shouldAutomaticallyReportMetrics
@property (readonly) Class superclass;


-(BOOL)messageViewController:(id)arg0 shouldEnqueueMetricsForDialogResult:(id)arg1 ;
-(id)_dialogView;
-(id)_findDialogRequestInResponse:(id)arg0 ;
-(id)init;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 account:(id)arg2 ;
-(id)initWithServiceType:(id)arg0 placement:(id)arg1 ;
-(id)initWithServiceType:(id)arg0 placement:(id)arg1 bag:(id)arg2 account:(id)arg3 context:(id)arg4 ;
-(id)initWithServiceType:(id)arg0 placement:(id)arg1 context:(id)arg2 ;
-(void)_didFailToFetchWithError:(id)arg0 ;
-(void)_didFetchResponse:(id)arg0 ;
-(void)_setContentController:(id)arg0 ;
-(void)_setupEngagement;
-(void)_tearDownContentView;
-(void)engagement:(id)arg0 didUpdateRequest:(id)arg1 placement:(id)arg2 serviceType:(id)arg3 ;
-(void)engagement:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)engagement:(id)arg0 handleEngagementRequest:(id)arg1 completion:(id)arg2 ;
-(void)enqueueImpressionMetrics;
-(void)loadView;
-(void)messageViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)messageViewController:(id)arg0 didLoadDialogRequest:(id)arg1 ;
-(void)messageViewController:(id)arg0 didSelectActionWithDialogResult:(id)arg1 ;
-(void)messageViewController:(id)arg0 didUpdateSize:(struct CGSize )arg1 ;
-(void)messageViewController:(id)arg0 enqueueEventWithFields:(id)arg1 inTopic:(id)arg2 ;
-(void)messageViewControllerDidDismiss:(id)arg0 ;


@end


#endif