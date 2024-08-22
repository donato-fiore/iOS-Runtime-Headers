// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHAREINITIATIONANALYTICSREPORTER_H
#define PKSHAREINITIATIONANALYTICSREPORTER_H

@class PKPass;


#import "PKSharingAnalyticsReporter.h"

@interface PKShareInitiationAnalyticsReporter : PKSharingAnalyticsReporter {
    PKPass *_pass;
}




-(id)initWithPass:(id)arg0 ;
-(id)initWithPass:(id)arg0 sessionToken:(id)arg1 ;
-(void)_sendEventForPage:(NSUInteger)arg0 button:(NSUInteger)arg1 eventType:(id)arg2 specifics:(id)arg3 ;
-(void)sendAuthenticationEventForSuccess:(BOOL)arg0 specifics:(id)arg1 ;
-(void)sendDoneEventWithDidShare:(BOOL)arg0 error:(id)arg1 specifics:(id)arg2 ;
-(void)sendEvent:(id)arg0 ;
-(void)sendEventForPage:(NSUInteger)arg0 button:(NSUInteger)arg1 specifics:(id)arg2 ;
-(void)sendEventForPage:(NSUInteger)arg0 specifics:(id)arg1 ;


@end


#endif