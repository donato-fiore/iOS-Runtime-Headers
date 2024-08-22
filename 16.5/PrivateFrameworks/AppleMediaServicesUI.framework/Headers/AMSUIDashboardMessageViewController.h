// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIDASHBOARDMESSAGEVIEWCONTROLLER_H
#define AMSUIDASHBOARDMESSAGEVIEWCONTROLLER_H

@class NSString, AMSBinaryPromise;
@protocol AMSUIMessageViewController;


#import "AMSUIBaseMessageViewController.h"
#import "AMSUIDashboardMessageAppearance.h"

@interface AMSUIDashboardMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger impressionsReportingFrequency;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (retain, nonatomic) AMSUIDashboardMessageAppearance *preferredAppearance; // ivar: _preferredAppearance
@property (retain, nonatomic) AMSUIDashboardMessageAppearance *requestAppearance; // ivar: _requestAppearance
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) Class superclass;


-(NSInteger)_primaryImageRenderingMode;
-(NSUInteger)_messageStyle;
-(id)_defaultPreferredImageSymbolConfiguration;
-(id)_effectiveImageSymbolConfiguration;
-(id)_messageLabelAttributes;
-(id)_titleLabelAttributes;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 account:(id)arg2 ;
-(void)_commitAppearance;
-(void)_setDialogRequest:(id)arg0 ;


@end


#endif