// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIACCOUNTMESSAGEVIEWCONTROLLER_H
#define AMSUIACCOUNTMESSAGEVIEWCONTROLLER_H

@class NSString, AMSBinaryPromise;
@protocol AMSUIMessageViewController;


#import "AMSUIBaseMessageViewController.h"
#import "AMSUIAccountMessageAppearance.h"

@interface AMSUIAccountMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAnimateFirstImpression; // ivar: _didAnimateFirstImpression
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger impressionsReportingFrequency;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (retain, nonatomic) AMSUIAccountMessageAppearance *preferredAppearance; // ivar: _preferredAppearance
@property (retain, nonatomic) AMSUIAccountMessageAppearance *requestAppearance; // ivar: _requestAppearance
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) Class superclass;


-(NSInteger)_impressionAnimationStyle;
-(NSInteger)_primaryImageRenderingMode;
-(NSUInteger)_messageStyle;
-(id)_defaultPreferredImageSymbolConfiguration;
-(id)_effectiveImageSymbolConfiguration;
-(id)_messageLabelAttributes;
-(id)_titleLabelAttributes;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 account:(id)arg2 ;
-(void)_commitAnimationLaunch;
-(void)_commitAppearance;
-(void)_prepareAnimationLaunch;
-(void)_setDialogRequest:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif