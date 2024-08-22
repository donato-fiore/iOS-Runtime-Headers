// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDTTRPROMPTCONTROLLER_H
#define HDTTRPROMPTCONTROLLER_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDTTRPromptController : NSObject {
    HDProfile *_profile;
    NSObject<OS_os_log> *_loggingCategory;
    uint8_t _isPresenting;
}


@property (nonatomic) BOOL canRepromptOnSameBuild; // ivar: _canRepromptOnSameBuild
@property (nonatomic) NSInteger maximumErrorCount; // ivar: _maximumErrorCount
@property (nonatomic) CGFloat minimumPromptInterval; // ivar: _minimumPromptInterval
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *notificationMessage; // ivar: _notificationMessage
@property (copy, nonatomic) NSString *notificationTitle; // ivar: _notificationTitle
@property (copy, nonatomic) NSString *radarDescription; // ivar: _radarDescription
@property (copy, nonatomic) NSString *radarTitle; // ivar: _radarTitle
@property (copy, nonatomic) id *unitTest_willPresentTTRAlertHandler; // ivar: _unitTest_willPresentTTRAlertHandler


+(id)formattedPersistedValuesForDomainName:(id)arg0 database:(id)arg1 error:(*id)arg2 ;
-(BOOL)unitTest_setLastPromptBuild:(id)arg0 error:(*id)arg1 ;
-(BOOL)unitTest_setLastPromptDate:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithProfile:(id)arg0 domainName:(id)arg1 loggingCategory:(id)arg2 ;
-(void)promptIfRequiredForReason:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;


@end


#endif