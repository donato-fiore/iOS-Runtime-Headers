// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDASHBOARDPASSMESSAGE_H
#define PKDASHBOARDPASSMESSAGE_H

@class NSDictionary, NSString, UIImage;

#import <Foundation/Foundation.h>


@interface PKDashboardPassMessage : NSObject

@property (copy, nonatomic) id *actionOnButtonPress; // ivar: _actionOnButtonPress
@property (copy, nonatomic) id *actionOnDismiss; // ivar: _actionOnDismiss
@property (copy, nonatomic) id *actionOnMessagePress; // ivar: _actionOnMessagePress
@property (copy, nonatomic) NSDictionary *additionalEventAnalyticsOnButtonPress; // ivar: _additionalEventAnalyticsOnButtonPress
@property (nonatomic) NSString *analyticsReporterSubject; // ivar: _analyticsReporterSubject
@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) BOOL isDestructiveAction; // ivar: _isDestructiveAction
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic, getter=canReportToAnalytics) BOOL reportToAnalytics; // ivar: _reportToAnalytics
@property (nonatomic) BOOL showDisclosure; // ivar: _showDisclosure
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type




@end


#endif