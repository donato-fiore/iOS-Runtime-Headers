// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCEMAILSIGNUPCONFIG_H
#define FCEMAILSIGNUPCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCEmailSignupConfig : NSObject

@property (copy, nonatomic) NSString *alertAcceptActionTitle; // ivar: _alertAcceptActionTitle
@property (copy, nonatomic) NSString *alertDeclineActionTitle; // ivar: _alertDeclineActionTitle
@property (copy, nonatomic) NSString *alertEmailAvailableMessage; // ivar: _alertEmailAvailableMessage
@property (copy, nonatomic) NSString *alertEmailUnavailableMessage; // ivar: _alertEmailUnavailableMessage
@property (copy, nonatomic) NSString *alertTitle; // ivar: _alertTitle
@property (nonatomic) NSUInteger emailSignupStyle; // ivar: _emailSignupStyle
@property (copy, nonatomic) NSString *landingPageArticleID; // ivar: _landingPageArticleID


-(id)initWithConfigDictionary:(id)arg0 ;


@end


#endif