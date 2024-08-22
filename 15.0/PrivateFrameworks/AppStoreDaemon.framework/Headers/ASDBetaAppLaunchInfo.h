// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDBETAAPPLAUNCHINFO_H
#define ASDBETAAPPLAUNCHINFO_H

@class NSString, NSDate, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ASDBetaAppDisplayNames.h"
#import "ASDBetaAppVersion.h"

@interface ASDBetaAppLaunchInfo : NSObject <NSSecureCoding>



@property (copy) NSString *artistName; // ivar: _artistName
@property (copy) ASDBetaAppDisplayNames *displayNames; // ivar: _displayNames
@property (copy) NSDate *expirationDate; // ivar: _expirationDate
@property (getter=isFeedbackEnabled) BOOL feedbackEnabled; // ivar: _feedbackEnabled
@property (copy) NSString *iconURLTemplate; // ivar: _iconURLTemplate
@property (copy) NSDate *lastWelcomeScreenViewDate; // ivar: _lastWelcomeScreenViewDate
@property (getter=isLaunchScreenEnabled) BOOL launchScreenEnabled; // ivar: _launchScreenEnabled
@property (copy) NSDictionary *localizedTestNotes; // ivar: _localizedTestNotes
@property (getter=hasSharedFeedback) BOOL sharedFeedback; // ivar: _sharedFeedback
@property (copy) NSString *testerEmail; // ivar: _testerEmail
@property (copy) ASDBetaAppVersion *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif