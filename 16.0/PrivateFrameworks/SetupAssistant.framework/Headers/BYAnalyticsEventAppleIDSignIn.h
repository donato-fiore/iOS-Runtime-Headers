// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BYANALYTICSEVENTAPPLEIDSIGNIN_H
#define BYANALYTICSEVENTAPPLEIDSIGNIN_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface BYAnalyticsEventAppleIDSignIn : NSObject

@property (nonatomic) NSDate *authenticationStartDate; // ivar: _authenticationStartDate
@property (nonatomic) NSDate *completionDate; // ivar: _completionDate
@property (nonatomic) NSUInteger context; // ivar: _context
@property (nonatomic) NSDate *signInStartDate; // ivar: _signInStartDate


-(id)_eventPayload;
-(id)initWithAnalyticsManager:(id)arg0 context:(NSUInteger)arg1 ;
-(void)markSignInCompleted;
-(void)markSignInStartedAfterAuthenticationCompleted;


@end


#endif