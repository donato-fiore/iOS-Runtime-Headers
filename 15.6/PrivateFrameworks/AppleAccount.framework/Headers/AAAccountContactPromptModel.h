// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAACCOUNTCONTACTPROMPTMODEL_H
#define AAACCOUNTCONTACTPROMPTMODEL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AALocalContactInfo.h"

@interface AAAccountContactPromptModel : NSObject

@property (retain, nonatomic) AALocalContactInfo *contact; // ivar: _contact
@property (nonatomic) BOOL destructiveActionRequiresAuth; // ivar: _destructiveActionRequiresAuth
@property (copy, nonatomic) NSString *destructiveActionSheetCancelText; // ivar: _destructiveActionSheetCancelText
@property (copy, nonatomic) NSString *destructiveActionSheetDetails; // ivar: _destructiveActionSheetDetails
@property (copy, nonatomic) NSString *destructiveActionSheetTitle; // ivar: _destructiveActionSheetTitle
@property (copy, nonatomic) NSString *destructiveActionText; // ivar: _destructiveActionText
@property (copy, nonatomic) NSString *detailsLabel; // ivar: _detailsLabel
@property (copy, nonatomic) NSString *detailsSubtitle; // ivar: _detailsSubtitle
@property (copy, nonatomic) NSString *doneButtonTitle; // ivar: _doneButtonTitle
@property (nonatomic) BOOL primaryActionRequiresAuth; // ivar: _primaryActionRequiresAuth
@property (copy, nonatomic) NSString *primaryActionText; // ivar: _primaryActionText
@property (copy, nonatomic) NSString *secondaryActionText; // ivar: _secondaryActionText
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;


@end


#endif