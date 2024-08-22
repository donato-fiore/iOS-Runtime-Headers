// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNKCOREANALYTICSREPORTER_H
#define CNKCOREANALYTICSREPORTER_H


#import <Foundation/Foundation.h>


@interface CNKCoreAnalyticsReporter : NSObject



+(id)sharedInstance;
-(id)init;
-(void)reportCanceledSOSCountdownToCall:(CGFloat)arg0 ;
-(void)reportCanceledSOSCountdownToNotify:(CGFloat)arg0 ;
-(void)reportIncompatibilityTypeInvalidWithRecipientCount:(NSInteger)arg0 reason:(NSInteger)arg1 ;
-(void)reportIncompatibilityTypeLegacyWithRecipientCount:(NSInteger)arg0 reason:(NSInteger)arg1 ;
-(void)reportIncompatibilityTypeNoneWithRecipientCount:(NSInteger)arg0 reason:(NSInteger)arg1 ;
-(void)reportIncompatibilityTypeWebWithRecipientCount:(NSInteger)arg0 reason:(NSInteger)arg1 ;


@end


#endif