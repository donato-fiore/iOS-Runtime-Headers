// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDPASSMESSAGE_H
#define PKDASHBOARDPASSMESSAGE_H

@class NSDictionary, NSString, CNContact, AMSDialogRequest, UIImage, UIColor;

#import <Foundation/Foundation.h>


@interface PKDashboardPassMessage : NSObject

@property (copy, nonatomic) id *actionOnButtonPress; // ivar: _actionOnButtonPress
@property (copy, nonatomic) id *actionOnDismiss; // ivar: _actionOnDismiss
@property (copy, nonatomic) id *actionOnMessagePress; // ivar: _actionOnMessagePress
@property (copy, nonatomic) id *actionOnViewed; // ivar: _actionOnViewed
@property (copy, nonatomic) NSDictionary *additionalEventAnalyticsOnButtonPress; // ivar: _additionalEventAnalyticsOnButtonPress
@property (copy, nonatomic) NSString *analyticsIdentifier; // ivar: _analyticsIdentifier
@property (nonatomic) NSString *analyticsReporterSubject; // ivar: _analyticsReporterSubject
@property (retain, nonatomic) CNContact *avatarContact; // ivar: _avatarContact
@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (retain, nonatomic) AMSDialogRequest *dialogRequest; // ivar: _dialogRequest
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIColor *imageTintColor; // ivar: _imageTintColor
@property (nonatomic) BOOL isDestructiveAction; // ivar: _isDestructiveAction
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic, getter=canReportToAnalytics) BOOL reportToAnalytics; // ivar: _reportToAnalytics
@property (copy, nonatomic) NSString *secondaryMessage; // ivar: _secondaryMessage
@property (copy, nonatomic) NSString *secondaryTitle; // ivar: _secondaryTitle
@property (nonatomic) BOOL showDisclosure; // ivar: _showDisclosure
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)messageFromDialogRequest:(id)arg0 withAction:(id)arg1 ;


@end


#endif