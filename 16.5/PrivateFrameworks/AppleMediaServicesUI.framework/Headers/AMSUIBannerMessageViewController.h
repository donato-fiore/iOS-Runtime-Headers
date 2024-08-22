// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIBANNERMESSAGEVIEWCONTROLLER_H
#define AMSUIBANNERMESSAGEVIEWCONTROLLER_H

@class NSString, AMSBinaryPromise;
@protocol AMSUIMessageViewController;


#import "AMSUIBaseMessageViewController.h"
#import "AMSUIBannerAppearance.h"

@interface AMSUIBannerMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger impressionsReportingFrequency;
@property (retain, nonatomic) AMSBinaryPromise *loadPromise;
@property (retain, nonatomic) AMSUIBannerAppearance *preferredAppearance; // ivar: _preferredAppearance
@property (retain, nonatomic) AMSUIBannerAppearance *requestAppearance; // ivar: _requestAppearance
@property (nonatomic) BOOL shouldAutomaticallyReportMetrics;
@property (readonly) Class superclass;


-(NSInteger)_primaryImageRenderingMode;
-(NSUInteger)_messageStyle;
-(id)_defaultPreferredImageSymbolConfiguration;
-(id)_effectiveImageSymbolConfiguration;
-(id)_messageLabelAttributes;
-(id)_messageLabelAttributesCompatibleWith:(id)arg0 ;
-(id)_titleLabelAttributes;
-(id)_titleLabelAttributesCompatibleWith:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 bag:(id)arg1 account:(id)arg2 ;
-(void)_commitAppearance;
-(void)_setDialogRequest:(id)arg0 ;


@end


#endif